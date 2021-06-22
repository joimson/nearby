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

#ifndef WINRT_Windows_ApplicationModel_Contacts_DataProvider_2_H
#define WINRT_Windows_ApplicationModel_Contacts_DataProvider_2_H
#include "winrt/impl/Windows.ApplicationModel.Contacts.DataProvider.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Contacts::DataProvider
{
    struct __declspec(empty_bases) ContactDataProviderConnection : winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection,
        impl::require<ContactDataProviderConnection, winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection2>
    {
        ContactDataProviderConnection(std::nullptr_t) noexcept {}
        ContactDataProviderConnection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderConnection(ptr, take_ownership_from_abi) {}
        ContactDataProviderConnection(ContactDataProviderConnection const&) noexcept = default;
        ContactDataProviderConnection(ContactDataProviderConnection&&) noexcept = default;
        ContactDataProviderConnection& operator=(ContactDataProviderConnection const&) & noexcept = default;
        ContactDataProviderConnection& operator=(ContactDataProviderConnection&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ContactDataProviderTriggerDetails : winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails
    {
        ContactDataProviderTriggerDetails(std::nullptr_t) noexcept {}
        ContactDataProviderTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactDataProviderTriggerDetails(ptr, take_ownership_from_abi) {}
        ContactDataProviderTriggerDetails(ContactDataProviderTriggerDetails const&) noexcept = default;
        ContactDataProviderTriggerDetails(ContactDataProviderTriggerDetails&&) noexcept = default;
        ContactDataProviderTriggerDetails& operator=(ContactDataProviderTriggerDetails const&) & noexcept = default;
        ContactDataProviderTriggerDetails& operator=(ContactDataProviderTriggerDetails&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ContactListCreateOrUpdateContactRequest : winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest
    {
        ContactListCreateOrUpdateContactRequest(std::nullptr_t) noexcept {}
        ContactListCreateOrUpdateContactRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequest(ptr, take_ownership_from_abi) {}
        ContactListCreateOrUpdateContactRequest(ContactListCreateOrUpdateContactRequest const&) noexcept = default;
        ContactListCreateOrUpdateContactRequest(ContactListCreateOrUpdateContactRequest&&) noexcept = default;
        ContactListCreateOrUpdateContactRequest& operator=(ContactListCreateOrUpdateContactRequest const&) & noexcept = default;
        ContactListCreateOrUpdateContactRequest& operator=(ContactListCreateOrUpdateContactRequest&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ContactListCreateOrUpdateContactRequestEventArgs : winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs
    {
        ContactListCreateOrUpdateContactRequestEventArgs(std::nullptr_t) noexcept {}
        ContactListCreateOrUpdateContactRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListCreateOrUpdateContactRequestEventArgs(ptr, take_ownership_from_abi) {}
        ContactListCreateOrUpdateContactRequestEventArgs(ContactListCreateOrUpdateContactRequestEventArgs const&) noexcept = default;
        ContactListCreateOrUpdateContactRequestEventArgs(ContactListCreateOrUpdateContactRequestEventArgs&&) noexcept = default;
        ContactListCreateOrUpdateContactRequestEventArgs& operator=(ContactListCreateOrUpdateContactRequestEventArgs const&) & noexcept = default;
        ContactListCreateOrUpdateContactRequestEventArgs& operator=(ContactListCreateOrUpdateContactRequestEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ContactListDeleteContactRequest : winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest
    {
        ContactListDeleteContactRequest(std::nullptr_t) noexcept {}
        ContactListDeleteContactRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequest(ptr, take_ownership_from_abi) {}
        ContactListDeleteContactRequest(ContactListDeleteContactRequest const&) noexcept = default;
        ContactListDeleteContactRequest(ContactListDeleteContactRequest&&) noexcept = default;
        ContactListDeleteContactRequest& operator=(ContactListDeleteContactRequest const&) & noexcept = default;
        ContactListDeleteContactRequest& operator=(ContactListDeleteContactRequest&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ContactListDeleteContactRequestEventArgs : winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs
    {
        ContactListDeleteContactRequestEventArgs(std::nullptr_t) noexcept {}
        ContactListDeleteContactRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListDeleteContactRequestEventArgs(ptr, take_ownership_from_abi) {}
        ContactListDeleteContactRequestEventArgs(ContactListDeleteContactRequestEventArgs const&) noexcept = default;
        ContactListDeleteContactRequestEventArgs(ContactListDeleteContactRequestEventArgs&&) noexcept = default;
        ContactListDeleteContactRequestEventArgs& operator=(ContactListDeleteContactRequestEventArgs const&) & noexcept = default;
        ContactListDeleteContactRequestEventArgs& operator=(ContactListDeleteContactRequestEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ContactListServerSearchReadBatchRequest : winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest
    {
        ContactListServerSearchReadBatchRequest(std::nullptr_t) noexcept {}
        ContactListServerSearchReadBatchRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequest(ptr, take_ownership_from_abi) {}
        ContactListServerSearchReadBatchRequest(ContactListServerSearchReadBatchRequest const&) noexcept = default;
        ContactListServerSearchReadBatchRequest(ContactListServerSearchReadBatchRequest&&) noexcept = default;
        ContactListServerSearchReadBatchRequest& operator=(ContactListServerSearchReadBatchRequest const&) & noexcept = default;
        ContactListServerSearchReadBatchRequest& operator=(ContactListServerSearchReadBatchRequest&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ContactListServerSearchReadBatchRequestEventArgs : winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs
    {
        ContactListServerSearchReadBatchRequestEventArgs(std::nullptr_t) noexcept {}
        ContactListServerSearchReadBatchRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListServerSearchReadBatchRequestEventArgs(ptr, take_ownership_from_abi) {}
        ContactListServerSearchReadBatchRequestEventArgs(ContactListServerSearchReadBatchRequestEventArgs const&) noexcept = default;
        ContactListServerSearchReadBatchRequestEventArgs(ContactListServerSearchReadBatchRequestEventArgs&&) noexcept = default;
        ContactListServerSearchReadBatchRequestEventArgs& operator=(ContactListServerSearchReadBatchRequestEventArgs const&) & noexcept = default;
        ContactListServerSearchReadBatchRequestEventArgs& operator=(ContactListServerSearchReadBatchRequestEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ContactListSyncManagerSyncRequest : winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest
    {
        ContactListSyncManagerSyncRequest(std::nullptr_t) noexcept {}
        ContactListSyncManagerSyncRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequest(ptr, take_ownership_from_abi) {}
        ContactListSyncManagerSyncRequest(ContactListSyncManagerSyncRequest const&) noexcept = default;
        ContactListSyncManagerSyncRequest(ContactListSyncManagerSyncRequest&&) noexcept = default;
        ContactListSyncManagerSyncRequest& operator=(ContactListSyncManagerSyncRequest const&) & noexcept = default;
        ContactListSyncManagerSyncRequest& operator=(ContactListSyncManagerSyncRequest&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ContactListSyncManagerSyncRequestEventArgs : winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs
    {
        ContactListSyncManagerSyncRequestEventArgs(std::nullptr_t) noexcept {}
        ContactListSyncManagerSyncRequestEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::Contacts::DataProvider::IContactListSyncManagerSyncRequestEventArgs(ptr, take_ownership_from_abi) {}
        ContactListSyncManagerSyncRequestEventArgs(ContactListSyncManagerSyncRequestEventArgs const&) noexcept = default;
        ContactListSyncManagerSyncRequestEventArgs(ContactListSyncManagerSyncRequestEventArgs&&) noexcept = default;
        ContactListSyncManagerSyncRequestEventArgs& operator=(ContactListSyncManagerSyncRequestEventArgs const&) & noexcept = default;
        ContactListSyncManagerSyncRequestEventArgs& operator=(ContactListSyncManagerSyncRequestEventArgs&&) & noexcept = default;
    };
}
#endif
