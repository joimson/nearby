// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "internal/platform/ble_v2.h"

#include <memory>

#include "internal/platform/bluetooth_adapter.h"
#include "internal/platform/implementation/ble_v2.h"
#include "internal/platform/logging.h"
#include "internal/platform/mutex_lock.h"

namespace location {
namespace nearby {

using ::location::nearby::api::ble_v2::BleAdvertisementData;
using ::location::nearby::api::ble_v2::GattCharacteristic;
using ::location::nearby::api::ble_v2::PowerMode;

bool BleV2Medium::StartAdvertising(
    const BleAdvertisementData& advertising_data,
    const BleAdvertisementData& scan_response_data, PowerMode power_mode) {
  return impl_->StartAdvertising(advertising_data, scan_response_data,
                                 power_mode);
}

bool BleV2Medium::StopAdvertising() { return impl_->StopAdvertising(); }

bool BleV2Medium::StartScanning(const std::vector<std::string>& service_uuids,
                                PowerMode power_mode, ScanCallback callback) {
  MutexLock lock(&mutex_);
  if (scanning_enabled_) {
    NEARBY_LOG(INFO, "Ble Scanning already enabled; impl=%p", GetImpl());
    return false;
  }
  bool success = impl_->StartScanning(
      service_uuids, power_mode,
      {
          .advertisement_found_cb =
              [this](api::ble_v2::BlePeripheral& peripheral,
                     const BleAdvertisementData& advertisement_data) {
                MutexLock lock(&mutex_);
                auto pair = peripherals_.insert(
                    {&peripheral, absl::make_unique<ScanningInfo>()});
                auto& context = *pair.first->second;
                if (!pair.second) {
                  NEARBY_LOGS(INFO)
                      << "Adding (again) peripheral=" << &context.peripheral
                      << ", impl=" << &peripheral;
                  return;
                }
                context.peripheral = BleV2Peripheral(&peripheral);
                NEARBY_LOGS(INFO) << "Adding peripheral=" << &context.peripheral
                                  << ", impl=" << &peripheral;
                if (!scanning_enabled_) return;
                scan_callback_.advertisement_found_cb(context.peripheral,
                                                      advertisement_data);
              },
      });
  if (success) {
    scan_callback_ = std::move(callback);
    peripherals_.clear();
    scanning_enabled_ = true;
    NEARBY_LOG(INFO, "Ble Scanning enabled; impl=%p", GetImpl());
  }
  return true;
}

bool BleV2Medium::StopScanning() {
  MutexLock lock(&mutex_);
  if (!scanning_enabled_) return true;
  scanning_enabled_ = false;
  scan_callback_ = {};
  peripherals_.clear();
  NEARBY_LOG(INFO, "Ble Scanning disabled: impl=%p", GetImpl());
  return impl_->StopScanning();
}

std::unique_ptr<GattServer> BleV2Medium::StartGattServer(
    ServerGattConnectionCallback callback) {
  {
    MutexLock lock(&mutex_);
    server_gatt_connection_callback_ = std::move(callback);
  }

  std::unique_ptr<api::ble_v2::GattServer> api_gatt_server =
      impl_->StartGattServer({
          .characteristic_subscription_cb =
              [this](api::ble_v2::ServerGattConnection& connection,
                     const GattCharacteristic& characteristic) {
                MutexLock lock(&mutex_);
                ServerGattConnection server_gatt_connection(&connection);
                server_gatt_connection_callback_.characteristic_subscription_cb(
                    server_gatt_connection, characteristic);
              },
          .characteristic_unsubscription_cb =
              [this](api::ble_v2::ServerGattConnection& connection,
                     const GattCharacteristic& characteristic) {
                MutexLock lock(&mutex_);
                ServerGattConnection server_gatt_connection(&connection);
                server_gatt_connection_callback_
                    .characteristic_unsubscription_cb(server_gatt_connection,
                                                      characteristic);
              },
      });
  return std::make_unique<GattServer>(std::move(api_gatt_server));
}

}  // namespace nearby
}  // namespace location
