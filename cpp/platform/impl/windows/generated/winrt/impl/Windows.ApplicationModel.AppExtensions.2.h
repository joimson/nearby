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

#ifndef WINRT_Windows_ApplicationModel_AppExtensions_2_H
#define WINRT_Windows_ApplicationModel_AppExtensions_2_H
#include "winrt/impl/Windows.ApplicationModel.AppExtensions.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::AppExtensions
{
    struct __declspec(empty_bases) AppExtension : winrt::Windows::ApplicationModel::AppExtensions::IAppExtension
    {
        AppExtension(std::nullptr_t) noexcept {}
        AppExtension(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::AppExtensions::IAppExtension(ptr, take_ownership_from_abi) {}
        AppExtension(AppExtension const&) noexcept = default;
        AppExtension(AppExtension&&) noexcept = default;
        AppExtension& operator=(AppExtension const&) & noexcept = default;
        AppExtension& operator=(AppExtension&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AppExtensionCatalog : winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog
    {
        AppExtensionCatalog(std::nullptr_t) noexcept {}
        AppExtensionCatalog(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionCatalog(ptr, take_ownership_from_abi) {}
        AppExtensionCatalog(AppExtensionCatalog const&) noexcept = default;
        AppExtensionCatalog(AppExtensionCatalog&&) noexcept = default;
        AppExtensionCatalog& operator=(AppExtensionCatalog const&) & noexcept = default;
        AppExtensionCatalog& operator=(AppExtensionCatalog&&) & noexcept = default;
        static auto Open(param::hstring const& appExtensionName);
    };
    struct __declspec(empty_bases) AppExtensionPackageInstalledEventArgs : winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs
    {
        AppExtensionPackageInstalledEventArgs(std::nullptr_t) noexcept {}
        AppExtensionPackageInstalledEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageInstalledEventArgs(ptr, take_ownership_from_abi) {}
        AppExtensionPackageInstalledEventArgs(AppExtensionPackageInstalledEventArgs const&) noexcept = default;
        AppExtensionPackageInstalledEventArgs(AppExtensionPackageInstalledEventArgs&&) noexcept = default;
        AppExtensionPackageInstalledEventArgs& operator=(AppExtensionPackageInstalledEventArgs const&) & noexcept = default;
        AppExtensionPackageInstalledEventArgs& operator=(AppExtensionPackageInstalledEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AppExtensionPackageStatusChangedEventArgs : winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs
    {
        AppExtensionPackageStatusChangedEventArgs(std::nullptr_t) noexcept {}
        AppExtensionPackageStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageStatusChangedEventArgs(ptr, take_ownership_from_abi) {}
        AppExtensionPackageStatusChangedEventArgs(AppExtensionPackageStatusChangedEventArgs const&) noexcept = default;
        AppExtensionPackageStatusChangedEventArgs(AppExtensionPackageStatusChangedEventArgs&&) noexcept = default;
        AppExtensionPackageStatusChangedEventArgs& operator=(AppExtensionPackageStatusChangedEventArgs const&) & noexcept = default;
        AppExtensionPackageStatusChangedEventArgs& operator=(AppExtensionPackageStatusChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AppExtensionPackageUninstallingEventArgs : winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs
    {
        AppExtensionPackageUninstallingEventArgs(std::nullptr_t) noexcept {}
        AppExtensionPackageUninstallingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUninstallingEventArgs(ptr, take_ownership_from_abi) {}
        AppExtensionPackageUninstallingEventArgs(AppExtensionPackageUninstallingEventArgs const&) noexcept = default;
        AppExtensionPackageUninstallingEventArgs(AppExtensionPackageUninstallingEventArgs&&) noexcept = default;
        AppExtensionPackageUninstallingEventArgs& operator=(AppExtensionPackageUninstallingEventArgs const&) & noexcept = default;
        AppExtensionPackageUninstallingEventArgs& operator=(AppExtensionPackageUninstallingEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AppExtensionPackageUpdatedEventArgs : winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs
    {
        AppExtensionPackageUpdatedEventArgs(std::nullptr_t) noexcept {}
        AppExtensionPackageUpdatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatedEventArgs(ptr, take_ownership_from_abi) {}
        AppExtensionPackageUpdatedEventArgs(AppExtensionPackageUpdatedEventArgs const&) noexcept = default;
        AppExtensionPackageUpdatedEventArgs(AppExtensionPackageUpdatedEventArgs&&) noexcept = default;
        AppExtensionPackageUpdatedEventArgs& operator=(AppExtensionPackageUpdatedEventArgs const&) & noexcept = default;
        AppExtensionPackageUpdatedEventArgs& operator=(AppExtensionPackageUpdatedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AppExtensionPackageUpdatingEventArgs : winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs
    {
        AppExtensionPackageUpdatingEventArgs(std::nullptr_t) noexcept {}
        AppExtensionPackageUpdatingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::AppExtensions::IAppExtensionPackageUpdatingEventArgs(ptr, take_ownership_from_abi) {}
        AppExtensionPackageUpdatingEventArgs(AppExtensionPackageUpdatingEventArgs const&) noexcept = default;
        AppExtensionPackageUpdatingEventArgs(AppExtensionPackageUpdatingEventArgs&&) noexcept = default;
        AppExtensionPackageUpdatingEventArgs& operator=(AppExtensionPackageUpdatingEventArgs const&) & noexcept = default;
        AppExtensionPackageUpdatingEventArgs& operator=(AppExtensionPackageUpdatingEventArgs&&) & noexcept = default;
    };
}
#endif
