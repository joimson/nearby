// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Windows_ApplicationModel_DataTransfer_ShareTarget_2_H
#define WINRT_Windows_ApplicationModel_DataTransfer_ShareTarget_2_H
#include "winrt/impl/Windows.ApplicationModel.DataTransfer.ShareTarget.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::DataTransfer::ShareTarget
{
    struct __declspec(empty_bases) QuickLink : winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink
    {
        QuickLink(std::nullptr_t) noexcept {}
        QuickLink(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::IQuickLink(ptr, take_ownership_from_abi) {}
        QuickLink();
        QuickLink(QuickLink const&) noexcept = default;
        QuickLink(QuickLink&&) noexcept = default;
        QuickLink& operator=(QuickLink const&) & noexcept = default;
        QuickLink& operator=(QuickLink&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ShareOperation : winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation,
        impl::require<ShareOperation, winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation2, winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation3>
    {
        ShareOperation(std::nullptr_t) noexcept {}
        ShareOperation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::DataTransfer::ShareTarget::IShareOperation(ptr, take_ownership_from_abi) {}
        ShareOperation(ShareOperation const&) noexcept = default;
        ShareOperation(ShareOperation&&) noexcept = default;
        ShareOperation& operator=(ShareOperation const&) & noexcept = default;
        ShareOperation& operator=(ShareOperation&&) & noexcept = default;
    };
}
#endif
