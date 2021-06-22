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

#ifndef WINRT_Windows_Perception_2_H
#define WINRT_Windows_Perception_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Perception.1.h"
WINRT_EXPORT namespace winrt::Windows::Perception
{
    struct __declspec(empty_bases) PerceptionTimestamp : winrt::Windows::Perception::IPerceptionTimestamp,
        impl::require<PerceptionTimestamp, winrt::Windows::Perception::IPerceptionTimestamp2>
    {
        PerceptionTimestamp(std::nullptr_t) noexcept {}
        PerceptionTimestamp(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Perception::IPerceptionTimestamp(ptr, take_ownership_from_abi) {}
        PerceptionTimestamp(PerceptionTimestamp const&) noexcept = default;
        PerceptionTimestamp(PerceptionTimestamp&&) noexcept = default;
        PerceptionTimestamp& operator=(PerceptionTimestamp const&) & noexcept = default;
        PerceptionTimestamp& operator=(PerceptionTimestamp&&) & noexcept = default;
    };
    struct PerceptionTimestampHelper
    {
        PerceptionTimestampHelper() = delete;
        static auto FromHistoricalTargetTime(winrt::Windows::Foundation::DateTime const& targetTime);
        static auto FromSystemRelativeTargetTime(winrt::Windows::Foundation::TimeSpan const& targetTime);
    };
}
#endif
