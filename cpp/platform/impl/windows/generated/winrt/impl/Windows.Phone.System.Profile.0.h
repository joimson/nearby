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

#ifndef WINRT_Windows_Phone_System_Profile_0_H
#define WINRT_Windows_Phone_System_Profile_0_H
WINRT_EXPORT namespace winrt::Windows::Phone::System::Profile
{
    struct IRetailModeStatics;
    struct RetailMode;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Phone::System::Profile::IRetailModeStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Phone::System::Profile::RetailMode>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Phone::System::Profile::RetailMode> = L"Windows.Phone.System.Profile.RetailMode";
    template <> inline constexpr auto& name_v<winrt::Windows::Phone::System::Profile::IRetailModeStatics> = L"Windows.Phone.System.Profile.IRetailModeStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Phone::System::Profile::IRetailModeStatics>{ 0xD7DED029,0xFDDA,0x43E7,{ 0x93,0xFB,0xE5,0x3A,0xB6,0xE8,0x9E,0xC3 } }; // D7DED029-FDDA-43E7-93FB-E53AB6E89EC3
    template <> struct abi<winrt::Windows::Phone::System::Profile::IRetailModeStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RetailModeEnabled(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Phone_System_Profile_IRetailModeStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) RetailModeEnabled() const;
    };
    template <> struct consume<winrt::Windows::Phone::System::Profile::IRetailModeStatics>
    {
        template <typename D> using type = consume_Windows_Phone_System_Profile_IRetailModeStatics<D>;
    };
}
#endif
