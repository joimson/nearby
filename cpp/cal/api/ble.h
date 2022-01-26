// Copyright 2021 Google LLC
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

#ifndef CAL_API_BLE_H_
#define CAL_API_BLE_H_

#include <map>
#include <memory>
#include <set>

#include "absl/strings/string_view.h"
#include "absl/time/time.h"
#include "absl/types/optional.h"
#include "third_party/nearby/cpp/cal/base/ble_types.h"

namespace nearby {
namespace cal {
namespace api {

// TODO(b/213835576): Refactor BlePeripheral. The one in BluetoothAdapter should
// be considered, too.
// Opaque wrapper over a BLE peripheral. Must contain enough data about a
// particular BLE device to connect to its GATT server.
class BlePeripheral {
 public:
  virtual ~BlePeripheral() = default;

  virtual std::string GetName() const = 0;
  virtual std::string GetAddress() const = 0;
  virtual location::nearby::ByteArray GetAdvertisementBytes() const = 0;
};

struct ScanResult {
  std::unique_ptr<BlePeripheral> peripheral;
  int rssi;
  int tx_power;
  absl::Time timestamp;
};

// https://developer.android.com/reference/android/bluetooth/BluetoothGattCharacteristic
//
// Representation of a GATT characteristic.
struct GattCharacteristic {
  enum class Permission {
    kUnknown = 0,
    kRead = 1,
    kWrite = 2,
    kLast,
  };

  enum class Property {
    kUnknown = 0,
    kRead = 1,
    kWrite = 2,
    kIndicate = 3,
    kLast,
  };

  std::string uuid;
  std::string servie_uuid;

  // Hashable
  template <typename H>
  friend H AbslHashValue(H h, const GattCharacteristic& s) {
    return H::combine(std::move(h), s.uuid, s.servie_uuid);
  }
  bool operator==(const GattCharacteristic& rhs) const {
    return this->uuid == rhs.uuid && this->servie_uuid == rhs.servie_uuid;
  }
};

class ClientGattConnection {
 public:
  virtual ~ClientGattConnection() {}
  virtual BlePeripheral& GetPeripheral() = 0;
  virtual bool DiscoverServices() = 0;
  virtual absl::optional<GattCharacteristic*> GetCharacteristic(
      absl::string_view service_uuid,
      absl::string_view characteristic_uuid) = 0;
  virtual absl::optional<location::nearby::ByteArray> ReadCharacteristic(
      const GattCharacteristic& characteristic) = 0;
  virtual bool WriteCharacteristic(
      const GattCharacteristic& characteristic,
      const location::nearby::ByteArray& value) = 0;
  virtual void Disconnect() = 0;
  virtual bool SetCharacteristicNotification(
      const GattCharacteristic& characteristic, bool enable) = 0;
};

// https://developer.android.com/reference/android/bluetooth/BluetoothGattServer
//
// Representation of a server GATT connection to a remote GATT client.
class ServerGattConnection {
 public:
  virtual ~ServerGattConnection() = default;

  // https://developer.android.com/reference/android/bluetooth/BluetoothGattCharacteristic.html#setValue(byte[])
  // https://developer.android.com/reference/android/bluetooth/BluetoothGattServer.html#notifyCharacteristicChanged(android.bluetooth.BluetoothDevice,%20android.bluetooth.BluetoothGattCharacteristic,%20boolean)
  //
  // Sends a notification (via indication) to the client that a characteristic
  // has changed with the given value. Returns whether or not it was successful.
  //
  // The value sent does not have to reflect the locally stored characteristic
  // value. To update the local value, call GattServer::UpdateCharacteristic.
  virtual bool SendCharacteristic(const GattCharacteristic& characteristic,
                                  const location::nearby::ByteArray& value) = 0;
};

class ClientGattConnectionLifeCycleCallback {
 public:
  virtual ~ClientGattConnectionLifeCycleCallback() {}
  virtual void OnDisconnected(ClientGattConnection* connection) = 0;
  virtual void onConnectionStateChange(ClientGattConnection* connection) = 0;
  virtual void onCharacteristicRead(ClientGattConnection* connection) = 0;
};

// Callback for asynchronous events on the server side of a GATT connection.
struct ServerGattConnectionCallback {
  // Called when a remote peripheral connected to us and subscribed to one of
  // our characteristics.
  std::function<void(ServerGattConnection& connection,
                     const GattCharacteristic& characteristic)>
      characteristic_subscription_cb;

  // Called when a remote peripheral unsubscribed from one of our
  // characteristics.
  std::function<void(ServerGattConnection& connection,
                     const GattCharacteristic& characteristic)>
      characteristic_unsubscription_cb;
};

// https://developer.android.com/reference/android/bluetooth/BluetoothGattServer
//
// Representation of a BLE GATT server.
class GattServer {
 public:
  virtual ~GattServer() = default;

  // Creates a characteristic and adds it to the GATT server under the given
  // characteristic and service UUIDs. Returns no value upon error.
  //
  // Characteristics of the same service UUID should be put under one
  // service rather than many services with the same UUID.
  //
  // If the INDICATE property is included, the characteristic should include the
  // official Bluetooth Client Characteristic Configuration descriptor with UUID
  // 0x2902 and a WRITE permission. This allows remote clients to write to this
  // descriptor and subscribe for characteristic changes. For more information
  // about this descriptor, please go to:
  // https://www.bluetooth.com/specifications/Gatt/viewer?attributeXmlFile=org.bluetooth.descriptor.Gatt.client_characteristic_configuration.xml
  virtual absl::optional<GattCharacteristic> CreateCharacteristic(
      absl::string_view service_uuid, absl::string_view characteristic_uuid,
      const std::vector<GattCharacteristic::Permission>& permissions,
      const std::vector<GattCharacteristic::Property>& properties) = 0;

  // https://developer.android.com/reference/android/bluetooth/BluetoothGattCharacteristic.html#setValue(byte[])
  //
  // Locally updates the value of a characteristic and returns whether or not it
  // was successful.
  virtual bool UpdateCharacteristic(
      const GattCharacteristic& characteristic,
      const location::nearby::ByteArray& value) = 0;

  // Stops a GATT server.
  virtual void Stop() = 0;
};

class BleSocket {
 public:
  virtual ~BleSocket() {}
  virtual api::BlePeripheral& GetRemotePeripheral() = 0;
  virtual location::nearby::Exception Write(
      const location::nearby::ByteArray& message) = 0;
  virtual location::nearby::Exception Close() = 0;
  virtual location::nearby::InputStream& GetInputStream() = 0;
  virtual location::nearby::OutputStream& GetOutputStream() = 0;
};

class BleSocketLifeCycleCallback {
 public:
  virtual ~BleSocketLifeCycleCallback() {}
  virtual void OnMessageReceived(
      BleSocket* socket, const location::nearby::ByteArray& message) = 0;
  virtual void OnDisconnected(BleSocket* socket) = 0;
};

class ServerBleSocketLifeCycleCallback : public BleSocketLifeCycleCallback {
 public:
  ~ServerBleSocketLifeCycleCallback() override {}
  virtual void OnSocketEstablished(BleSocket& socket) = 0;
};

// The main BLE medium used inside of Nearby. This serves as the entry point for
// all BLE and GATT related operations.
class BleMedium {
 public:
  using Mtu = uint32_t;

  virtual ~BleMedium() = default;

  // https://developer.android.com/reference/android/bluetooth/le/BluetoothLeAdvertiser.html#startAdvertising(android.bluetooth.le.AdvertiseSettings,%20android.bluetooth.le.AdvertiseData,%20android.bluetooth.le.AdvertiseData,%20android.bluetooth.le.AdvertiseCallback)
  //
  // Starts BLE advertising and returns whether or not it was successful.
  //
  // Power mode should be interpreted in the following way:
  //   LOW:
  //     - TX power = medium
  //   HIGH:
  //     - TX power = high
  virtual bool StartAdvertising(const BleAdvertisementData& advertising_data,
                                const BleAdvertisementData& scan_response_data,
                                PowerMode power_mode) = 0;

  // https://developer.android.com/reference/android/bluetooth/le/BluetoothLeAdvertiser.html#stopAdvertising(android.bluetooth.le.AdvertiseCallback)
  //
  // Stops advertising.
  virtual bool StopAdvertising() = 0;

  // https://developer.android.com/reference/android/bluetooth/le/ScanCallback
  //
  // Callback for BLE scan results.
  struct ScanCallback {
    std::function<void(const BleAdvertisementData& advertisement_data)>
        advertisement_found_cb =
            location::nearby::DefaultCallback<const BleAdvertisementData&>();
  };

  // https://developer.android.com/reference/android/bluetooth/le/BluetoothLeScanner.html#startScan(java.util.List%3Candroid.bluetooth.le.ScanFilter%3E,%20android.bluetooth.le.ScanSettings,%20android.bluetooth.le.ScanCallback)
  //
  // Starts scanning and returns whether or not it was successful.
  //
  // Power mode should be interpreted in the following way:
  //   LOW:
  //     - Scan window = ~512ms
  //     - Scan interval = ~5120ms
  //   HIGH:
  //     - Scan window = ~4096ms
  //     - Scan interval = ~4096ms
  virtual bool StartScanning(const std::vector<std::string>& service_uuids,
                             PowerMode power_mode,
                             const ScanCallback& callback) = 0;

  // https://developer.android.com/reference/android/bluetooth/le/BluetoothLeScanner.html#stopScan(android.bluetooth.le.ScanCallback)
  //
  // Stops scanning.
  virtual bool StopScanning() = 0;

  // https://developer.android.com/reference/android/bluetooth/BluetoothManager#openGattServer(android.content.Context,%20android.bluetooth.BluetoothGattServerCallback)
  //
  // Starts a GATT server. Returns a nullptr upon error.
  virtual std::unique_ptr<GattServer> StartGattServer(
      ServerGattConnectionCallback callback) = 0;

  virtual bool StartListeningForIncomingBleSockets(
      const ServerBleSocketLifeCycleCallback& callback) = 0;
  virtual void StopListeningForIncomingBleSockets() = 0;
  virtual std::unique_ptr<ClientGattConnection> ConnectToGattServer(
      BlePeripheral* peripheral, Mtu mtu, PowerMode power_mode,
      const ClientGattConnectionLifeCycleCallback& callback) = 0;
  virtual std::unique_ptr<BleSocket> EstablishBleSocket(
      BlePeripheral* peripheral,
      const BleSocketLifeCycleCallback& callback) = 0;
};

}  // namespace api
}  // namespace cal
}  // namespace nearby

#endif  // CAL_API_BLE_H_
