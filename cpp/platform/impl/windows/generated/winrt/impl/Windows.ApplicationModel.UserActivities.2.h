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

#ifndef WINRT_Windows_ApplicationModel_UserActivities_2_H
#define WINRT_Windows_ApplicationModel_UserActivities_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Security.Credentials.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.ApplicationModel.UserActivities.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities
{
    struct __declspec(empty_bases) UserActivity : winrt::Windows::ApplicationModel::UserActivities::IUserActivity,
        impl::require<UserActivity, winrt::Windows::ApplicationModel::UserActivities::IUserActivity2, winrt::Windows::ApplicationModel::UserActivities::IUserActivity3>
    {
        UserActivity(std::nullptr_t) noexcept {}
        UserActivity(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserActivities::IUserActivity(ptr, take_ownership_from_abi) {}
        explicit UserActivity(param::hstring const& activityId);
        UserActivity(UserActivity const&) noexcept = default;
        UserActivity(UserActivity&&) noexcept = default;
        UserActivity& operator=(UserActivity const&) & noexcept = default;
        UserActivity& operator=(UserActivity&&) & noexcept = default;
        static auto TryParseFromJson(param::hstring const& json);
        static auto TryParseFromJsonArray(param::hstring const& json);
        static auto ToJsonArray(param::iterable<winrt::Windows::ApplicationModel::UserActivities::UserActivity> const& activities);
    };
    struct __declspec(empty_bases) UserActivityAttribution : winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttribution
    {
        UserActivityAttribution(std::nullptr_t) noexcept {}
        UserActivityAttribution(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttribution(ptr, take_ownership_from_abi) {}
        UserActivityAttribution();
        explicit UserActivityAttribution(winrt::Windows::Foundation::Uri const& iconUri);
        UserActivityAttribution(UserActivityAttribution const&) noexcept = default;
        UserActivityAttribution(UserActivityAttribution&&) noexcept = default;
        UserActivityAttribution& operator=(UserActivityAttribution const&) & noexcept = default;
        UserActivityAttribution& operator=(UserActivityAttribution&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UserActivityChannel : winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannel,
        impl::require<UserActivityChannel, winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannel2>
    {
        UserActivityChannel(std::nullptr_t) noexcept {}
        UserActivityChannel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannel(ptr, take_ownership_from_abi) {}
        UserActivityChannel(UserActivityChannel const&) noexcept = default;
        UserActivityChannel(UserActivityChannel&&) noexcept = default;
        UserActivityChannel& operator=(UserActivityChannel const&) & noexcept = default;
        UserActivityChannel& operator=(UserActivityChannel&&) & noexcept = default;
        static auto GetDefault();
        static auto DisableAutoSessionCreation();
        static auto TryGetForWebAccount(winrt::Windows::Security::Credentials::WebAccount const& account);
        static auto GetForUser(winrt::Windows::System::User const& user);
    };
    struct __declspec(empty_bases) UserActivityContentInfo : winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfo
    {
        UserActivityContentInfo(std::nullptr_t) noexcept {}
        UserActivityContentInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfo(ptr, take_ownership_from_abi) {}
        UserActivityContentInfo(UserActivityContentInfo const&) noexcept = default;
        UserActivityContentInfo(UserActivityContentInfo&&) noexcept = default;
        UserActivityContentInfo& operator=(UserActivityContentInfo const&) & noexcept = default;
        UserActivityContentInfo& operator=(UserActivityContentInfo&&) & noexcept = default;
        static auto FromJson(param::hstring const& value);
    };
    struct __declspec(empty_bases) UserActivityRequest : winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequest
    {
        UserActivityRequest(std::nullptr_t) noexcept {}
        UserActivityRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequest(ptr, take_ownership_from_abi) {}
        UserActivityRequest(UserActivityRequest const&) noexcept = default;
        UserActivityRequest(UserActivityRequest&&) noexcept = default;
        UserActivityRequest& operator=(UserActivityRequest const&) & noexcept = default;
        UserActivityRequest& operator=(UserActivityRequest&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UserActivityRequestManager : winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestManager
    {
        UserActivityRequestManager(std::nullptr_t) noexcept {}
        UserActivityRequestManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestManager(ptr, take_ownership_from_abi) {}
        UserActivityRequestManager(UserActivityRequestManager const&) noexcept = default;
        UserActivityRequestManager(UserActivityRequestManager&&) noexcept = default;
        UserActivityRequestManager& operator=(UserActivityRequestManager const&) & noexcept = default;
        UserActivityRequestManager& operator=(UserActivityRequestManager&&) & noexcept = default;
        static auto GetForCurrentView();
    };
    struct __declspec(empty_bases) UserActivityRequestedEventArgs : winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestedEventArgs
    {
        UserActivityRequestedEventArgs(std::nullptr_t) noexcept {}
        UserActivityRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestedEventArgs(ptr, take_ownership_from_abi) {}
        UserActivityRequestedEventArgs(UserActivityRequestedEventArgs const&) noexcept = default;
        UserActivityRequestedEventArgs(UserActivityRequestedEventArgs&&) noexcept = default;
        UserActivityRequestedEventArgs& operator=(UserActivityRequestedEventArgs const&) & noexcept = default;
        UserActivityRequestedEventArgs& operator=(UserActivityRequestedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UserActivitySession : winrt::Windows::ApplicationModel::UserActivities::IUserActivitySession,
        impl::require<UserActivitySession, winrt::Windows::Foundation::IClosable>
    {
        UserActivitySession(std::nullptr_t) noexcept {}
        UserActivitySession(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserActivities::IUserActivitySession(ptr, take_ownership_from_abi) {}
        UserActivitySession(UserActivitySession const&) noexcept = default;
        UserActivitySession(UserActivitySession&&) noexcept = default;
        UserActivitySession& operator=(UserActivitySession const&) & noexcept = default;
        UserActivitySession& operator=(UserActivitySession&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UserActivitySessionHistoryItem : winrt::Windows::ApplicationModel::UserActivities::IUserActivitySessionHistoryItem
    {
        UserActivitySessionHistoryItem(std::nullptr_t) noexcept {}
        UserActivitySessionHistoryItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserActivities::IUserActivitySessionHistoryItem(ptr, take_ownership_from_abi) {}
        UserActivitySessionHistoryItem(UserActivitySessionHistoryItem const&) noexcept = default;
        UserActivitySessionHistoryItem(UserActivitySessionHistoryItem&&) noexcept = default;
        UserActivitySessionHistoryItem& operator=(UserActivitySessionHistoryItem const&) & noexcept = default;
        UserActivitySessionHistoryItem& operator=(UserActivitySessionHistoryItem&&) & noexcept = default;
    };
    struct __declspec(empty_bases) UserActivityVisualElements : winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements,
        impl::require<UserActivityVisualElements, winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements2>
    {
        UserActivityVisualElements(std::nullptr_t) noexcept {}
        UserActivityVisualElements(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements(ptr, take_ownership_from_abi) {}
        UserActivityVisualElements(UserActivityVisualElements const&) noexcept = default;
        UserActivityVisualElements(UserActivityVisualElements&&) noexcept = default;
        UserActivityVisualElements& operator=(UserActivityVisualElements const&) & noexcept = default;
        UserActivityVisualElements& operator=(UserActivityVisualElements&&) & noexcept = default;
    };
}
#endif
