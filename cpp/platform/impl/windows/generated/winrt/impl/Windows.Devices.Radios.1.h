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

#ifndef WINRT_Windows_Devices_Radios_1_H
#define WINRT_Windows_Devices_Radios_1_H
#include "winrt/impl/Windows.Devices.Radios.0.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Radios
{
    struct __declspec(empty_bases) IRadio :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRadio>
    {
        IRadio(std::nullptr_t = nullptr) noexcept {}
        IRadio(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IRadio(IRadio const&) noexcept = default;
        IRadio(IRadio&&) noexcept = default;
        IRadio& operator=(IRadio const&) & noexcept = default;
        IRadio& operator=(IRadio&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IRadioStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRadioStatics>
    {
        IRadioStatics(std::nullptr_t = nullptr) noexcept {}
        IRadioStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IRadioStatics(IRadioStatics const&) noexcept = default;
        IRadioStatics(IRadioStatics&&) noexcept = default;
        IRadioStatics& operator=(IRadioStatics const&) & noexcept = default;
        IRadioStatics& operator=(IRadioStatics&&) & noexcept = default;
    };
}
#endif
