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

#ifndef WINRT_Windows_ApplicationModel_UserDataAccounts_Provider_0_H
#define WINRT_Windows_ApplicationModel_UserDataAccounts_Provider_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts
{
    enum class UserDataAccountContentKinds : uint32_t;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserDataAccounts::Provider
{
    enum class UserDataAccountProviderOperationKind : int32_t
    {
        AddAccount = 0,
        Settings = 1,
        ResolveErrors = 2,
    };
    enum class UserDataAccountProviderPartnerAccountKind : int32_t
    {
        Exchange = 0,
        PopOrImap = 1,
    };
    struct IUserDataAccountPartnerAccountInfo;
    struct IUserDataAccountProviderAddAccountOperation;
    struct IUserDataAccountProviderOperation;
    struct IUserDataAccountProviderResolveErrorsOperation;
    struct IUserDataAccountProviderSettingsOperation;
    struct UserDataAccountPartnerAccountInfo;
    struct UserDataAccountProviderAddAccountOperation;
    struct UserDataAccountProviderResolveErrorsOperation;
    struct UserDataAccountProviderSettingsOperation;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderAddAccountOperation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderResolveErrorsOperation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderSettingsOperation>{ using type = interface_category; };
    template <> struct category<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderAddAccountOperation>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderResolveErrorsOperation>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderSettingsOperation>{ using type = class_category; };
    template <> struct category<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderOperationKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderPartnerAccountKind>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo> = L"Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountPartnerAccountInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderAddAccountOperation> = L"Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderAddAccountOperation";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderResolveErrorsOperation> = L"Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderResolveErrorsOperation";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderSettingsOperation> = L"Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderSettingsOperation";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderOperationKind> = L"Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderOperationKind";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderPartnerAccountKind> = L"Windows.ApplicationModel.UserDataAccounts.Provider.UserDataAccountProviderPartnerAccountKind";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo> = L"Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountPartnerAccountInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderAddAccountOperation> = L"Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderAddAccountOperation";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation> = L"Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderOperation";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderResolveErrorsOperation> = L"Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderResolveErrorsOperation";
    template <> inline constexpr auto& name_v<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderSettingsOperation> = L"Windows.ApplicationModel.UserDataAccounts.Provider.IUserDataAccountProviderSettingsOperation";
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo>{ 0x5F200037,0xF6EF,0x4EC3,{ 0x86,0x30,0x01,0x2C,0x59,0xC1,0x14,0x9F } }; // 5F200037-F6EF-4EC3-8630-012C59C1149F
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderAddAccountOperation>{ 0xB9C72530,0x3F84,0x4B5D,{ 0x8E,0xAA,0x45,0xE9,0x7A,0xA8,0x42,0xED } }; // B9C72530-3F84-4B5D-8EAA-45E97AA842ED
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>{ 0xA20AAD63,0x888C,0x4A62,{ 0xA3,0xDD,0x34,0xD0,0x7A,0x80,0x2B,0x2B } }; // A20AAD63-888C-4A62-A3DD-34D07A802B2B
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderResolveErrorsOperation>{ 0x6235DC15,0xBFCB,0x41E1,{ 0x99,0x57,0x97,0x59,0xA2,0x88,0x46,0xCC } }; // 6235DC15-BFCB-41E1-9957-9759A28846CC
    template <> inline constexpr guid guid_v<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderSettingsOperation>{ 0x92034DB7,0x8648,0x4F30,{ 0xAC,0xFA,0x30,0x02,0x65,0x8C,0xA8,0x0D } }; // 92034DB7-8648-4F30-ACFA-3002658CA80D
    template <> struct default_interface<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo>{ using type = winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderAddAccountOperation>{ using type = winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderAddAccountOperation; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderResolveErrorsOperation>{ using type = winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderResolveErrorsOperation; };
    template <> struct default_interface<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderSettingsOperation>{ using type = winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderSettingsOperation; };
    template <> struct abi<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_Priority(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_AccountKind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderAddAccountOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContentKinds(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_PartnerAccountInfos(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompleted(void*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Kind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderResolveErrorsOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UserDataAccountId(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompleted() noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderSettingsOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_UserDataAccountId(void**) noexcept = 0;
            virtual int32_t __stdcall ReportCompleted() noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountPartnerAccountInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) Priority() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderPartnerAccountKind) AccountKind() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountPartnerAccountInfo>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountPartnerAccountInfo<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderAddAccountOperation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::UserDataAccounts::UserDataAccountContentKinds) ContentKinds() const;
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountPartnerAccountInfo>) PartnerAccountInfos() const;
        WINRT_IMPL_AUTO(void) ReportCompleted(param::hstring const& userDataAccountId) const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderAddAccountOperation>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderAddAccountOperation<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderOperation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::ApplicationModel::UserDataAccounts::Provider::UserDataAccountProviderOperationKind) Kind() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderOperation>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderOperation<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderResolveErrorsOperation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) UserDataAccountId() const;
        WINRT_IMPL_AUTO(void) ReportCompleted() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderResolveErrorsOperation>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderResolveErrorsOperation<D>;
    };
    template <typename D>
    struct consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderSettingsOperation
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) UserDataAccountId() const;
        WINRT_IMPL_AUTO(void) ReportCompleted() const;
    };
    template <> struct consume<winrt::Windows::ApplicationModel::UserDataAccounts::Provider::IUserDataAccountProviderSettingsOperation>
    {
        template <typename D> using type = consume_Windows_ApplicationModel_UserDataAccounts_Provider_IUserDataAccountProviderSettingsOperation<D>;
    };
}
#endif
