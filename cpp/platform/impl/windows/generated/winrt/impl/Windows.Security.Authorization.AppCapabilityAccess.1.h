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

#ifndef WINRT_Windows_Security_Authorization_AppCapabilityAccess_1_H
#define WINRT_Windows_Security_Authorization_AppCapabilityAccess_1_H
#include "winrt/impl/Windows.Security.Authorization.AppCapabilityAccess.0.h"
WINRT_EXPORT namespace winrt::Windows::Security::Authorization::AppCapabilityAccess
{
    struct __declspec(empty_bases) IAppCapability :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppCapability>
    {
        IAppCapability(std::nullptr_t = nullptr) noexcept {}
        IAppCapability(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IAppCapability(IAppCapability const&) noexcept = default;
        IAppCapability(IAppCapability&&) noexcept = default;
        IAppCapability& operator=(IAppCapability const&) & noexcept = default;
        IAppCapability& operator=(IAppCapability&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IAppCapabilityAccessChangedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppCapabilityAccessChangedEventArgs>
    {
        IAppCapabilityAccessChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAppCapabilityAccessChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IAppCapabilityAccessChangedEventArgs(IAppCapabilityAccessChangedEventArgs const&) noexcept = default;
        IAppCapabilityAccessChangedEventArgs(IAppCapabilityAccessChangedEventArgs&&) noexcept = default;
        IAppCapabilityAccessChangedEventArgs& operator=(IAppCapabilityAccessChangedEventArgs const&) & noexcept = default;
        IAppCapabilityAccessChangedEventArgs& operator=(IAppCapabilityAccessChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IAppCapabilityStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAppCapabilityStatics>
    {
        IAppCapabilityStatics(std::nullptr_t = nullptr) noexcept {}
        IAppCapabilityStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IAppCapabilityStatics(IAppCapabilityStatics const&) noexcept = default;
        IAppCapabilityStatics(IAppCapabilityStatics&&) noexcept = default;
        IAppCapabilityStatics& operator=(IAppCapabilityStatics const&) & noexcept = default;
        IAppCapabilityStatics& operator=(IAppCapabilityStatics&&) & noexcept = default;
    };
}
#endif
