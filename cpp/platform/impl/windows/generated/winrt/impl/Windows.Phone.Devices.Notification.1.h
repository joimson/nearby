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

#ifndef WINRT_Windows_Phone_Devices_Notification_1_H
#define WINRT_Windows_Phone_Devices_Notification_1_H
#include "winrt/impl/Windows.Phone.Devices.Notification.0.h"
WINRT_EXPORT namespace winrt::Windows::Phone::Devices::Notification
{
    struct __declspec(empty_bases) IVibrationDevice :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVibrationDevice>
    {
        IVibrationDevice(std::nullptr_t = nullptr) noexcept {}
        IVibrationDevice(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IVibrationDevice(IVibrationDevice const&) noexcept = default;
        IVibrationDevice(IVibrationDevice&&) noexcept = default;
        IVibrationDevice& operator=(IVibrationDevice const&) & noexcept = default;
        IVibrationDevice& operator=(IVibrationDevice&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IVibrationDeviceStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVibrationDeviceStatics>
    {
        IVibrationDeviceStatics(std::nullptr_t = nullptr) noexcept {}
        IVibrationDeviceStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IVibrationDeviceStatics(IVibrationDeviceStatics const&) noexcept = default;
        IVibrationDeviceStatics(IVibrationDeviceStatics&&) noexcept = default;
        IVibrationDeviceStatics& operator=(IVibrationDeviceStatics const&) & noexcept = default;
        IVibrationDeviceStatics& operator=(IVibrationDeviceStatics&&) & noexcept = default;
    };
}
#endif
