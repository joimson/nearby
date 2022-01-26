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

#ifndef PLATFORM_PUBLIC_BLE_V2_H_
#define PLATFORM_PUBLIC_BLE_V2_H_

#include "absl/container/flat_hash_map.h"
#include "third_party/nearby/cpp/cal/api/ble.h"
#include "third_party/nearby/cpp/cal/base/ble_types.h"
#include "internal/platform/bluetooth_adapter.h"
#include "internal/platform/byte_array.h"
#include "internal/platform/cancellation_flag.h"
#include "internal/platform/implementation/platform.h"
#include "internal/platform/input_stream.h"
#include "internal/platform/mutex.h"
#include "internal/platform/output_stream.h"

namespace location {
namespace nearby {

// Opaque wrapper over a ServerGattConnection.
class ServerGattConnection final {
 public:
  ServerGattConnection() = default;
  ServerGattConnection(const ServerGattConnection&) = default;
  ServerGattConnection& operator=(const ServerGattConnection&) = default;
  explicit ServerGattConnection(
      ::nearby::cal::api::ServerGattConnection* server_gatt_connection)
      : impl_(server_gatt_connection) {}
  explicit ServerGattConnection(
      std::unique_ptr<::nearby::cal::api::ServerGattConnection>
          server_gatt_connection)
      : impl_(server_gatt_connection.release()) {}
  ~ServerGattConnection() = default;

  bool SendCharacteristic(
      const ::nearby::cal::api::GattCharacteristic& characteristic,
      const location::nearby::ByteArray& value) {
    return impl_->SendCharacteristic(characteristic, value);
  }

  ::nearby::cal::api::ServerGattConnection& GetImpl() { return *impl_; }

  bool IsValid() const { return impl_ != nullptr; }

 private:
  ::nearby::cal::api::ServerGattConnection* impl_;
};

class GattServer final {
 public:
  GattServer() = default;
  explicit GattServer(::nearby::cal::api::GattServer* gatt_server)
      : impl_(gatt_server) {}
  explicit GattServer(
      std::unique_ptr<::nearby::cal::api::GattServer> gatt_server)
      : impl_(gatt_server.release()) {}
  GattServer(const GattServer&) = default;
  GattServer& operator=(const GattServer&) = default;
  ~GattServer() = default;

  absl::optional<::nearby::cal::api::GattCharacteristic> CreateCharacteristic(
      const std::string& service_uuid, const std::string& characteristic_uuid,
      const std::vector<::nearby::cal::api::GattCharacteristic::Permission>&
          permissions,
      const std::vector<::nearby::cal::api::GattCharacteristic::Property>&
          properties) {
    return impl_->CreateCharacteristic(service_uuid, characteristic_uuid,
                                       permissions, properties);
  }

  bool UpdateCharacteristic(
      const ::nearby::cal::api::GattCharacteristic& characteristic,
      const ByteArray& value) {
    return impl_->UpdateCharacteristic(characteristic, value);
  }

  void Stop() { return impl_->Stop(); }

  // Returns true if a gatt_server is usable. If this method returns false,
  // it is not safe to call any other method.
  bool IsValid() const { return impl_ != nullptr; }

  // Returns reference to platform implementation.
  // This is used to communicate with platform code, and for debugging purposes.
  ::nearby::cal::api::GattServer& GetImpl() { return *impl_; }

 private:
  std::shared_ptr<::nearby::cal::api::GattServer> impl_;
};

// Container of operations that can be performed over the BLE medium.
class BleV2Medium final {
 public:
  using Platform = api::ImplementationPlatform;

  struct ScanCallback {
    std::function<void(
        const ::nearby::cal::BleAdvertisementData& advertisement_data)>
        advertisement_found_cb = location::nearby::DefaultCallback<
            const ::nearby::cal::BleAdvertisementData&>();
  };

  struct ScanningInfo {
    BlePeripheral peripheral;
  };

  struct ServerGattConnectionCallback {
    std::function<void(
        ServerGattConnection& connection,
        const ::nearby::cal::api::GattCharacteristic& characteristic)>
        characteristic_subscription_cb = location::nearby::DefaultCallback<
            ServerGattConnection&,
            const ::nearby::cal::api::GattCharacteristic&>();
    std::function<void(
        ServerGattConnection& connection,
        const ::nearby::cal::api::GattCharacteristic& characteristic)>
        characteristic_unsubscription_cb = location::nearby::DefaultCallback<
            ServerGattConnection&,
            const ::nearby::cal::api::GattCharacteristic&>();
  };

  explicit BleV2Medium(BluetoothAdapter& adapter)
      : impl_(Platform::CreateBleV2Medium(adapter.GetImpl())),
        adapter_(adapter) {}

  // Returns true once the BLE advertising has been initiated.
  bool StartAdvertising(
      const ::nearby::cal::BleAdvertisementData& advertising_data,
      const ::nearby::cal::BleAdvertisementData& scan_response_data,
      ::nearby::cal::PowerMode power_mode);
  bool StopAdvertising();

  // Returns true once the BLE scan has been initiated.
  bool StartScanning(const std::vector<std::string>& service_uuids,
                     ::nearby::cal::PowerMode power_mode,
                     ScanCallback callback);
  bool StopScanning();

  GattServer StartGattServer(ServerGattConnectionCallback callback);

  bool IsValid() const { return impl_ != nullptr; }

  ::nearby::cal::api::BleMedium& GetImpl() { return *impl_; }
  BluetoothAdapter& GetAdapter() { return adapter_; }

 private:
  Mutex mutex_;
  std::unique_ptr<::nearby::cal::api::BleMedium> impl_;
  BluetoothAdapter& adapter_;
  ServerGattConnectionCallback server_gatt_connection_callback_
      ABSL_GUARDED_BY(mutex_);
  ScanCallback scan_callback_ ABSL_GUARDED_BY(mutex_);
};

}  // namespace nearby
}  // namespace location

#endif  // PLATFORM_PUBLIC_BLE_V2_H_
