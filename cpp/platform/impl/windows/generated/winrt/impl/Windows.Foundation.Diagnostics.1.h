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

#ifndef WINRT_Windows_Foundation_Diagnostics_1_H
#define WINRT_Windows_Foundation_Diagnostics_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Foundation.Diagnostics.0.h"
WINRT_EXPORT namespace winrt::Windows::Foundation::Diagnostics
{
    struct __declspec(empty_bases) IAsyncCausalityTracerStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAsyncCausalityTracerStatics>
    {
        IAsyncCausalityTracerStatics(std::nullptr_t = nullptr) noexcept {}
        IAsyncCausalityTracerStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IAsyncCausalityTracerStatics(IAsyncCausalityTracerStatics const&) noexcept = default;
        IAsyncCausalityTracerStatics(IAsyncCausalityTracerStatics&&) noexcept = default;
        IAsyncCausalityTracerStatics& operator=(IAsyncCausalityTracerStatics const&) & noexcept = default;
        IAsyncCausalityTracerStatics& operator=(IAsyncCausalityTracerStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IErrorDetails :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IErrorDetails>
    {
        IErrorDetails(std::nullptr_t = nullptr) noexcept {}
        IErrorDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IErrorDetails(IErrorDetails const&) noexcept = default;
        IErrorDetails(IErrorDetails&&) noexcept = default;
        IErrorDetails& operator=(IErrorDetails const&) & noexcept = default;
        IErrorDetails& operator=(IErrorDetails&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IErrorDetailsStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IErrorDetailsStatics>
    {
        IErrorDetailsStatics(std::nullptr_t = nullptr) noexcept {}
        IErrorDetailsStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IErrorDetailsStatics(IErrorDetailsStatics const&) noexcept = default;
        IErrorDetailsStatics(IErrorDetailsStatics&&) noexcept = default;
        IErrorDetailsStatics& operator=(IErrorDetailsStatics const&) & noexcept = default;
        IErrorDetailsStatics& operator=(IErrorDetailsStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IErrorReportingSettings :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IErrorReportingSettings>
    {
        IErrorReportingSettings(std::nullptr_t = nullptr) noexcept {}
        IErrorReportingSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IErrorReportingSettings(IErrorReportingSettings const&) noexcept = default;
        IErrorReportingSettings(IErrorReportingSettings&&) noexcept = default;
        IErrorReportingSettings& operator=(IErrorReportingSettings const&) & noexcept = default;
        IErrorReportingSettings& operator=(IErrorReportingSettings&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IFileLoggingSession :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFileLoggingSession>,
        impl::require<winrt::Windows::Foundation::Diagnostics::IFileLoggingSession, winrt::Windows::Foundation::IClosable>
    {
        IFileLoggingSession(std::nullptr_t = nullptr) noexcept {}
        IFileLoggingSession(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IFileLoggingSession(IFileLoggingSession const&) noexcept = default;
        IFileLoggingSession(IFileLoggingSession&&) noexcept = default;
        IFileLoggingSession& operator=(IFileLoggingSession const&) & noexcept = default;
        IFileLoggingSession& operator=(IFileLoggingSession&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IFileLoggingSessionFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFileLoggingSessionFactory>
    {
        IFileLoggingSessionFactory(std::nullptr_t = nullptr) noexcept {}
        IFileLoggingSessionFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IFileLoggingSessionFactory(IFileLoggingSessionFactory const&) noexcept = default;
        IFileLoggingSessionFactory(IFileLoggingSessionFactory&&) noexcept = default;
        IFileLoggingSessionFactory& operator=(IFileLoggingSessionFactory const&) & noexcept = default;
        IFileLoggingSessionFactory& operator=(IFileLoggingSessionFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILogFileGeneratedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILogFileGeneratedEventArgs>
    {
        ILogFileGeneratedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ILogFileGeneratedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILogFileGeneratedEventArgs(ILogFileGeneratedEventArgs const&) noexcept = default;
        ILogFileGeneratedEventArgs(ILogFileGeneratedEventArgs&&) noexcept = default;
        ILogFileGeneratedEventArgs& operator=(ILogFileGeneratedEventArgs const&) & noexcept = default;
        ILogFileGeneratedEventArgs& operator=(ILogFileGeneratedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILoggingActivity :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingActivity>,
        impl::require<winrt::Windows::Foundation::Diagnostics::ILoggingActivity, winrt::Windows::Foundation::IClosable>
    {
        ILoggingActivity(std::nullptr_t = nullptr) noexcept {}
        ILoggingActivity(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILoggingActivity(ILoggingActivity const&) noexcept = default;
        ILoggingActivity(ILoggingActivity&&) noexcept = default;
        ILoggingActivity& operator=(ILoggingActivity const&) & noexcept = default;
        ILoggingActivity& operator=(ILoggingActivity&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILoggingActivity2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingActivity2>,
        impl::require<winrt::Windows::Foundation::Diagnostics::ILoggingActivity2, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::Diagnostics::ILoggingActivity, winrt::Windows::Foundation::Diagnostics::ILoggingTarget>
    {
        ILoggingActivity2(std::nullptr_t = nullptr) noexcept {}
        ILoggingActivity2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILoggingActivity2(ILoggingActivity2 const&) noexcept = default;
        ILoggingActivity2(ILoggingActivity2&&) noexcept = default;
        ILoggingActivity2& operator=(ILoggingActivity2 const&) & noexcept = default;
        ILoggingActivity2& operator=(ILoggingActivity2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILoggingActivityFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingActivityFactory>
    {
        ILoggingActivityFactory(std::nullptr_t = nullptr) noexcept {}
        ILoggingActivityFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILoggingActivityFactory(ILoggingActivityFactory const&) noexcept = default;
        ILoggingActivityFactory(ILoggingActivityFactory&&) noexcept = default;
        ILoggingActivityFactory& operator=(ILoggingActivityFactory const&) & noexcept = default;
        ILoggingActivityFactory& operator=(ILoggingActivityFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILoggingChannel :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingChannel>,
        impl::require<winrt::Windows::Foundation::Diagnostics::ILoggingChannel, winrt::Windows::Foundation::IClosable>
    {
        ILoggingChannel(std::nullptr_t = nullptr) noexcept {}
        ILoggingChannel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILoggingChannel(ILoggingChannel const&) noexcept = default;
        ILoggingChannel(ILoggingChannel&&) noexcept = default;
        ILoggingChannel& operator=(ILoggingChannel const&) & noexcept = default;
        ILoggingChannel& operator=(ILoggingChannel&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILoggingChannel2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingChannel2>,
        impl::require<winrt::Windows::Foundation::Diagnostics::ILoggingChannel2, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::Diagnostics::ILoggingChannel, winrt::Windows::Foundation::Diagnostics::ILoggingTarget>
    {
        ILoggingChannel2(std::nullptr_t = nullptr) noexcept {}
        ILoggingChannel2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILoggingChannel2(ILoggingChannel2 const&) noexcept = default;
        ILoggingChannel2(ILoggingChannel2&&) noexcept = default;
        ILoggingChannel2& operator=(ILoggingChannel2 const&) & noexcept = default;
        ILoggingChannel2& operator=(ILoggingChannel2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILoggingChannelFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingChannelFactory>
    {
        ILoggingChannelFactory(std::nullptr_t = nullptr) noexcept {}
        ILoggingChannelFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILoggingChannelFactory(ILoggingChannelFactory const&) noexcept = default;
        ILoggingChannelFactory(ILoggingChannelFactory&&) noexcept = default;
        ILoggingChannelFactory& operator=(ILoggingChannelFactory const&) & noexcept = default;
        ILoggingChannelFactory& operator=(ILoggingChannelFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILoggingChannelFactory2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingChannelFactory2>
    {
        ILoggingChannelFactory2(std::nullptr_t = nullptr) noexcept {}
        ILoggingChannelFactory2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILoggingChannelFactory2(ILoggingChannelFactory2 const&) noexcept = default;
        ILoggingChannelFactory2(ILoggingChannelFactory2&&) noexcept = default;
        ILoggingChannelFactory2& operator=(ILoggingChannelFactory2 const&) & noexcept = default;
        ILoggingChannelFactory2& operator=(ILoggingChannelFactory2&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILoggingChannelOptions :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingChannelOptions>
    {
        ILoggingChannelOptions(std::nullptr_t = nullptr) noexcept {}
        ILoggingChannelOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILoggingChannelOptions(ILoggingChannelOptions const&) noexcept = default;
        ILoggingChannelOptions(ILoggingChannelOptions&&) noexcept = default;
        ILoggingChannelOptions& operator=(ILoggingChannelOptions const&) & noexcept = default;
        ILoggingChannelOptions& operator=(ILoggingChannelOptions&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILoggingChannelOptionsFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingChannelOptionsFactory>
    {
        ILoggingChannelOptionsFactory(std::nullptr_t = nullptr) noexcept {}
        ILoggingChannelOptionsFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILoggingChannelOptionsFactory(ILoggingChannelOptionsFactory const&) noexcept = default;
        ILoggingChannelOptionsFactory(ILoggingChannelOptionsFactory&&) noexcept = default;
        ILoggingChannelOptionsFactory& operator=(ILoggingChannelOptionsFactory const&) & noexcept = default;
        ILoggingChannelOptionsFactory& operator=(ILoggingChannelOptionsFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILoggingFields :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingFields>
    {
        ILoggingFields(std::nullptr_t = nullptr) noexcept {}
        ILoggingFields(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILoggingFields(ILoggingFields const&) noexcept = default;
        ILoggingFields(ILoggingFields&&) noexcept = default;
        ILoggingFields& operator=(ILoggingFields const&) & noexcept = default;
        ILoggingFields& operator=(ILoggingFields&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILoggingOptions :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingOptions>
    {
        ILoggingOptions(std::nullptr_t = nullptr) noexcept {}
        ILoggingOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILoggingOptions(ILoggingOptions const&) noexcept = default;
        ILoggingOptions(ILoggingOptions&&) noexcept = default;
        ILoggingOptions& operator=(ILoggingOptions const&) & noexcept = default;
        ILoggingOptions& operator=(ILoggingOptions&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILoggingOptionsFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingOptionsFactory>
    {
        ILoggingOptionsFactory(std::nullptr_t = nullptr) noexcept {}
        ILoggingOptionsFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILoggingOptionsFactory(ILoggingOptionsFactory const&) noexcept = default;
        ILoggingOptionsFactory(ILoggingOptionsFactory&&) noexcept = default;
        ILoggingOptionsFactory& operator=(ILoggingOptionsFactory const&) & noexcept = default;
        ILoggingOptionsFactory& operator=(ILoggingOptionsFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILoggingSession :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingSession>,
        impl::require<winrt::Windows::Foundation::Diagnostics::ILoggingSession, winrt::Windows::Foundation::IClosable>
    {
        ILoggingSession(std::nullptr_t = nullptr) noexcept {}
        ILoggingSession(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILoggingSession(ILoggingSession const&) noexcept = default;
        ILoggingSession(ILoggingSession&&) noexcept = default;
        ILoggingSession& operator=(ILoggingSession const&) & noexcept = default;
        ILoggingSession& operator=(ILoggingSession&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILoggingSessionFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingSessionFactory>
    {
        ILoggingSessionFactory(std::nullptr_t = nullptr) noexcept {}
        ILoggingSessionFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILoggingSessionFactory(ILoggingSessionFactory const&) noexcept = default;
        ILoggingSessionFactory(ILoggingSessionFactory&&) noexcept = default;
        ILoggingSessionFactory& operator=(ILoggingSessionFactory const&) & noexcept = default;
        ILoggingSessionFactory& operator=(ILoggingSessionFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ILoggingTarget :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ILoggingTarget>
    {
        ILoggingTarget(std::nullptr_t = nullptr) noexcept {}
        ILoggingTarget(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ILoggingTarget(ILoggingTarget const&) noexcept = default;
        ILoggingTarget(ILoggingTarget&&) noexcept = default;
        ILoggingTarget& operator=(ILoggingTarget const&) & noexcept = default;
        ILoggingTarget& operator=(ILoggingTarget&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ITracingStatusChangedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ITracingStatusChangedEventArgs>
    {
        ITracingStatusChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ITracingStatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ITracingStatusChangedEventArgs(ITracingStatusChangedEventArgs const&) noexcept = default;
        ITracingStatusChangedEventArgs(ITracingStatusChangedEventArgs&&) noexcept = default;
        ITracingStatusChangedEventArgs& operator=(ITracingStatusChangedEventArgs const&) & noexcept = default;
        ITracingStatusChangedEventArgs& operator=(ITracingStatusChangedEventArgs&&) & noexcept = default;
    };
}
#endif
