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

#ifndef WINRT_Windows_Globalization_NumberFormatting_2_H
#define WINRT_Windows_Globalization_NumberFormatting_2_H
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Globalization.NumberFormatting.1.h"
WINRT_EXPORT namespace winrt::Windows::Globalization::NumberFormatting
{
    struct __declspec(empty_bases) CurrencyFormatter : winrt::Windows::Globalization::NumberFormatting::ICurrencyFormatter,
        impl::require<CurrencyFormatter, winrt::Windows::Globalization::NumberFormatting::ICurrencyFormatter2, winrt::Windows::Globalization::NumberFormatting::ISignificantDigitsOption, winrt::Windows::Globalization::NumberFormatting::INumberRounderOption, winrt::Windows::Globalization::NumberFormatting::ISignedZeroOption>
    {
        CurrencyFormatter(std::nullptr_t) noexcept {}
        CurrencyFormatter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Globalization::NumberFormatting::ICurrencyFormatter(ptr, take_ownership_from_abi) {}
        explicit CurrencyFormatter(param::hstring const& currencyCode);
        CurrencyFormatter(param::hstring const& currencyCode, param::iterable<hstring> const& languages, param::hstring const& geographicRegion);
        CurrencyFormatter(CurrencyFormatter const&) noexcept = default;
        CurrencyFormatter(CurrencyFormatter&&) noexcept = default;
        CurrencyFormatter& operator=(CurrencyFormatter const&) & noexcept = default;
        CurrencyFormatter& operator=(CurrencyFormatter&&) & noexcept = default;
    };
    struct __declspec(empty_bases) DecimalFormatter : winrt::Windows::Globalization::NumberFormatting::INumberFormatter,
        impl::require<DecimalFormatter, winrt::Windows::Globalization::NumberFormatting::INumberFormatterOptions, winrt::Windows::Globalization::NumberFormatting::INumberFormatter2, winrt::Windows::Globalization::NumberFormatting::INumberParser, winrt::Windows::Globalization::NumberFormatting::ISignificantDigitsOption, winrt::Windows::Globalization::NumberFormatting::INumberRounderOption, winrt::Windows::Globalization::NumberFormatting::ISignedZeroOption>
    {
        DecimalFormatter(std::nullptr_t) noexcept {}
        DecimalFormatter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Globalization::NumberFormatting::INumberFormatter(ptr, take_ownership_from_abi) {}
        DecimalFormatter();
        DecimalFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion);
        DecimalFormatter(DecimalFormatter const&) noexcept = default;
        DecimalFormatter(DecimalFormatter&&) noexcept = default;
        DecimalFormatter& operator=(DecimalFormatter const&) & noexcept = default;
        DecimalFormatter& operator=(DecimalFormatter&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IncrementNumberRounder : winrt::Windows::Globalization::NumberFormatting::INumberRounder,
        impl::require<IncrementNumberRounder, winrt::Windows::Globalization::NumberFormatting::IIncrementNumberRounder>
    {
        IncrementNumberRounder(std::nullptr_t) noexcept {}
        IncrementNumberRounder(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Globalization::NumberFormatting::INumberRounder(ptr, take_ownership_from_abi) {}
        IncrementNumberRounder();
        IncrementNumberRounder(IncrementNumberRounder const&) noexcept = default;
        IncrementNumberRounder(IncrementNumberRounder&&) noexcept = default;
        IncrementNumberRounder& operator=(IncrementNumberRounder const&) & noexcept = default;
        IncrementNumberRounder& operator=(IncrementNumberRounder&&) & noexcept = default;
    };
    struct __declspec(empty_bases) NumeralSystemTranslator : winrt::Windows::Globalization::NumberFormatting::INumeralSystemTranslator
    {
        NumeralSystemTranslator(std::nullptr_t) noexcept {}
        NumeralSystemTranslator(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Globalization::NumberFormatting::INumeralSystemTranslator(ptr, take_ownership_from_abi) {}
        NumeralSystemTranslator();
        explicit NumeralSystemTranslator(param::iterable<hstring> const& languages);
        NumeralSystemTranslator(NumeralSystemTranslator const&) noexcept = default;
        NumeralSystemTranslator(NumeralSystemTranslator&&) noexcept = default;
        NumeralSystemTranslator& operator=(NumeralSystemTranslator const&) & noexcept = default;
        NumeralSystemTranslator& operator=(NumeralSystemTranslator&&) & noexcept = default;
    };
    struct __declspec(empty_bases) PercentFormatter : winrt::Windows::Globalization::NumberFormatting::INumberFormatter,
        impl::require<PercentFormatter, winrt::Windows::Globalization::NumberFormatting::INumberFormatterOptions, winrt::Windows::Globalization::NumberFormatting::INumberFormatter2, winrt::Windows::Globalization::NumberFormatting::INumberParser, winrt::Windows::Globalization::NumberFormatting::ISignificantDigitsOption, winrt::Windows::Globalization::NumberFormatting::INumberRounderOption, winrt::Windows::Globalization::NumberFormatting::ISignedZeroOption>
    {
        PercentFormatter(std::nullptr_t) noexcept {}
        PercentFormatter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Globalization::NumberFormatting::INumberFormatter(ptr, take_ownership_from_abi) {}
        PercentFormatter();
        PercentFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion);
        PercentFormatter(PercentFormatter const&) noexcept = default;
        PercentFormatter(PercentFormatter&&) noexcept = default;
        PercentFormatter& operator=(PercentFormatter const&) & noexcept = default;
        PercentFormatter& operator=(PercentFormatter&&) & noexcept = default;
    };
    struct __declspec(empty_bases) PermilleFormatter : winrt::Windows::Globalization::NumberFormatting::INumberFormatter,
        impl::require<PermilleFormatter, winrt::Windows::Globalization::NumberFormatting::INumberFormatterOptions, winrt::Windows::Globalization::NumberFormatting::INumberFormatter2, winrt::Windows::Globalization::NumberFormatting::INumberParser, winrt::Windows::Globalization::NumberFormatting::ISignificantDigitsOption, winrt::Windows::Globalization::NumberFormatting::INumberRounderOption, winrt::Windows::Globalization::NumberFormatting::ISignedZeroOption>
    {
        PermilleFormatter(std::nullptr_t) noexcept {}
        PermilleFormatter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Globalization::NumberFormatting::INumberFormatter(ptr, take_ownership_from_abi) {}
        PermilleFormatter();
        PermilleFormatter(param::iterable<hstring> const& languages, param::hstring const& geographicRegion);
        PermilleFormatter(PermilleFormatter const&) noexcept = default;
        PermilleFormatter(PermilleFormatter&&) noexcept = default;
        PermilleFormatter& operator=(PermilleFormatter const&) & noexcept = default;
        PermilleFormatter& operator=(PermilleFormatter&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SignificantDigitsNumberRounder : winrt::Windows::Globalization::NumberFormatting::INumberRounder,
        impl::require<SignificantDigitsNumberRounder, winrt::Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder>
    {
        SignificantDigitsNumberRounder(std::nullptr_t) noexcept {}
        SignificantDigitsNumberRounder(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Globalization::NumberFormatting::INumberRounder(ptr, take_ownership_from_abi) {}
        SignificantDigitsNumberRounder();
        SignificantDigitsNumberRounder(SignificantDigitsNumberRounder const&) noexcept = default;
        SignificantDigitsNumberRounder(SignificantDigitsNumberRounder&&) noexcept = default;
        SignificantDigitsNumberRounder& operator=(SignificantDigitsNumberRounder const&) & noexcept = default;
        SignificantDigitsNumberRounder& operator=(SignificantDigitsNumberRounder&&) & noexcept = default;
    };
}
#endif
