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

#ifndef WINRT_Windows_Perception_People_1_H
#define WINRT_Windows_Perception_People_1_H
#include "winrt/impl/Windows.Perception.People.0.h"
WINRT_EXPORT namespace winrt::Windows::Perception::People
{
    struct __declspec(empty_bases) IEyesPose :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IEyesPose>
    {
        IEyesPose(std::nullptr_t = nullptr) noexcept {}
        IEyesPose(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IEyesPose(IEyesPose const&) noexcept = default;
        IEyesPose(IEyesPose&&) noexcept = default;
        IEyesPose& operator=(IEyesPose const&) & noexcept = default;
        IEyesPose& operator=(IEyesPose&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IEyesPoseStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IEyesPoseStatics>
    {
        IEyesPoseStatics(std::nullptr_t = nullptr) noexcept {}
        IEyesPoseStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IEyesPoseStatics(IEyesPoseStatics const&) noexcept = default;
        IEyesPoseStatics(IEyesPoseStatics&&) noexcept = default;
        IEyesPoseStatics& operator=(IEyesPoseStatics const&) & noexcept = default;
        IEyesPoseStatics& operator=(IEyesPoseStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IHandMeshObserver :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IHandMeshObserver>
    {
        IHandMeshObserver(std::nullptr_t = nullptr) noexcept {}
        IHandMeshObserver(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IHandMeshObserver(IHandMeshObserver const&) noexcept = default;
        IHandMeshObserver(IHandMeshObserver&&) noexcept = default;
        IHandMeshObserver& operator=(IHandMeshObserver const&) & noexcept = default;
        IHandMeshObserver& operator=(IHandMeshObserver&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IHandMeshVertexState :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IHandMeshVertexState>
    {
        IHandMeshVertexState(std::nullptr_t = nullptr) noexcept {}
        IHandMeshVertexState(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IHandMeshVertexState(IHandMeshVertexState const&) noexcept = default;
        IHandMeshVertexState(IHandMeshVertexState&&) noexcept = default;
        IHandMeshVertexState& operator=(IHandMeshVertexState const&) & noexcept = default;
        IHandMeshVertexState& operator=(IHandMeshVertexState&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IHandPose :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IHandPose>
    {
        IHandPose(std::nullptr_t = nullptr) noexcept {}
        IHandPose(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IHandPose(IHandPose const&) noexcept = default;
        IHandPose(IHandPose&&) noexcept = default;
        IHandPose& operator=(IHandPose const&) & noexcept = default;
        IHandPose& operator=(IHandPose&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IHeadPose :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IHeadPose>
    {
        IHeadPose(std::nullptr_t = nullptr) noexcept {}
        IHeadPose(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IHeadPose(IHeadPose const&) noexcept = default;
        IHeadPose(IHeadPose&&) noexcept = default;
        IHeadPose& operator=(IHeadPose const&) & noexcept = default;
        IHeadPose& operator=(IHeadPose&&) & noexcept = default;
    };
}
#endif
