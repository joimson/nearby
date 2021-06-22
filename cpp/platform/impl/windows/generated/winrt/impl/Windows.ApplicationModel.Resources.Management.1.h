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

#ifndef WINRT_Windows_ApplicationModel_Resources_Management_1_H
#define WINRT_Windows_ApplicationModel_Resources_Management_1_H
#include "winrt/impl/Windows.ApplicationModel.Resources.Management.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Resources::Management
{
    struct __declspec(empty_bases) IIndexedResourceCandidate :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IIndexedResourceCandidate>
    {
        IIndexedResourceCandidate(std::nullptr_t = nullptr) noexcept {}
        IIndexedResourceCandidate(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IIndexedResourceCandidate(IIndexedResourceCandidate const&) noexcept = default;
        IIndexedResourceCandidate(IIndexedResourceCandidate&&) noexcept = default;
        IIndexedResourceCandidate& operator=(IIndexedResourceCandidate const&) & noexcept = default;
        IIndexedResourceCandidate& operator=(IIndexedResourceCandidate&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IIndexedResourceQualifier :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IIndexedResourceQualifier>
    {
        IIndexedResourceQualifier(std::nullptr_t = nullptr) noexcept {}
        IIndexedResourceQualifier(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IIndexedResourceQualifier(IIndexedResourceQualifier const&) noexcept = default;
        IIndexedResourceQualifier(IIndexedResourceQualifier&&) noexcept = default;
        IIndexedResourceQualifier& operator=(IIndexedResourceQualifier const&) & noexcept = default;
        IIndexedResourceQualifier& operator=(IIndexedResourceQualifier&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IResourceIndexer :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IResourceIndexer>
    {
        IResourceIndexer(std::nullptr_t = nullptr) noexcept {}
        IResourceIndexer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IResourceIndexer(IResourceIndexer const&) noexcept = default;
        IResourceIndexer(IResourceIndexer&&) noexcept = default;
        IResourceIndexer& operator=(IResourceIndexer const&) & noexcept = default;
        IResourceIndexer& operator=(IResourceIndexer&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IResourceIndexerFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IResourceIndexerFactory>
    {
        IResourceIndexerFactory(std::nullptr_t = nullptr) noexcept {}
        IResourceIndexerFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IResourceIndexerFactory(IResourceIndexerFactory const&) noexcept = default;
        IResourceIndexerFactory(IResourceIndexerFactory&&) noexcept = default;
        IResourceIndexerFactory& operator=(IResourceIndexerFactory const&) & noexcept = default;
        IResourceIndexerFactory& operator=(IResourceIndexerFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IResourceIndexerFactory2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IResourceIndexerFactory2>
    {
        IResourceIndexerFactory2(std::nullptr_t = nullptr) noexcept {}
        IResourceIndexerFactory2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IResourceIndexerFactory2(IResourceIndexerFactory2 const&) noexcept = default;
        IResourceIndexerFactory2(IResourceIndexerFactory2&&) noexcept = default;
        IResourceIndexerFactory2& operator=(IResourceIndexerFactory2 const&) & noexcept = default;
        IResourceIndexerFactory2& operator=(IResourceIndexerFactory2&&) & noexcept = default;
    };
}
#endif
