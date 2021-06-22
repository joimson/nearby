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

#ifndef WINRT_Windows_Devices_2_H
#define WINRT_Windows_Devices_2_H
#include "winrt/impl/Windows.Devices.Adc.Provider.1.h"
#include "winrt/impl/Windows.Devices.Gpio.Provider.1.h"
#include "winrt/impl/Windows.Devices.I2c.Provider.1.h"
#include "winrt/impl/Windows.Devices.Pwm.Provider.1.h"
#include "winrt/impl/Windows.Devices.Spi.Provider.1.h"
#include "winrt/impl/Windows.Devices.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices
{
    struct __declspec(empty_bases) LowLevelDevicesAggregateProvider : winrt::Windows::Devices::ILowLevelDevicesAggregateProvider
    {
        LowLevelDevicesAggregateProvider(std::nullptr_t) noexcept {}
        LowLevelDevicesAggregateProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::ILowLevelDevicesAggregateProvider(ptr, take_ownership_from_abi) {}
        LowLevelDevicesAggregateProvider(winrt::Windows::Devices::Adc::Provider::IAdcControllerProvider const& adc, winrt::Windows::Devices::Pwm::Provider::IPwmControllerProvider const& pwm, winrt::Windows::Devices::Gpio::Provider::IGpioControllerProvider const& gpio, winrt::Windows::Devices::I2c::Provider::II2cControllerProvider const& i2c, winrt::Windows::Devices::Spi::Provider::ISpiControllerProvider const& spi);
        LowLevelDevicesAggregateProvider(LowLevelDevicesAggregateProvider const&) noexcept = default;
        LowLevelDevicesAggregateProvider(LowLevelDevicesAggregateProvider&&) noexcept = default;
        LowLevelDevicesAggregateProvider& operator=(LowLevelDevicesAggregateProvider const&) & noexcept = default;
        LowLevelDevicesAggregateProvider& operator=(LowLevelDevicesAggregateProvider&&) & noexcept = default;
    };
    struct __declspec(empty_bases) LowLevelDevicesController : winrt::Windows::Devices::ILowLevelDevicesController
    {
        LowLevelDevicesController(std::nullptr_t) noexcept {}
        LowLevelDevicesController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::ILowLevelDevicesController(ptr, take_ownership_from_abi) {}
        LowLevelDevicesController(LowLevelDevicesController const&) noexcept = default;
        LowLevelDevicesController(LowLevelDevicesController&&) noexcept = default;
        LowLevelDevicesController& operator=(LowLevelDevicesController const&) & noexcept = default;
        LowLevelDevicesController& operator=(LowLevelDevicesController&&) & noexcept = default;
        [[nodiscard]] static auto DefaultProvider();
        static auto DefaultProvider(winrt::Windows::Devices::ILowLevelDevicesAggregateProvider const& value);
    };
}
#endif
