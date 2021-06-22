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

#ifndef WINRT_Windows_Services_Store_2_H
#define WINRT_Windows_Services_Store_2_H
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.System.2.h"
#include "winrt/impl/Windows.Services.Store.1.h"
WINRT_EXPORT namespace winrt::Windows::Services::Store
{
    struct StorePackageUpdateStatus
    {
        hstring PackageFamilyName;
        uint64_t PackageDownloadSizeInBytes;
        uint64_t PackageBytesDownloaded;
        double PackageDownloadProgress;
        double TotalDownloadProgress;
        winrt::Windows::Services::Store::StorePackageUpdateState PackageUpdateState;
    };
    inline bool operator==(StorePackageUpdateStatus const& left, StorePackageUpdateStatus const& right) noexcept
    {
        return left.PackageFamilyName == right.PackageFamilyName && left.PackageDownloadSizeInBytes == right.PackageDownloadSizeInBytes && left.PackageBytesDownloaded == right.PackageBytesDownloaded && left.PackageDownloadProgress == right.PackageDownloadProgress && left.TotalDownloadProgress == right.TotalDownloadProgress && left.PackageUpdateState == right.PackageUpdateState;
    }
    inline bool operator!=(StorePackageUpdateStatus const& left, StorePackageUpdateStatus const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) StoreAcquireLicenseResult : winrt::Windows::Services::Store::IStoreAcquireLicenseResult
    {
        StoreAcquireLicenseResult(std::nullptr_t) noexcept {}
        StoreAcquireLicenseResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreAcquireLicenseResult(ptr, take_ownership_from_abi) {}
        StoreAcquireLicenseResult(StoreAcquireLicenseResult const&) noexcept = default;
        StoreAcquireLicenseResult(StoreAcquireLicenseResult&&) noexcept = default;
        StoreAcquireLicenseResult& operator=(StoreAcquireLicenseResult const&) & noexcept = default;
        StoreAcquireLicenseResult& operator=(StoreAcquireLicenseResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreAppLicense : winrt::Windows::Services::Store::IStoreAppLicense,
        impl::require<StoreAppLicense, winrt::Windows::Services::Store::IStoreAppLicense2>
    {
        StoreAppLicense(std::nullptr_t) noexcept {}
        StoreAppLicense(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreAppLicense(ptr, take_ownership_from_abi) {}
        StoreAppLicense(StoreAppLicense const&) noexcept = default;
        StoreAppLicense(StoreAppLicense&&) noexcept = default;
        StoreAppLicense& operator=(StoreAppLicense const&) & noexcept = default;
        StoreAppLicense& operator=(StoreAppLicense&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreAvailability : winrt::Windows::Services::Store::IStoreAvailability
    {
        StoreAvailability(std::nullptr_t) noexcept {}
        StoreAvailability(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreAvailability(ptr, take_ownership_from_abi) {}
        StoreAvailability(StoreAvailability const&) noexcept = default;
        StoreAvailability(StoreAvailability&&) noexcept = default;
        StoreAvailability& operator=(StoreAvailability const&) & noexcept = default;
        StoreAvailability& operator=(StoreAvailability&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreCanAcquireLicenseResult : winrt::Windows::Services::Store::IStoreCanAcquireLicenseResult
    {
        StoreCanAcquireLicenseResult(std::nullptr_t) noexcept {}
        StoreCanAcquireLicenseResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreCanAcquireLicenseResult(ptr, take_ownership_from_abi) {}
        StoreCanAcquireLicenseResult(StoreCanAcquireLicenseResult const&) noexcept = default;
        StoreCanAcquireLicenseResult(StoreCanAcquireLicenseResult&&) noexcept = default;
        StoreCanAcquireLicenseResult& operator=(StoreCanAcquireLicenseResult const&) & noexcept = default;
        StoreCanAcquireLicenseResult& operator=(StoreCanAcquireLicenseResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreCollectionData : winrt::Windows::Services::Store::IStoreCollectionData
    {
        StoreCollectionData(std::nullptr_t) noexcept {}
        StoreCollectionData(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreCollectionData(ptr, take_ownership_from_abi) {}
        StoreCollectionData(StoreCollectionData const&) noexcept = default;
        StoreCollectionData(StoreCollectionData&&) noexcept = default;
        StoreCollectionData& operator=(StoreCollectionData const&) & noexcept = default;
        StoreCollectionData& operator=(StoreCollectionData&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreConsumableResult : winrt::Windows::Services::Store::IStoreConsumableResult
    {
        StoreConsumableResult(std::nullptr_t) noexcept {}
        StoreConsumableResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreConsumableResult(ptr, take_ownership_from_abi) {}
        StoreConsumableResult(StoreConsumableResult const&) noexcept = default;
        StoreConsumableResult(StoreConsumableResult&&) noexcept = default;
        StoreConsumableResult& operator=(StoreConsumableResult const&) & noexcept = default;
        StoreConsumableResult& operator=(StoreConsumableResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreContext : winrt::Windows::Services::Store::IStoreContext,
        impl::require<StoreContext, winrt::Windows::Services::Store::IStoreContext2, winrt::Windows::Services::Store::IStoreContext3, winrt::Windows::Services::Store::IStoreContext4>
    {
        StoreContext(std::nullptr_t) noexcept {}
        StoreContext(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreContext(ptr, take_ownership_from_abi) {}
        StoreContext(StoreContext const&) noexcept = default;
        StoreContext(StoreContext&&) noexcept = default;
        StoreContext& operator=(StoreContext const&) & noexcept = default;
        StoreContext& operator=(StoreContext&&) & noexcept = default;
        using winrt::Windows::Services::Store::IStoreContext::GetStoreProductsAsync;
        using impl::consume_t<StoreContext, winrt::Windows::Services::Store::IStoreContext3>::GetStoreProductsAsync;
        using winrt::Windows::Services::Store::IStoreContext::RequestDownloadAndInstallStorePackagesAsync;
        using impl::consume_t<StoreContext, winrt::Windows::Services::Store::IStoreContext3>::RequestDownloadAndInstallStorePackagesAsync;
        static auto GetDefault();
        static auto GetForUser(winrt::Windows::System::User const& user);
    };
    struct __declspec(empty_bases) StoreImage : winrt::Windows::Services::Store::IStoreImage
    {
        StoreImage(std::nullptr_t) noexcept {}
        StoreImage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreImage(ptr, take_ownership_from_abi) {}
        StoreImage(StoreImage const&) noexcept = default;
        StoreImage(StoreImage&&) noexcept = default;
        StoreImage& operator=(StoreImage const&) & noexcept = default;
        StoreImage& operator=(StoreImage&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreLicense : winrt::Windows::Services::Store::IStoreLicense
    {
        StoreLicense(std::nullptr_t) noexcept {}
        StoreLicense(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreLicense(ptr, take_ownership_from_abi) {}
        StoreLicense(StoreLicense const&) noexcept = default;
        StoreLicense(StoreLicense&&) noexcept = default;
        StoreLicense& operator=(StoreLicense const&) & noexcept = default;
        StoreLicense& operator=(StoreLicense&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StorePackageInstallOptions : winrt::Windows::Services::Store::IStorePackageInstallOptions
    {
        StorePackageInstallOptions(std::nullptr_t) noexcept {}
        StorePackageInstallOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStorePackageInstallOptions(ptr, take_ownership_from_abi) {}
        StorePackageInstallOptions();
        StorePackageInstallOptions(StorePackageInstallOptions const&) noexcept = default;
        StorePackageInstallOptions(StorePackageInstallOptions&&) noexcept = default;
        StorePackageInstallOptions& operator=(StorePackageInstallOptions const&) & noexcept = default;
        StorePackageInstallOptions& operator=(StorePackageInstallOptions&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StorePackageLicense : winrt::Windows::Services::Store::IStorePackageLicense
    {
        StorePackageLicense(std::nullptr_t) noexcept {}
        StorePackageLicense(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStorePackageLicense(ptr, take_ownership_from_abi) {}
        StorePackageLicense(StorePackageLicense const&) noexcept = default;
        StorePackageLicense(StorePackageLicense&&) noexcept = default;
        StorePackageLicense& operator=(StorePackageLicense const&) & noexcept = default;
        StorePackageLicense& operator=(StorePackageLicense&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StorePackageUpdate : winrt::Windows::Services::Store::IStorePackageUpdate
    {
        StorePackageUpdate(std::nullptr_t) noexcept {}
        StorePackageUpdate(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStorePackageUpdate(ptr, take_ownership_from_abi) {}
        StorePackageUpdate(StorePackageUpdate const&) noexcept = default;
        StorePackageUpdate(StorePackageUpdate&&) noexcept = default;
        StorePackageUpdate& operator=(StorePackageUpdate const&) & noexcept = default;
        StorePackageUpdate& operator=(StorePackageUpdate&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StorePackageUpdateResult : winrt::Windows::Services::Store::IStorePackageUpdateResult,
        impl::require<StorePackageUpdateResult, winrt::Windows::Services::Store::IStorePackageUpdateResult2>
    {
        StorePackageUpdateResult(std::nullptr_t) noexcept {}
        StorePackageUpdateResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStorePackageUpdateResult(ptr, take_ownership_from_abi) {}
        StorePackageUpdateResult(StorePackageUpdateResult const&) noexcept = default;
        StorePackageUpdateResult(StorePackageUpdateResult&&) noexcept = default;
        StorePackageUpdateResult& operator=(StorePackageUpdateResult const&) & noexcept = default;
        StorePackageUpdateResult& operator=(StorePackageUpdateResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StorePrice : winrt::Windows::Services::Store::IStorePrice
    {
        StorePrice(std::nullptr_t) noexcept {}
        StorePrice(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStorePrice(ptr, take_ownership_from_abi) {}
        StorePrice(StorePrice const&) noexcept = default;
        StorePrice(StorePrice&&) noexcept = default;
        StorePrice& operator=(StorePrice const&) & noexcept = default;
        StorePrice& operator=(StorePrice&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreProduct : winrt::Windows::Services::Store::IStoreProduct
    {
        StoreProduct(std::nullptr_t) noexcept {}
        StoreProduct(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreProduct(ptr, take_ownership_from_abi) {}
        StoreProduct(StoreProduct const&) noexcept = default;
        StoreProduct(StoreProduct&&) noexcept = default;
        StoreProduct& operator=(StoreProduct const&) & noexcept = default;
        StoreProduct& operator=(StoreProduct&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreProductOptions : winrt::Windows::Services::Store::IStoreProductOptions
    {
        StoreProductOptions(std::nullptr_t) noexcept {}
        StoreProductOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreProductOptions(ptr, take_ownership_from_abi) {}
        StoreProductOptions();
        StoreProductOptions(StoreProductOptions const&) noexcept = default;
        StoreProductOptions(StoreProductOptions&&) noexcept = default;
        StoreProductOptions& operator=(StoreProductOptions const&) & noexcept = default;
        StoreProductOptions& operator=(StoreProductOptions&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreProductPagedQueryResult : winrt::Windows::Services::Store::IStoreProductPagedQueryResult
    {
        StoreProductPagedQueryResult(std::nullptr_t) noexcept {}
        StoreProductPagedQueryResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreProductPagedQueryResult(ptr, take_ownership_from_abi) {}
        StoreProductPagedQueryResult(StoreProductPagedQueryResult const&) noexcept = default;
        StoreProductPagedQueryResult(StoreProductPagedQueryResult&&) noexcept = default;
        StoreProductPagedQueryResult& operator=(StoreProductPagedQueryResult const&) & noexcept = default;
        StoreProductPagedQueryResult& operator=(StoreProductPagedQueryResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreProductQueryResult : winrt::Windows::Services::Store::IStoreProductQueryResult
    {
        StoreProductQueryResult(std::nullptr_t) noexcept {}
        StoreProductQueryResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreProductQueryResult(ptr, take_ownership_from_abi) {}
        StoreProductQueryResult(StoreProductQueryResult const&) noexcept = default;
        StoreProductQueryResult(StoreProductQueryResult&&) noexcept = default;
        StoreProductQueryResult& operator=(StoreProductQueryResult const&) & noexcept = default;
        StoreProductQueryResult& operator=(StoreProductQueryResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreProductResult : winrt::Windows::Services::Store::IStoreProductResult
    {
        StoreProductResult(std::nullptr_t) noexcept {}
        StoreProductResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreProductResult(ptr, take_ownership_from_abi) {}
        StoreProductResult(StoreProductResult const&) noexcept = default;
        StoreProductResult(StoreProductResult&&) noexcept = default;
        StoreProductResult& operator=(StoreProductResult const&) & noexcept = default;
        StoreProductResult& operator=(StoreProductResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StorePurchaseProperties : winrt::Windows::Services::Store::IStorePurchaseProperties
    {
        StorePurchaseProperties(std::nullptr_t) noexcept {}
        StorePurchaseProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStorePurchaseProperties(ptr, take_ownership_from_abi) {}
        StorePurchaseProperties();
        explicit StorePurchaseProperties(param::hstring const& name);
        StorePurchaseProperties(StorePurchaseProperties const&) noexcept = default;
        StorePurchaseProperties(StorePurchaseProperties&&) noexcept = default;
        StorePurchaseProperties& operator=(StorePurchaseProperties const&) & noexcept = default;
        StorePurchaseProperties& operator=(StorePurchaseProperties&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StorePurchaseResult : winrt::Windows::Services::Store::IStorePurchaseResult
    {
        StorePurchaseResult(std::nullptr_t) noexcept {}
        StorePurchaseResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStorePurchaseResult(ptr, take_ownership_from_abi) {}
        StorePurchaseResult(StorePurchaseResult const&) noexcept = default;
        StorePurchaseResult(StorePurchaseResult&&) noexcept = default;
        StorePurchaseResult& operator=(StorePurchaseResult const&) & noexcept = default;
        StorePurchaseResult& operator=(StorePurchaseResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreQueueItem : winrt::Windows::Services::Store::IStoreQueueItem,
        impl::require<StoreQueueItem, winrt::Windows::Services::Store::IStoreQueueItem2>
    {
        StoreQueueItem(std::nullptr_t) noexcept {}
        StoreQueueItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreQueueItem(ptr, take_ownership_from_abi) {}
        StoreQueueItem(StoreQueueItem const&) noexcept = default;
        StoreQueueItem(StoreQueueItem&&) noexcept = default;
        StoreQueueItem& operator=(StoreQueueItem const&) & noexcept = default;
        StoreQueueItem& operator=(StoreQueueItem&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreQueueItemCompletedEventArgs : winrt::Windows::Services::Store::IStoreQueueItemCompletedEventArgs
    {
        StoreQueueItemCompletedEventArgs(std::nullptr_t) noexcept {}
        StoreQueueItemCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreQueueItemCompletedEventArgs(ptr, take_ownership_from_abi) {}
        StoreQueueItemCompletedEventArgs(StoreQueueItemCompletedEventArgs const&) noexcept = default;
        StoreQueueItemCompletedEventArgs(StoreQueueItemCompletedEventArgs&&) noexcept = default;
        StoreQueueItemCompletedEventArgs& operator=(StoreQueueItemCompletedEventArgs const&) & noexcept = default;
        StoreQueueItemCompletedEventArgs& operator=(StoreQueueItemCompletedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreQueueItemStatus : winrt::Windows::Services::Store::IStoreQueueItemStatus
    {
        StoreQueueItemStatus(std::nullptr_t) noexcept {}
        StoreQueueItemStatus(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreQueueItemStatus(ptr, take_ownership_from_abi) {}
        StoreQueueItemStatus(StoreQueueItemStatus const&) noexcept = default;
        StoreQueueItemStatus(StoreQueueItemStatus&&) noexcept = default;
        StoreQueueItemStatus& operator=(StoreQueueItemStatus const&) & noexcept = default;
        StoreQueueItemStatus& operator=(StoreQueueItemStatus&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreRateAndReviewResult : winrt::Windows::Services::Store::IStoreRateAndReviewResult
    {
        StoreRateAndReviewResult(std::nullptr_t) noexcept {}
        StoreRateAndReviewResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreRateAndReviewResult(ptr, take_ownership_from_abi) {}
        StoreRateAndReviewResult(StoreRateAndReviewResult const&) noexcept = default;
        StoreRateAndReviewResult(StoreRateAndReviewResult&&) noexcept = default;
        StoreRateAndReviewResult& operator=(StoreRateAndReviewResult const&) & noexcept = default;
        StoreRateAndReviewResult& operator=(StoreRateAndReviewResult&&) & noexcept = default;
    };
    struct StoreRequestHelper
    {
        StoreRequestHelper() = delete;
        static auto SendRequestAsync(winrt::Windows::Services::Store::StoreContext const& context, uint32_t requestKind, param::hstring const& parametersAsJson);
    };
    struct __declspec(empty_bases) StoreSendRequestResult : winrt::Windows::Services::Store::IStoreSendRequestResult,
        impl::require<StoreSendRequestResult, winrt::Windows::Services::Store::IStoreSendRequestResult2>
    {
        StoreSendRequestResult(std::nullptr_t) noexcept {}
        StoreSendRequestResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreSendRequestResult(ptr, take_ownership_from_abi) {}
        StoreSendRequestResult(StoreSendRequestResult const&) noexcept = default;
        StoreSendRequestResult(StoreSendRequestResult&&) noexcept = default;
        StoreSendRequestResult& operator=(StoreSendRequestResult const&) & noexcept = default;
        StoreSendRequestResult& operator=(StoreSendRequestResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreSku : winrt::Windows::Services::Store::IStoreSku
    {
        StoreSku(std::nullptr_t) noexcept {}
        StoreSku(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreSku(ptr, take_ownership_from_abi) {}
        StoreSku(StoreSku const&) noexcept = default;
        StoreSku(StoreSku&&) noexcept = default;
        StoreSku& operator=(StoreSku const&) & noexcept = default;
        StoreSku& operator=(StoreSku&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreSubscriptionInfo : winrt::Windows::Services::Store::IStoreSubscriptionInfo
    {
        StoreSubscriptionInfo(std::nullptr_t) noexcept {}
        StoreSubscriptionInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreSubscriptionInfo(ptr, take_ownership_from_abi) {}
        StoreSubscriptionInfo(StoreSubscriptionInfo const&) noexcept = default;
        StoreSubscriptionInfo(StoreSubscriptionInfo&&) noexcept = default;
        StoreSubscriptionInfo& operator=(StoreSubscriptionInfo const&) & noexcept = default;
        StoreSubscriptionInfo& operator=(StoreSubscriptionInfo&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreUninstallStorePackageResult : winrt::Windows::Services::Store::IStoreUninstallStorePackageResult
    {
        StoreUninstallStorePackageResult(std::nullptr_t) noexcept {}
        StoreUninstallStorePackageResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreUninstallStorePackageResult(ptr, take_ownership_from_abi) {}
        StoreUninstallStorePackageResult(StoreUninstallStorePackageResult const&) noexcept = default;
        StoreUninstallStorePackageResult(StoreUninstallStorePackageResult&&) noexcept = default;
        StoreUninstallStorePackageResult& operator=(StoreUninstallStorePackageResult const&) & noexcept = default;
        StoreUninstallStorePackageResult& operator=(StoreUninstallStorePackageResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StoreVideo : winrt::Windows::Services::Store::IStoreVideo
    {
        StoreVideo(std::nullptr_t) noexcept {}
        StoreVideo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Services::Store::IStoreVideo(ptr, take_ownership_from_abi) {}
        StoreVideo(StoreVideo const&) noexcept = default;
        StoreVideo(StoreVideo&&) noexcept = default;
        StoreVideo& operator=(StoreVideo const&) & noexcept = default;
        StoreVideo& operator=(StoreVideo&&) & noexcept = default;
    };
}
#endif
