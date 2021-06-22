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

#ifndef WINRT_Windows_Security_Authentication_Identity_Core_2_H
#define WINRT_Windows_Security_Authentication_Identity_Core_2_H
#include "winrt/impl/Windows.Security.Authentication.Identity.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::Security::Authentication::Identity::Core
{
    struct __declspec(empty_bases) MicrosoftAccountMultiFactorAuthenticationManager : winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager
    {
        MicrosoftAccountMultiFactorAuthenticationManager(std::nullptr_t) noexcept {}
        MicrosoftAccountMultiFactorAuthenticationManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager(ptr, take_ownership_from_abi) {}
        MicrosoftAccountMultiFactorAuthenticationManager(MicrosoftAccountMultiFactorAuthenticationManager const&) noexcept = default;
        MicrosoftAccountMultiFactorAuthenticationManager(MicrosoftAccountMultiFactorAuthenticationManager&&) noexcept = default;
        MicrosoftAccountMultiFactorAuthenticationManager& operator=(MicrosoftAccountMultiFactorAuthenticationManager const&) & noexcept = default;
        MicrosoftAccountMultiFactorAuthenticationManager& operator=(MicrosoftAccountMultiFactorAuthenticationManager&&) & noexcept = default;
        [[nodiscard]] static auto Current();
    };
    struct __declspec(empty_bases) MicrosoftAccountMultiFactorGetSessionsResult : winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult
    {
        MicrosoftAccountMultiFactorGetSessionsResult(std::nullptr_t) noexcept {}
        MicrosoftAccountMultiFactorGetSessionsResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult(ptr, take_ownership_from_abi) {}
        MicrosoftAccountMultiFactorGetSessionsResult(MicrosoftAccountMultiFactorGetSessionsResult const&) noexcept = default;
        MicrosoftAccountMultiFactorGetSessionsResult(MicrosoftAccountMultiFactorGetSessionsResult&&) noexcept = default;
        MicrosoftAccountMultiFactorGetSessionsResult& operator=(MicrosoftAccountMultiFactorGetSessionsResult const&) & noexcept = default;
        MicrosoftAccountMultiFactorGetSessionsResult& operator=(MicrosoftAccountMultiFactorGetSessionsResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) MicrosoftAccountMultiFactorOneTimeCodedInfo : winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo
    {
        MicrosoftAccountMultiFactorOneTimeCodedInfo(std::nullptr_t) noexcept {}
        MicrosoftAccountMultiFactorOneTimeCodedInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo(ptr, take_ownership_from_abi) {}
        MicrosoftAccountMultiFactorOneTimeCodedInfo(MicrosoftAccountMultiFactorOneTimeCodedInfo const&) noexcept = default;
        MicrosoftAccountMultiFactorOneTimeCodedInfo(MicrosoftAccountMultiFactorOneTimeCodedInfo&&) noexcept = default;
        MicrosoftAccountMultiFactorOneTimeCodedInfo& operator=(MicrosoftAccountMultiFactorOneTimeCodedInfo const&) & noexcept = default;
        MicrosoftAccountMultiFactorOneTimeCodedInfo& operator=(MicrosoftAccountMultiFactorOneTimeCodedInfo&&) & noexcept = default;
    };
    struct __declspec(empty_bases) MicrosoftAccountMultiFactorSessionInfo : winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo
    {
        MicrosoftAccountMultiFactorSessionInfo(std::nullptr_t) noexcept {}
        MicrosoftAccountMultiFactorSessionInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo(ptr, take_ownership_from_abi) {}
        MicrosoftAccountMultiFactorSessionInfo(MicrosoftAccountMultiFactorSessionInfo const&) noexcept = default;
        MicrosoftAccountMultiFactorSessionInfo(MicrosoftAccountMultiFactorSessionInfo&&) noexcept = default;
        MicrosoftAccountMultiFactorSessionInfo& operator=(MicrosoftAccountMultiFactorSessionInfo const&) & noexcept = default;
        MicrosoftAccountMultiFactorSessionInfo& operator=(MicrosoftAccountMultiFactorSessionInfo&&) & noexcept = default;
    };
    struct __declspec(empty_bases) MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo : winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo
    {
        MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo(std::nullptr_t) noexcept {}
        MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo(ptr, take_ownership_from_abi) {}
        MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo(MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo const&) noexcept = default;
        MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo(MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo&&) noexcept = default;
        MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo& operator=(MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo const&) & noexcept = default;
        MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo& operator=(MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo&&) & noexcept = default;
    };
}
#endif
