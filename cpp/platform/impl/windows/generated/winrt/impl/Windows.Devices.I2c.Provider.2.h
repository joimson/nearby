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

#ifndef WINRT_Windows_Devices_I2c_Provider_2_H
#define WINRT_Windows_Devices_I2c_Provider_2_H
#include "winrt/impl/Windows.Devices.I2c.Provider.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::I2c::Provider
{
    struct ProviderI2cTransferResult
    {
        winrt::Windows::Devices::I2c::Provider::ProviderI2cTransferStatus Status;
        uint32_t BytesTransferred;
    };
    inline bool operator==(ProviderI2cTransferResult const& left, ProviderI2cTransferResult const& right) noexcept
    {
        return left.Status == right.Status && left.BytesTransferred == right.BytesTransferred;
    }
    inline bool operator!=(ProviderI2cTransferResult const& left, ProviderI2cTransferResult const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) ProviderI2cConnectionSettings : winrt::Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings
    {
        ProviderI2cConnectionSettings(std::nullptr_t) noexcept {}
        ProviderI2cConnectionSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::I2c::Provider::IProviderI2cConnectionSettings(ptr, take_ownership_from_abi) {}
        ProviderI2cConnectionSettings(ProviderI2cConnectionSettings const&) noexcept = default;
        ProviderI2cConnectionSettings(ProviderI2cConnectionSettings&&) noexcept = default;
        ProviderI2cConnectionSettings& operator=(ProviderI2cConnectionSettings const&) & noexcept = default;
        ProviderI2cConnectionSettings& operator=(ProviderI2cConnectionSettings&&) & noexcept = default;
    };
}
#endif
