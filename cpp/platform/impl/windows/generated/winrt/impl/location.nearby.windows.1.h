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

#ifndef WINRT_location_nearby_windows_1_H
#define WINRT_location_nearby_windows_1_H
#include "winrt/impl/location.nearby.windows.0.h"
WINRT_EXPORT namespace winrt::location::nearby::windows
{
    struct __declspec(empty_bases) IBluetoothClassicMedium :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBluetoothClassicMedium>
    {
        IBluetoothClassicMedium(std::nullptr_t = nullptr) noexcept {}
        IBluetoothClassicMedium(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBluetoothClassicMedium(IBluetoothClassicMedium const&) noexcept = default;
        IBluetoothClassicMedium(IBluetoothClassicMedium&&) noexcept = default;
        IBluetoothClassicMedium& operator=(IBluetoothClassicMedium const&) & noexcept = default;
        IBluetoothClassicMedium& operator=(IBluetoothClassicMedium&&) & noexcept = default;
    };
}
#endif
