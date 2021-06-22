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

#ifndef WINRT_Windows_Foundation_Numerics_0_H
#define WINRT_Windows_Foundation_Numerics_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
    struct Rational;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Foundation::Numerics::Rational>{ using type = struct_category<uint32_t, uint32_t>; };
    template <> inline constexpr auto& name_v<winrt::Windows::Foundation::Numerics::Rational> = L"Windows.Foundation.Numerics.Rational";
    struct struct_Windows_Foundation_Numerics_Rational
    {
        uint32_t Numerator;
        uint32_t Denominator;
    };
    template <> struct abi<Windows::Foundation::Numerics::Rational>
    {
        using type = struct_Windows_Foundation_Numerics_Rational;
    };
}
#endif
