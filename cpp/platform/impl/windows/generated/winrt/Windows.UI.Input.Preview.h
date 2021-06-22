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

#ifndef WINRT_Windows_UI_Input_Preview_H
#define WINRT_Windows_UI_Input_Preview_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.210505.3"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.210505.3"
#include "winrt/Windows.UI.Input.h"
#include "winrt/impl/Windows.UI.Input.2.h"
#include "winrt/impl/Windows.UI.WindowManagement.2.h"
#include "winrt/impl/Windows.UI.Input.Preview.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(winrt::Windows::UI::Input::InputActivationListener) consume_Windows_UI_Input_Preview_IInputActivationListenerPreviewStatics<D>::CreateForApplicationWindow(winrt::Windows::UI::WindowManagement::AppWindow const& window) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::UI::Input::Preview::IInputActivationListenerPreviewStatics)->CreateForApplicationWindow(*(void**)(&window), &result));
        return winrt::Windows::UI::Input::InputActivationListener{ result, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::UI::Input::Preview::IInputActivationListenerPreviewStatics> : produce_base<D, winrt::Windows::UI::Input::Preview::IInputActivationListenerPreviewStatics>
    {
        int32_t __stdcall CreateForApplicationWindow(void* window, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::UI::Input::InputActivationListener>(this->shim().CreateForApplicationWindow(*reinterpret_cast<winrt::Windows::UI::WindowManagement::AppWindow const*>(&window)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::UI::Input::Preview
{
    inline auto InputActivationListenerPreview::CreateForApplicationWindow(winrt::Windows::UI::WindowManagement::AppWindow const& window)
    {
        return impl::call_factory<InputActivationListenerPreview, IInputActivationListenerPreviewStatics>([&](IInputActivationListenerPreviewStatics const& f) { return f.CreateForApplicationWindow(window); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::UI::Input::Preview::IInputActivationListenerPreviewStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::UI::Input::Preview::InputActivationListenerPreview> : winrt::impl::hash_base {};
#endif
}
#endif
