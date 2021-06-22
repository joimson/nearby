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

#ifndef WINRT_Windows_Devices_I2c_Provider_1_H
#define WINRT_Windows_Devices_I2c_Provider_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Devices.I2c.Provider.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::I2c::Provider
{
    struct __declspec(empty_bases) II2cControllerProvider :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<II2cControllerProvider>
    {
        II2cControllerProvider(std::nullptr_t = nullptr) noexcept {}
        II2cControllerProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        II2cControllerProvider(II2cControllerProvider const&) noexcept = default;
        II2cControllerProvider(II2cControllerProvider&&) noexcept = default;
        II2cControllerProvider& operator=(II2cControllerProvider const&) & noexcept = default;
        II2cControllerProvider& operator=(II2cControllerProvider&&) & noexcept = default;
    };
    struct __declspec(empty_bases) II2cDeviceProvider :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<II2cDeviceProvider>,
        impl::require<winrt::Windows::Devices::I2c::Provider::II2cDeviceProvider, winrt::Windows::Foundation::IClosable>
    {
        II2cDeviceProvider(std::nullptr_t = nullptr) noexcept {}
        II2cDeviceProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        II2cDeviceProvider(II2cDeviceProvider const&) noexcept = default;
        II2cDeviceProvider(II2cDeviceProvider&&) noexcept = default;
        II2cDeviceProvider& operator=(II2cDeviceProvider const&) & noexcept = default;
        II2cDeviceProvider& operator=(II2cDeviceProvider&&) & noexcept = default;
    };
    struct __declspec(empty_bases) II2cProvider :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<II2cProvider>
    {
        II2cProvider(std::nullptr_t = nullptr) noexcept {}
        II2cProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        II2cProvider(II2cProvider const&) noexcept = default;
        II2cProvider(II2cProvider&&) noexcept = default;
        II2cProvider& operator=(II2cProvider const&) & noexcept = default;
        II2cProvider& operator=(II2cProvider&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IProviderI2cConnectionSettings :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IProviderI2cConnectionSettings>
    {
        IProviderI2cConnectionSettings(std::nullptr_t = nullptr) noexcept {}
        IProviderI2cConnectionSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IProviderI2cConnectionSettings(IProviderI2cConnectionSettings const&) noexcept = default;
        IProviderI2cConnectionSettings(IProviderI2cConnectionSettings&&) noexcept = default;
        IProviderI2cConnectionSettings& operator=(IProviderI2cConnectionSettings const&) & noexcept = default;
        IProviderI2cConnectionSettings& operator=(IProviderI2cConnectionSettings&&) & noexcept = default;
    };
}
#endif
