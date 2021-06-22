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

#ifndef WINRT_Windows_Perception_H
#define WINRT_Windows_Perception_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.210505.3"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.210505.3"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Perception.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::DateTime) consume_Windows_Perception_IPerceptionTimestamp<D>::TargetTime() const
    {
        winrt::Windows::Foundation::DateTime value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Perception::IPerceptionTimestamp)->get_TargetTime(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_Perception_IPerceptionTimestamp<D>::PredictionAmount() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Perception::IPerceptionTimestamp)->get_PredictionAmount(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Foundation::TimeSpan) consume_Windows_Perception_IPerceptionTimestamp2<D>::SystemRelativeTargetTime() const
    {
        winrt::Windows::Foundation::TimeSpan value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Perception::IPerceptionTimestamp2)->get_SystemRelativeTargetTime(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Perception::PerceptionTimestamp) consume_Windows_Perception_IPerceptionTimestampHelperStatics<D>::FromHistoricalTargetTime(winrt::Windows::Foundation::DateTime const& targetTime) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Perception::IPerceptionTimestampHelperStatics)->FromHistoricalTargetTime(impl::bind_in(targetTime), &value));
        return winrt::Windows::Perception::PerceptionTimestamp{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::Perception::PerceptionTimestamp) consume_Windows_Perception_IPerceptionTimestampHelperStatics2<D>::FromSystemRelativeTargetTime(winrt::Windows::Foundation::TimeSpan const& targetTime) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Perception::IPerceptionTimestampHelperStatics2)->FromSystemRelativeTargetTime(impl::bind_in(targetTime), &value));
        return winrt::Windows::Perception::PerceptionTimestamp{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Perception::IPerceptionTimestamp> : produce_base<D, winrt::Windows::Perception::IPerceptionTimestamp>
    {
        int32_t __stdcall get_TargetTime(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::DateTime>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::DateTime>(this->shim().TargetTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PredictionAmount(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().PredictionAmount());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Perception::IPerceptionTimestamp2> : produce_base<D, winrt::Windows::Perception::IPerceptionTimestamp2>
    {
        int32_t __stdcall get_SystemRelativeTargetTime(int64_t* value) noexcept final try
        {
            zero_abi<winrt::Windows::Foundation::TimeSpan>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::TimeSpan>(this->shim().SystemRelativeTargetTime());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Perception::IPerceptionTimestampHelperStatics> : produce_base<D, winrt::Windows::Perception::IPerceptionTimestampHelperStatics>
    {
        int32_t __stdcall FromHistoricalTargetTime(int64_t targetTime, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Perception::PerceptionTimestamp>(this->shim().FromHistoricalTargetTime(*reinterpret_cast<winrt::Windows::Foundation::DateTime const*>(&targetTime)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Perception::IPerceptionTimestampHelperStatics2> : produce_base<D, winrt::Windows::Perception::IPerceptionTimestampHelperStatics2>
    {
        int32_t __stdcall FromSystemRelativeTargetTime(int64_t targetTime, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Perception::PerceptionTimestamp>(this->shim().FromSystemRelativeTargetTime(*reinterpret_cast<winrt::Windows::Foundation::TimeSpan const*>(&targetTime)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Perception
{
    inline auto PerceptionTimestampHelper::FromHistoricalTargetTime(winrt::Windows::Foundation::DateTime const& targetTime)
    {
        return impl::call_factory<PerceptionTimestampHelper, IPerceptionTimestampHelperStatics>([&](IPerceptionTimestampHelperStatics const& f) { return f.FromHistoricalTargetTime(targetTime); });
    }
    inline auto PerceptionTimestampHelper::FromSystemRelativeTargetTime(winrt::Windows::Foundation::TimeSpan const& targetTime)
    {
        return impl::call_factory<PerceptionTimestampHelper, IPerceptionTimestampHelperStatics2>([&](IPerceptionTimestampHelperStatics2 const& f) { return f.FromSystemRelativeTargetTime(targetTime); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Perception::IPerceptionTimestamp> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Perception::IPerceptionTimestamp2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Perception::IPerceptionTimestampHelperStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Perception::IPerceptionTimestampHelperStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Perception::PerceptionTimestamp> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Perception::PerceptionTimestampHelper> : winrt::impl::hash_base {};
#endif
}
#endif
