// Copyright 2020 Google LLC
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

// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Windows_Devices_Usb_2_H
#define WINRT_Windows_Devices_Usb_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Devices.Usb.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Usb
{
    struct __declspec(empty_bases) UsbBulkInEndpointDescriptor : winrt::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor
    {
        UsbBulkInEndpointDescriptor(std::nullptr_t) noexcept {}
        UsbBulkInEndpointDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbBulkInEndpointDescriptor(ptr, take_ownership_from_abi) {}
        UsbBulkInEndpointDescriptor(UsbBulkInEndpointDescriptor const&) noexcept = default;
        UsbBulkInEndpointDescriptor(UsbBulkInEndpointDescriptor&&) noexcept = default;
        UsbBulkInEndpointDescriptor& operator=(UsbBulkInEndpointDescriptor const&) & noexcept = default;
        UsbBulkInEndpointDescriptor& operator=(UsbBulkInEndpointDescriptor&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UsbBulkInPipe : winrt::Windows::Devices::Usb::IUsbBulkInPipe
    {
        UsbBulkInPipe(std::nullptr_t) noexcept {}
        UsbBulkInPipe(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbBulkInPipe(ptr, take_ownership_from_abi) {}
        UsbBulkInPipe(UsbBulkInPipe const&) noexcept = default;
        UsbBulkInPipe(UsbBulkInPipe&&) noexcept = default;
        UsbBulkInPipe& operator=(UsbBulkInPipe const&) & noexcept = default;
        UsbBulkInPipe& operator=(UsbBulkInPipe&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UsbBulkOutEndpointDescriptor : winrt::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor
    {
        UsbBulkOutEndpointDescriptor(std::nullptr_t) noexcept {}
        UsbBulkOutEndpointDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbBulkOutEndpointDescriptor(ptr, take_ownership_from_abi) {}
        UsbBulkOutEndpointDescriptor(UsbBulkOutEndpointDescriptor const&) noexcept = default;
        UsbBulkOutEndpointDescriptor(UsbBulkOutEndpointDescriptor&&) noexcept = default;
        UsbBulkOutEndpointDescriptor& operator=(UsbBulkOutEndpointDescriptor const&) & noexcept = default;
        UsbBulkOutEndpointDescriptor& operator=(UsbBulkOutEndpointDescriptor&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UsbBulkOutPipe : winrt::Windows::Devices::Usb::IUsbBulkOutPipe
    {
        UsbBulkOutPipe(std::nullptr_t) noexcept {}
        UsbBulkOutPipe(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbBulkOutPipe(ptr, take_ownership_from_abi) {}
        UsbBulkOutPipe(UsbBulkOutPipe const&) noexcept = default;
        UsbBulkOutPipe(UsbBulkOutPipe&&) noexcept = default;
        UsbBulkOutPipe& operator=(UsbBulkOutPipe const&) & noexcept = default;
        UsbBulkOutPipe& operator=(UsbBulkOutPipe&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UsbConfiguration : winrt::Windows::Devices::Usb::IUsbConfiguration
    {
        UsbConfiguration(std::nullptr_t) noexcept {}
        UsbConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbConfiguration(ptr, take_ownership_from_abi) {}
        UsbConfiguration(UsbConfiguration const&) noexcept = default;
        UsbConfiguration(UsbConfiguration&&) noexcept = default;
        UsbConfiguration& operator=(UsbConfiguration const&) & noexcept = default;
        UsbConfiguration& operator=(UsbConfiguration&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UsbConfigurationDescriptor : winrt::Windows::Devices::Usb::IUsbConfigurationDescriptor
    {
        UsbConfigurationDescriptor(std::nullptr_t) noexcept {}
        UsbConfigurationDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbConfigurationDescriptor(ptr, take_ownership_from_abi) {}
        UsbConfigurationDescriptor(UsbConfigurationDescriptor const&) noexcept = default;
        UsbConfigurationDescriptor(UsbConfigurationDescriptor&&) noexcept = default;
        UsbConfigurationDescriptor& operator=(UsbConfigurationDescriptor const&) & noexcept = default;
        UsbConfigurationDescriptor& operator=(UsbConfigurationDescriptor&&) & noexcept = default;
        static auto TryParse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor, winrt::Windows::Devices::Usb::UsbConfigurationDescriptor& parsed);
        static auto Parse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor);
    };
    struct __declspec(empty_bases) UsbControlRequestType : winrt::Windows::Devices::Usb::IUsbControlRequestType
    {
        UsbControlRequestType(std::nullptr_t) noexcept {}
        UsbControlRequestType(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbControlRequestType(ptr, take_ownership_from_abi) {}
        UsbControlRequestType();
        UsbControlRequestType(UsbControlRequestType const&) noexcept = default;
        UsbControlRequestType(UsbControlRequestType&&) noexcept = default;
        UsbControlRequestType& operator=(UsbControlRequestType const&) & noexcept = default;
        UsbControlRequestType& operator=(UsbControlRequestType&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UsbDescriptor : winrt::Windows::Devices::Usb::IUsbDescriptor
    {
        UsbDescriptor(std::nullptr_t) noexcept {}
        UsbDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbDescriptor(ptr, take_ownership_from_abi) {}
        UsbDescriptor(UsbDescriptor const&) noexcept = default;
        UsbDescriptor(UsbDescriptor&&) noexcept = default;
        UsbDescriptor& operator=(UsbDescriptor const&) & noexcept = default;
        UsbDescriptor& operator=(UsbDescriptor&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UsbDevice : winrt::Windows::Devices::Usb::IUsbDevice
    {
        UsbDevice(std::nullptr_t) noexcept {}
        UsbDevice(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbDevice(ptr, take_ownership_from_abi) {}
        UsbDevice(UsbDevice const&) noexcept = default;
        UsbDevice(UsbDevice&&) noexcept = default;
        UsbDevice& operator=(UsbDevice const&) & noexcept = default;
        UsbDevice& operator=(UsbDevice&&) & noexcept = default;
        static auto GetDeviceSelector(uint32_t vendorId, uint32_t productId, winrt::guid const& winUsbInterfaceClass);
        static auto GetDeviceSelector(winrt::guid const& winUsbInterfaceClass);
        static auto GetDeviceSelector(uint32_t vendorId, uint32_t productId);
        static auto GetDeviceClassSelector(winrt::Windows::Devices::Usb::UsbDeviceClass const& usbClass);
        static auto FromIdAsync(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) UsbDeviceClass : winrt::Windows::Devices::Usb::IUsbDeviceClass
    {
        UsbDeviceClass(std::nullptr_t) noexcept {}
        UsbDeviceClass(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbDeviceClass(ptr, take_ownership_from_abi) {}
        UsbDeviceClass();
        UsbDeviceClass(UsbDeviceClass const&) noexcept = default;
        UsbDeviceClass(UsbDeviceClass&&) noexcept = default;
        UsbDeviceClass& operator=(UsbDeviceClass const&) & noexcept = default;
        UsbDeviceClass& operator=(UsbDeviceClass&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UsbDeviceClasses : winrt::Windows::Devices::Usb::IUsbDeviceClasses
    {
        UsbDeviceClasses(std::nullptr_t) noexcept {}
        UsbDeviceClasses(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbDeviceClasses(ptr, take_ownership_from_abi) {}
        UsbDeviceClasses(UsbDeviceClasses const&) noexcept = default;
        UsbDeviceClasses(UsbDeviceClasses&&) noexcept = default;
        UsbDeviceClasses& operator=(UsbDeviceClasses const&) & noexcept = default;
        UsbDeviceClasses& operator=(UsbDeviceClasses&&) & noexcept = default;
        [[nodiscard]] static auto CdcControl();
        [[nodiscard]] static auto Physical();
        [[nodiscard]] static auto PersonalHealthcare();
        [[nodiscard]] static auto ActiveSync();
        [[nodiscard]] static auto PalmSync();
        [[nodiscard]] static auto DeviceFirmwareUpdate();
        [[nodiscard]] static auto Irda();
        [[nodiscard]] static auto Measurement();
        [[nodiscard]] static auto VendorSpecific();
    };
    struct __declspec(empty_bases) UsbDeviceDescriptor : winrt::Windows::Devices::Usb::IUsbDeviceDescriptor
    {
        UsbDeviceDescriptor(std::nullptr_t) noexcept {}
        UsbDeviceDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbDeviceDescriptor(ptr, take_ownership_from_abi) {}
        UsbDeviceDescriptor(UsbDeviceDescriptor const&) noexcept = default;
        UsbDeviceDescriptor(UsbDeviceDescriptor&&) noexcept = default;
        UsbDeviceDescriptor& operator=(UsbDeviceDescriptor const&) & noexcept = default;
        UsbDeviceDescriptor& operator=(UsbDeviceDescriptor&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UsbEndpointDescriptor : winrt::Windows::Devices::Usb::IUsbEndpointDescriptor
    {
        UsbEndpointDescriptor(std::nullptr_t) noexcept {}
        UsbEndpointDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbEndpointDescriptor(ptr, take_ownership_from_abi) {}
        UsbEndpointDescriptor(UsbEndpointDescriptor const&) noexcept = default;
        UsbEndpointDescriptor(UsbEndpointDescriptor&&) noexcept = default;
        UsbEndpointDescriptor& operator=(UsbEndpointDescriptor const&) & noexcept = default;
        UsbEndpointDescriptor& operator=(UsbEndpointDescriptor&&) & noexcept = default;
        static auto TryParse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor, winrt::Windows::Devices::Usb::UsbEndpointDescriptor& parsed);
        static auto Parse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor);
    };
    struct __declspec(empty_bases) UsbInterface : winrt::Windows::Devices::Usb::IUsbInterface
    {
        UsbInterface(std::nullptr_t) noexcept {}
        UsbInterface(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbInterface(ptr, take_ownership_from_abi) {}
        UsbInterface(UsbInterface const&) noexcept = default;
        UsbInterface(UsbInterface&&) noexcept = default;
        UsbInterface& operator=(UsbInterface const&) & noexcept = default;
        UsbInterface& operator=(UsbInterface&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UsbInterfaceDescriptor : winrt::Windows::Devices::Usb::IUsbInterfaceDescriptor
    {
        UsbInterfaceDescriptor(std::nullptr_t) noexcept {}
        UsbInterfaceDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbInterfaceDescriptor(ptr, take_ownership_from_abi) {}
        UsbInterfaceDescriptor(UsbInterfaceDescriptor const&) noexcept = default;
        UsbInterfaceDescriptor(UsbInterfaceDescriptor&&) noexcept = default;
        UsbInterfaceDescriptor& operator=(UsbInterfaceDescriptor const&) & noexcept = default;
        UsbInterfaceDescriptor& operator=(UsbInterfaceDescriptor&&) & noexcept = default;
        static auto TryParse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor, winrt::Windows::Devices::Usb::UsbInterfaceDescriptor& parsed);
        static auto Parse(winrt::Windows::Devices::Usb::UsbDescriptor const& descriptor);
    };
    struct __declspec(empty_bases) UsbInterfaceSetting : winrt::Windows::Devices::Usb::IUsbInterfaceSetting
    {
        UsbInterfaceSetting(std::nullptr_t) noexcept {}
        UsbInterfaceSetting(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbInterfaceSetting(ptr, take_ownership_from_abi) {}
        UsbInterfaceSetting(UsbInterfaceSetting const&) noexcept = default;
        UsbInterfaceSetting(UsbInterfaceSetting&&) noexcept = default;
        UsbInterfaceSetting& operator=(UsbInterfaceSetting const&) & noexcept = default;
        UsbInterfaceSetting& operator=(UsbInterfaceSetting&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UsbInterruptInEndpointDescriptor : winrt::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor
    {
        UsbInterruptInEndpointDescriptor(std::nullptr_t) noexcept {}
        UsbInterruptInEndpointDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbInterruptInEndpointDescriptor(ptr, take_ownership_from_abi) {}
        UsbInterruptInEndpointDescriptor(UsbInterruptInEndpointDescriptor const&) noexcept = default;
        UsbInterruptInEndpointDescriptor(UsbInterruptInEndpointDescriptor&&) noexcept = default;
        UsbInterruptInEndpointDescriptor& operator=(UsbInterruptInEndpointDescriptor const&) & noexcept = default;
        UsbInterruptInEndpointDescriptor& operator=(UsbInterruptInEndpointDescriptor&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UsbInterruptInEventArgs : winrt::Windows::Devices::Usb::IUsbInterruptInEventArgs
    {
        UsbInterruptInEventArgs(std::nullptr_t) noexcept {}
        UsbInterruptInEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbInterruptInEventArgs(ptr, take_ownership_from_abi) {}
        UsbInterruptInEventArgs(UsbInterruptInEventArgs const&) noexcept = default;
        UsbInterruptInEventArgs(UsbInterruptInEventArgs&&) noexcept = default;
        UsbInterruptInEventArgs& operator=(UsbInterruptInEventArgs const&) & noexcept = default;
        UsbInterruptInEventArgs& operator=(UsbInterruptInEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UsbInterruptInPipe : winrt::Windows::Devices::Usb::IUsbInterruptInPipe
    {
        UsbInterruptInPipe(std::nullptr_t) noexcept {}
        UsbInterruptInPipe(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbInterruptInPipe(ptr, take_ownership_from_abi) {}
        UsbInterruptInPipe(UsbInterruptInPipe const&) noexcept = default;
        UsbInterruptInPipe(UsbInterruptInPipe&&) noexcept = default;
        UsbInterruptInPipe& operator=(UsbInterruptInPipe const&) & noexcept = default;
        UsbInterruptInPipe& operator=(UsbInterruptInPipe&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UsbInterruptOutEndpointDescriptor : winrt::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor
    {
        UsbInterruptOutEndpointDescriptor(std::nullptr_t) noexcept {}
        UsbInterruptOutEndpointDescriptor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbInterruptOutEndpointDescriptor(ptr, take_ownership_from_abi) {}
        UsbInterruptOutEndpointDescriptor(UsbInterruptOutEndpointDescriptor const&) noexcept = default;
        UsbInterruptOutEndpointDescriptor(UsbInterruptOutEndpointDescriptor&&) noexcept = default;
        UsbInterruptOutEndpointDescriptor& operator=(UsbInterruptOutEndpointDescriptor const&) & noexcept = default;
        UsbInterruptOutEndpointDescriptor& operator=(UsbInterruptOutEndpointDescriptor&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UsbInterruptOutPipe : winrt::Windows::Devices::Usb::IUsbInterruptOutPipe
    {
        UsbInterruptOutPipe(std::nullptr_t) noexcept {}
        UsbInterruptOutPipe(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbInterruptOutPipe(ptr, take_ownership_from_abi) {}
        UsbInterruptOutPipe(UsbInterruptOutPipe const&) noexcept = default;
        UsbInterruptOutPipe(UsbInterruptOutPipe&&) noexcept = default;
        UsbInterruptOutPipe& operator=(UsbInterruptOutPipe const&) & noexcept = default;
        UsbInterruptOutPipe& operator=(UsbInterruptOutPipe&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UsbSetupPacket : winrt::Windows::Devices::Usb::IUsbSetupPacket
    {
        UsbSetupPacket(std::nullptr_t) noexcept {}
        UsbSetupPacket(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Usb::IUsbSetupPacket(ptr, take_ownership_from_abi) {}
        UsbSetupPacket();
        explicit UsbSetupPacket(winrt::Windows::Storage::Streams::IBuffer const& eightByteBuffer);
        UsbSetupPacket(UsbSetupPacket const&) noexcept = default;
        UsbSetupPacket(UsbSetupPacket&&) noexcept = default;
        UsbSetupPacket& operator=(UsbSetupPacket const&) & noexcept = default;
        UsbSetupPacket& operator=(UsbSetupPacket&&) & noexcept = default;
    };
}
#endif
