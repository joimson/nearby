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

#ifndef WINRT_Windows_ApplicationModel_Calls_2_H
#define WINRT_Windows_ApplicationModel_Calls_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.ApplicationModel.Calls.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Calls
{
    struct __declspec(empty_bases) CallAnswerEventArgs : winrt::Windows::ApplicationModel::Calls::ICallAnswerEventArgs
    {
        CallAnswerEventArgs(std::nullptr_t) noexcept {}
        CallAnswerEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::ICallAnswerEventArgs(ptr, take_ownership_from_abi) {}
        CallAnswerEventArgs(CallAnswerEventArgs const&) noexcept = default;
        CallAnswerEventArgs(CallAnswerEventArgs&&) noexcept = default;
        CallAnswerEventArgs& operator=(CallAnswerEventArgs const&) & noexcept = default;
        CallAnswerEventArgs& operator=(CallAnswerEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CallRejectEventArgs : winrt::Windows::ApplicationModel::Calls::ICallRejectEventArgs
    {
        CallRejectEventArgs(std::nullptr_t) noexcept {}
        CallRejectEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::ICallRejectEventArgs(ptr, take_ownership_from_abi) {}
        CallRejectEventArgs(CallRejectEventArgs const&) noexcept = default;
        CallRejectEventArgs(CallRejectEventArgs&&) noexcept = default;
        CallRejectEventArgs& operator=(CallRejectEventArgs const&) & noexcept = default;
        CallRejectEventArgs& operator=(CallRejectEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CallStateChangeEventArgs : winrt::Windows::ApplicationModel::Calls::ICallStateChangeEventArgs
    {
        CallStateChangeEventArgs(std::nullptr_t) noexcept {}
        CallStateChangeEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::ICallStateChangeEventArgs(ptr, take_ownership_from_abi) {}
        CallStateChangeEventArgs(CallStateChangeEventArgs const&) noexcept = default;
        CallStateChangeEventArgs(CallStateChangeEventArgs&&) noexcept = default;
        CallStateChangeEventArgs& operator=(CallStateChangeEventArgs const&) & noexcept = default;
        CallStateChangeEventArgs& operator=(CallStateChangeEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) LockScreenCallEndCallDeferral : winrt::Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral
    {
        LockScreenCallEndCallDeferral(std::nullptr_t) noexcept {}
        LockScreenCallEndCallDeferral(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::ILockScreenCallEndCallDeferral(ptr, take_ownership_from_abi) {}
        LockScreenCallEndCallDeferral(LockScreenCallEndCallDeferral const&) noexcept = default;
        LockScreenCallEndCallDeferral(LockScreenCallEndCallDeferral&&) noexcept = default;
        LockScreenCallEndCallDeferral& operator=(LockScreenCallEndCallDeferral const&) & noexcept = default;
        LockScreenCallEndCallDeferral& operator=(LockScreenCallEndCallDeferral&&) & noexcept = default;
    };
    struct __declspec(empty_bases) LockScreenCallEndRequestedEventArgs : winrt::Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs
    {
        LockScreenCallEndRequestedEventArgs(std::nullptr_t) noexcept {}
        LockScreenCallEndRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::ILockScreenCallEndRequestedEventArgs(ptr, take_ownership_from_abi) {}
        LockScreenCallEndRequestedEventArgs(LockScreenCallEndRequestedEventArgs const&) noexcept = default;
        LockScreenCallEndRequestedEventArgs(LockScreenCallEndRequestedEventArgs&&) noexcept = default;
        LockScreenCallEndRequestedEventArgs& operator=(LockScreenCallEndRequestedEventArgs const&) & noexcept = default;
        LockScreenCallEndRequestedEventArgs& operator=(LockScreenCallEndRequestedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) LockScreenCallUI : winrt::Windows::ApplicationModel::Calls::ILockScreenCallUI
    {
        LockScreenCallUI(std::nullptr_t) noexcept {}
        LockScreenCallUI(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::ILockScreenCallUI(ptr, take_ownership_from_abi) {}
        LockScreenCallUI(LockScreenCallUI const&) noexcept = default;
        LockScreenCallUI(LockScreenCallUI&&) noexcept = default;
        LockScreenCallUI& operator=(LockScreenCallUI const&) & noexcept = default;
        LockScreenCallUI& operator=(LockScreenCallUI&&) & noexcept = default;
    };
    struct __declspec(empty_bases) MuteChangeEventArgs : winrt::Windows::ApplicationModel::Calls::IMuteChangeEventArgs
    {
        MuteChangeEventArgs(std::nullptr_t) noexcept {}
        MuteChangeEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::IMuteChangeEventArgs(ptr, take_ownership_from_abi) {}
        MuteChangeEventArgs(MuteChangeEventArgs const&) noexcept = default;
        MuteChangeEventArgs(MuteChangeEventArgs&&) noexcept = default;
        MuteChangeEventArgs& operator=(MuteChangeEventArgs const&) & noexcept = default;
        MuteChangeEventArgs& operator=(MuteChangeEventArgs&&) & noexcept = default;
    };
    struct PhoneCallBlocking
    {
        PhoneCallBlocking() = delete;
        [[nodiscard]] static auto BlockUnknownNumbers();
        static auto BlockUnknownNumbers(bool value);
        [[nodiscard]] static auto BlockPrivateNumbers();
        static auto BlockPrivateNumbers(bool value);
        static auto SetCallBlockingListAsync(param::async_iterable<hstring> const& phoneNumberList);
    };
    struct __declspec(empty_bases) PhoneCallHistoryEntry : winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry
    {
        PhoneCallHistoryEntry(std::nullptr_t) noexcept {}
        PhoneCallHistoryEntry(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntry(ptr, take_ownership_from_abi) {}
        PhoneCallHistoryEntry();
        PhoneCallHistoryEntry(PhoneCallHistoryEntry const&) noexcept = default;
        PhoneCallHistoryEntry(PhoneCallHistoryEntry&&) noexcept = default;
        PhoneCallHistoryEntry& operator=(PhoneCallHistoryEntry const&) & noexcept = default;
        PhoneCallHistoryEntry& operator=(PhoneCallHistoryEntry&&) & noexcept = default;
    };
    struct __declspec(empty_bases) PhoneCallHistoryEntryAddress : winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress
    {
        PhoneCallHistoryEntryAddress(std::nullptr_t) noexcept {}
        PhoneCallHistoryEntryAddress(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryAddress(ptr, take_ownership_from_abi) {}
        PhoneCallHistoryEntryAddress();
        PhoneCallHistoryEntryAddress(param::hstring const& rawAddress, winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryEntryRawAddressKind const& rawAddressKind);
        PhoneCallHistoryEntryAddress(PhoneCallHistoryEntryAddress const&) noexcept = default;
        PhoneCallHistoryEntryAddress(PhoneCallHistoryEntryAddress&&) noexcept = default;
        PhoneCallHistoryEntryAddress& operator=(PhoneCallHistoryEntryAddress const&) & noexcept = default;
        PhoneCallHistoryEntryAddress& operator=(PhoneCallHistoryEntryAddress&&) & noexcept = default;
    };
    struct __declspec(empty_bases) PhoneCallHistoryEntryQueryOptions : winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions
    {
        PhoneCallHistoryEntryQueryOptions(std::nullptr_t) noexcept {}
        PhoneCallHistoryEntryQueryOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryQueryOptions(ptr, take_ownership_from_abi) {}
        PhoneCallHistoryEntryQueryOptions();
        PhoneCallHistoryEntryQueryOptions(PhoneCallHistoryEntryQueryOptions const&) noexcept = default;
        PhoneCallHistoryEntryQueryOptions(PhoneCallHistoryEntryQueryOptions&&) noexcept = default;
        PhoneCallHistoryEntryQueryOptions& operator=(PhoneCallHistoryEntryQueryOptions const&) & noexcept = default;
        PhoneCallHistoryEntryQueryOptions& operator=(PhoneCallHistoryEntryQueryOptions&&) & noexcept = default;
    };
    struct __declspec(empty_bases) PhoneCallHistoryEntryReader : winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader
    {
        PhoneCallHistoryEntryReader(std::nullptr_t) noexcept {}
        PhoneCallHistoryEntryReader(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryEntryReader(ptr, take_ownership_from_abi) {}
        PhoneCallHistoryEntryReader(PhoneCallHistoryEntryReader const&) noexcept = default;
        PhoneCallHistoryEntryReader(PhoneCallHistoryEntryReader&&) noexcept = default;
        PhoneCallHistoryEntryReader& operator=(PhoneCallHistoryEntryReader const&) & noexcept = default;
        PhoneCallHistoryEntryReader& operator=(PhoneCallHistoryEntryReader&&) & noexcept = default;
    };
    struct PhoneCallHistoryManager
    {
        PhoneCallHistoryManager() = delete;
        static auto RequestStoreAsync(winrt::Windows::ApplicationModel::Calls::PhoneCallHistoryStoreAccessType const& accessType);
        static auto GetForUser(winrt::Windows::System::User const& user);
    };
    struct __declspec(empty_bases) PhoneCallHistoryManagerForUser : winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser
    {
        PhoneCallHistoryManagerForUser(std::nullptr_t) noexcept {}
        PhoneCallHistoryManagerForUser(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryManagerForUser(ptr, take_ownership_from_abi) {}
        PhoneCallHistoryManagerForUser(PhoneCallHistoryManagerForUser const&) noexcept = default;
        PhoneCallHistoryManagerForUser(PhoneCallHistoryManagerForUser&&) noexcept = default;
        PhoneCallHistoryManagerForUser& operator=(PhoneCallHistoryManagerForUser const&) & noexcept = default;
        PhoneCallHistoryManagerForUser& operator=(PhoneCallHistoryManagerForUser&&) & noexcept = default;
    };
    struct __declspec(empty_bases) PhoneCallHistoryStore : winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryStore
    {
        PhoneCallHistoryStore(std::nullptr_t) noexcept {}
        PhoneCallHistoryStore(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::IPhoneCallHistoryStore(ptr, take_ownership_from_abi) {}
        PhoneCallHistoryStore(PhoneCallHistoryStore const&) noexcept = default;
        PhoneCallHistoryStore(PhoneCallHistoryStore&&) noexcept = default;
        PhoneCallHistoryStore& operator=(PhoneCallHistoryStore const&) & noexcept = default;
        PhoneCallHistoryStore& operator=(PhoneCallHistoryStore&&) & noexcept = default;
    };
    struct PhoneCallManager
    {
        PhoneCallManager() = delete;
        static auto ShowPhoneCallUI(param::hstring const& phoneNumber, param::hstring const& displayName);
        static auto CallStateChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using CallStateChanged_revoker = impl::factory_event_revoker<winrt::Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2, &impl::abi_t<winrt::Windows::ApplicationModel::Calls::IPhoneCallManagerStatics2>::remove_CallStateChanged>;
        [[nodiscard]] static CallStateChanged_revoker CallStateChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto CallStateChanged(winrt::event_token const& token);
        [[nodiscard]] static auto IsCallActive();
        [[nodiscard]] static auto IsCallIncoming();
        static auto ShowPhoneCallSettingsUI();
        static auto RequestStoreAsync();
    };
    struct __declspec(empty_bases) PhoneCallStore : winrt::Windows::ApplicationModel::Calls::IPhoneCallStore
    {
        PhoneCallStore(std::nullptr_t) noexcept {}
        PhoneCallStore(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::IPhoneCallStore(ptr, take_ownership_from_abi) {}
        PhoneCallStore(PhoneCallStore const&) noexcept = default;
        PhoneCallStore(PhoneCallStore&&) noexcept = default;
        PhoneCallStore& operator=(PhoneCallStore const&) & noexcept = default;
        PhoneCallStore& operator=(PhoneCallStore&&) & noexcept = default;
    };
    struct __declspec(empty_bases) PhoneCallVideoCapabilities : winrt::Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities
    {
        PhoneCallVideoCapabilities(std::nullptr_t) noexcept {}
        PhoneCallVideoCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::IPhoneCallVideoCapabilities(ptr, take_ownership_from_abi) {}
        PhoneCallVideoCapabilities(PhoneCallVideoCapabilities const&) noexcept = default;
        PhoneCallVideoCapabilities(PhoneCallVideoCapabilities&&) noexcept = default;
        PhoneCallVideoCapabilities& operator=(PhoneCallVideoCapabilities const&) & noexcept = default;
        PhoneCallVideoCapabilities& operator=(PhoneCallVideoCapabilities&&) & noexcept = default;
    };
    struct PhoneCallVideoCapabilitiesManager
    {
        PhoneCallVideoCapabilitiesManager() = delete;
        static auto GetCapabilitiesAsync(param::hstring const& phoneNumber);
    };
    struct __declspec(empty_bases) PhoneDialOptions : winrt::Windows::ApplicationModel::Calls::IPhoneDialOptions
    {
        PhoneDialOptions(std::nullptr_t) noexcept {}
        PhoneDialOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::IPhoneDialOptions(ptr, take_ownership_from_abi) {}
        PhoneDialOptions();
        PhoneDialOptions(PhoneDialOptions const&) noexcept = default;
        PhoneDialOptions(PhoneDialOptions&&) noexcept = default;
        PhoneDialOptions& operator=(PhoneDialOptions const&) & noexcept = default;
        PhoneDialOptions& operator=(PhoneDialOptions&&) & noexcept = default;
    };
    struct __declspec(empty_bases) PhoneLine : winrt::Windows::ApplicationModel::Calls::IPhoneLine,
        impl::require<PhoneLine, winrt::Windows::ApplicationModel::Calls::IPhoneLine2>
    {
        PhoneLine(std::nullptr_t) noexcept {}
        PhoneLine(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::IPhoneLine(ptr, take_ownership_from_abi) {}
        PhoneLine(PhoneLine const&) noexcept = default;
        PhoneLine(PhoneLine&&) noexcept = default;
        PhoneLine& operator=(PhoneLine const&) & noexcept = default;
        PhoneLine& operator=(PhoneLine&&) & noexcept = default;
        static auto FromIdAsync(winrt::guid const& lineId);
    };
    struct __declspec(empty_bases) PhoneLineCellularDetails : winrt::Windows::ApplicationModel::Calls::IPhoneLineCellularDetails
    {
        PhoneLineCellularDetails(std::nullptr_t) noexcept {}
        PhoneLineCellularDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::IPhoneLineCellularDetails(ptr, take_ownership_from_abi) {}
        PhoneLineCellularDetails(PhoneLineCellularDetails const&) noexcept = default;
        PhoneLineCellularDetails(PhoneLineCellularDetails&&) noexcept = default;
        PhoneLineCellularDetails& operator=(PhoneLineCellularDetails const&) & noexcept = default;
        PhoneLineCellularDetails& operator=(PhoneLineCellularDetails&&) & noexcept = default;
    };
    struct __declspec(empty_bases) PhoneLineConfiguration : winrt::Windows::ApplicationModel::Calls::IPhoneLineConfiguration
    {
        PhoneLineConfiguration(std::nullptr_t) noexcept {}
        PhoneLineConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::IPhoneLineConfiguration(ptr, take_ownership_from_abi) {}
        PhoneLineConfiguration(PhoneLineConfiguration const&) noexcept = default;
        PhoneLineConfiguration(PhoneLineConfiguration&&) noexcept = default;
        PhoneLineConfiguration& operator=(PhoneLineConfiguration const&) & noexcept = default;
        PhoneLineConfiguration& operator=(PhoneLineConfiguration&&) & noexcept = default;
    };
    struct __declspec(empty_bases) PhoneLineTransportDevice : winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDevice
    {
        PhoneLineTransportDevice(std::nullptr_t) noexcept {}
        PhoneLineTransportDevice(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::IPhoneLineTransportDevice(ptr, take_ownership_from_abi) {}
        PhoneLineTransportDevice(PhoneLineTransportDevice const&) noexcept = default;
        PhoneLineTransportDevice(PhoneLineTransportDevice&&) noexcept = default;
        PhoneLineTransportDevice& operator=(PhoneLineTransportDevice const&) & noexcept = default;
        PhoneLineTransportDevice& operator=(PhoneLineTransportDevice&&) & noexcept = default;
        static auto FromId(param::hstring const& id);
        static auto GetDeviceSelector();
        static auto GetDeviceSelector(winrt::Windows::ApplicationModel::Calls::PhoneLineTransport const& transport);
    };
    struct __declspec(empty_bases) PhoneLineWatcher : winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcher
    {
        PhoneLineWatcher(std::nullptr_t) noexcept {}
        PhoneLineWatcher(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcher(ptr, take_ownership_from_abi) {}
        PhoneLineWatcher(PhoneLineWatcher const&) noexcept = default;
        PhoneLineWatcher(PhoneLineWatcher&&) noexcept = default;
        PhoneLineWatcher& operator=(PhoneLineWatcher const&) & noexcept = default;
        PhoneLineWatcher& operator=(PhoneLineWatcher&&) & noexcept = default;
    };
    struct __declspec(empty_bases) PhoneLineWatcherEventArgs : winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs
    {
        PhoneLineWatcherEventArgs(std::nullptr_t) noexcept {}
        PhoneLineWatcherEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::IPhoneLineWatcherEventArgs(ptr, take_ownership_from_abi) {}
        PhoneLineWatcherEventArgs(PhoneLineWatcherEventArgs const&) noexcept = default;
        PhoneLineWatcherEventArgs(PhoneLineWatcherEventArgs&&) noexcept = default;
        PhoneLineWatcherEventArgs& operator=(PhoneLineWatcherEventArgs const&) & noexcept = default;
        PhoneLineWatcherEventArgs& operator=(PhoneLineWatcherEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) PhoneVoicemail : winrt::Windows::ApplicationModel::Calls::IPhoneVoicemail
    {
        PhoneVoicemail(std::nullptr_t) noexcept {}
        PhoneVoicemail(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::IPhoneVoicemail(ptr, take_ownership_from_abi) {}
        PhoneVoicemail(PhoneVoicemail const&) noexcept = default;
        PhoneVoicemail(PhoneVoicemail&&) noexcept = default;
        PhoneVoicemail& operator=(PhoneVoicemail const&) & noexcept = default;
        PhoneVoicemail& operator=(PhoneVoicemail&&) & noexcept = default;
    };
    struct __declspec(empty_bases) VoipCallCoordinator : winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator,
        impl::require<VoipCallCoordinator, winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator2, winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator3, winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator4>
    {
        VoipCallCoordinator(std::nullptr_t) noexcept {}
        VoipCallCoordinator(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator(ptr, take_ownership_from_abi) {}
        VoipCallCoordinator(VoipCallCoordinator const&) noexcept = default;
        VoipCallCoordinator(VoipCallCoordinator&&) noexcept = default;
        VoipCallCoordinator& operator=(VoipCallCoordinator const&) & noexcept = default;
        VoipCallCoordinator& operator=(VoipCallCoordinator&&) & noexcept = default;
        using winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator::RequestNewIncomingCall;
        using impl::consume_t<VoipCallCoordinator, winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator3>::RequestNewIncomingCall;
        using winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator::ReserveCallResourcesAsync;
        using impl::consume_t<VoipCallCoordinator, winrt::Windows::ApplicationModel::Calls::IVoipCallCoordinator4>::ReserveCallResourcesAsync;
        static auto GetDefault();
    };
    struct __declspec(empty_bases) VoipPhoneCall : winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall,
        impl::require<VoipPhoneCall, winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall2, winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall3>
    {
        VoipPhoneCall(std::nullptr_t) noexcept {}
        VoipPhoneCall(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Calls::IVoipPhoneCall(ptr, take_ownership_from_abi) {}
        VoipPhoneCall(VoipPhoneCall const&) noexcept = default;
        VoipPhoneCall(VoipPhoneCall&&) noexcept = default;
        VoipPhoneCall& operator=(VoipPhoneCall const&) & noexcept = default;
        VoipPhoneCall& operator=(VoipPhoneCall&&) & noexcept = default;
    };
}
#endif
