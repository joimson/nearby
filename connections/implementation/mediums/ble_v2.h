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

#ifndef CORE_INTERNAL_MEDIUMS_BLE_V2_H_
#define CORE_INTERNAL_MEDIUMS_BLE_V2_H_

#include <cstdint>
#include <memory>
#include <string>
#include <utility>

#include "absl/container/flat_hash_map.h"
#include "absl/container/flat_hash_set.h"
#include "absl/strings/string_view.h"
#include "connections/advertising_options.h"
#include "connections/implementation/mediums/ble_v2/discovered_peripheral_callback.h"
#include "connections/implementation/mediums/ble_v2/discovered_peripheral_tracker.h"
#include "connections/implementation/mediums/bluetooth_radio.h"
#include "internal/platform/ble_v2.h"
#include "internal/platform/byte_array.h"
#include "internal/platform/mutex.h"
#include "internal/platform/mutex_lock.h"

namespace location {
namespace nearby {
namespace connections {

// TODO(b/213691253): Add BleV2 medium tests after more functions are ready.
//  Provides the operations that can be performed on the Bluetooth Low Energy
//  (BLE) medium.
class BleV2 final {
 public:
  using ServerGattConnectionCallback =
      BleV2Medium::ServerGattConnectionCallback;
  using DiscoveredPeripheralCallback = mediums::DiscoveredPeripheralCallback;

  explicit BleV2(BluetoothRadio& bluetooth_radio);

  // Returns true, if Ble communications are supported by a platform.
  bool IsAvailable() const ABSL_LOCKS_EXCLUDED(mutex_);

  // Starts Ble advertising, delivering additional information through a GATT
  // server.
  bool StartAdvertising(const std::string& service_id,
                        const ByteArray& advertisement_bytes,
                        PowerLevel power_level,
                        const std::string& fast_advertisement_service_uuid)
      ABSL_LOCKS_EXCLUDED(mutex_);

  // Disables Ble advertising.
  bool StopAdvertising(const std::string& service_id)
      ABSL_LOCKS_EXCLUDED(mutex_);

  bool IsAdvertising(const std::string& service_id) ABSL_LOCKS_EXCLUDED(mutex_);

  // Starts scanning for BLE advertisements (if it is possible for the device).
  bool StartScanning(const std::string& service_id,
                     DiscoveredPeripheralCallback callback,
                     PowerLevel power_level,
                     const std::string& fast_advertisement_service_uuid)
      ABSL_LOCKS_EXCLUDED(mutex_);

  // Stops scanning for BLE advertisements.
  bool StopScanning(const std::string& service_id) ABSL_LOCKS_EXCLUDED(mutex_);

  bool IsScanning(const std::string& service_id) ABSL_LOCKS_EXCLUDED(mutex_);

  // Returns true if this object owns a valid platform implementation.
  bool IsMediumValid() const ABSL_LOCKS_EXCLUDED(mutex_) {
    MutexLock lock(&mutex_);
    return medium_.IsValid();
  }

  // Returns true if this object has a valid BluetoothAdapter reference.
  bool IsAdapterValid() const ABSL_LOCKS_EXCLUDED(mutex_) {
    MutexLock lock(&mutex_);

    return adapter_.IsValid();
  }

 private:
  struct AdvertisingInfo {
    bool Empty() const { return service_ids.empty(); }
    void Clear() { service_ids.clear(); }
    void Add(const std::string& service_id) { service_ids.insert(service_id); }
    void Remove(const std::string& service_id) {
      service_ids.erase(service_id);
    }
    bool Exists(const std::string& service_id) const {
      return service_ids.contains(service_id);
    }

    absl::flat_hash_set<std::string> service_ids;
  };

  struct GattServerInfo {
    GattServer gatt_server;
  };

  struct ScanningInfo {
    bool Empty() const { return service_ids.empty(); }
    void Clear() { service_ids.clear(); }
    void Add(const std::string& service_id) { service_ids.emplace(service_id); }
    void Remove(const std::string& service_id) {
      service_ids.erase(service_id);
    }
    bool Exists(const std::string& service_id) const {
      return service_ids.contains(service_id);
    }

    absl::flat_hash_set<std::string> service_ids;
  };

  static constexpr absl::string_view kCopresenceServiceUuid =
      "0000FEF3-0000-1000-8000-00805F9B34FB";

  // These two values make up the base UUID we use when advertising a slot.
  // The base is an all zero Version-3 name-based UUID. To turn this into an
  // advertisement slot UUID, we simply OR the least significant bits with the
  // slot number.
  //
  // More info about the format can be found here:
  // https://en.wikipedia.org/wiki/Universally_unique_identifier#Versions_3_and_5_(namespace_name-based)
  static constexpr std::int64_t kAdvertisementUuidMsb = 0x0000000000003000;
  static constexpr std::int64_t kAdvertisementUuidLsb = 0x8000000000000000;

  // Same as IsAvailable(), but must be called with mutex_ held.
  bool IsAvailableLocked() const ABSL_EXCLUSIVE_LOCKS_REQUIRED(mutex_);

  // Same as IsAdvertising(), but must be called with mutex_ held.
  bool IsAdvertisingLocked(const std::string& service_id)
      ABSL_EXCLUSIVE_LOCKS_REQUIRED(mutex_);

  // Same as IsScanning(), but must be called with mutex_ held.
  bool IsScanningLocked(const std::string& service_id)
      ABSL_EXCLUSIVE_LOCKS_REQUIRED(mutex_);

  bool IsAdvertisementGattServerRunningLocked()
      ABSL_EXCLUSIVE_LOCKS_REQUIRED(mutex_);
  bool StartAdvertisementGattServerLocked(const std::string& service_id,
                                          const ByteArray& gatt_advertisement)
      ABSL_EXCLUSIVE_LOCKS_REQUIRED(mutex_);
  bool GenerateAdvertisementCharacteristic(int slot,
                                           const ByteArray& gatt_advertisement,
                                           GattServer& gatt_server)
      ABSL_EXCLUSIVE_LOCKS_REQUIRED(mutex_);
  bool StopAdvertisementGattServerLocked()
      ABSL_EXCLUSIVE_LOCKS_REQUIRED(mutex_);

  ByteArray CreateAdvertisementHeader() ABSL_SHARED_LOCKS_REQUIRED(mutex_);
  std::string GenerateAdvertisementUuid(int slot);

  // Extract connection advertisement from medium advertisement.
  ByteArray UnwrapAdvertisementBytes(
      const ByteArray& medium_advertisement_data);
  api::ble_v2::PowerMode PowerLevelToPowerMode(PowerLevel power_level);

  mutable Mutex mutex_;
  BluetoothRadio& radio_ ABSL_GUARDED_BY(mutex_);
  BluetoothAdapter& adapter_ ABSL_GUARDED_BY(mutex_);
  BleV2Medium medium_ ABSL_GUARDED_BY(mutex_){adapter_};
  AdvertisingInfo advertising_info_ ABSL_GUARDED_BY(mutex_);
  std::unique_ptr<GattServerInfo> gatt_server_info_ ABSL_GUARDED_BY(mutex_);
  absl::flat_hash_map<int, std::pair<std::string, ByteArray>>
      gatt_advertisements_ ABSL_GUARDED_BY(mutex_);
  absl::flat_hash_set<api::ble_v2::GattCharacteristic>
      subscribed_gatt_characteristics_ ABSL_GUARDED_BY(mutex_);
  ScanningInfo scanning_info_ ABSL_GUARDED_BY(mutex_);
  DiscoveredPeripheralCallback discovered_peripheral_callback_;
  std::unique_ptr<mediums::DiscoveredPeripheralTracker>
      discovered_peripheral_tracker_ =
          absl::make_unique<mediums::DiscoveredPeripheralTracker>();
};

}  // namespace connections
}  // namespace nearby
}  // namespace location

#endif  // CORE_INTERNAL_MEDIUMS_BLE_V2_H_
