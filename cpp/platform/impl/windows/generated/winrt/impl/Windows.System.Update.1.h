// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Windows_System_Update_1_H
#define WINRT_Windows_System_Update_1_H
#include "winrt/impl/Windows.System.Update.0.h"
WINRT_EXPORT namespace winrt::Windows::System::Update
{
    struct __declspec(empty_bases) ISystemUpdateItem :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemUpdateItem>
    {
        ISystemUpdateItem(std::nullptr_t = nullptr) noexcept {}
        ISystemUpdateItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISystemUpdateItem(ISystemUpdateItem const&) noexcept = default;
        ISystemUpdateItem(ISystemUpdateItem&&) noexcept = default;
        ISystemUpdateItem& operator=(ISystemUpdateItem const&) & noexcept = default;
        ISystemUpdateItem& operator=(ISystemUpdateItem&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISystemUpdateLastErrorInfo :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemUpdateLastErrorInfo>
    {
        ISystemUpdateLastErrorInfo(std::nullptr_t = nullptr) noexcept {}
        ISystemUpdateLastErrorInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISystemUpdateLastErrorInfo(ISystemUpdateLastErrorInfo const&) noexcept = default;
        ISystemUpdateLastErrorInfo(ISystemUpdateLastErrorInfo&&) noexcept = default;
        ISystemUpdateLastErrorInfo& operator=(ISystemUpdateLastErrorInfo const&) & noexcept = default;
        ISystemUpdateLastErrorInfo& operator=(ISystemUpdateLastErrorInfo&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ISystemUpdateManagerStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemUpdateManagerStatics>
    {
        ISystemUpdateManagerStatics(std::nullptr_t = nullptr) noexcept {}
        ISystemUpdateManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ISystemUpdateManagerStatics(ISystemUpdateManagerStatics const&) noexcept = default;
        ISystemUpdateManagerStatics(ISystemUpdateManagerStatics&&) noexcept = default;
        ISystemUpdateManagerStatics& operator=(ISystemUpdateManagerStatics const&) & noexcept = default;
        ISystemUpdateManagerStatics& operator=(ISystemUpdateManagerStatics&&) & noexcept = default;
    };
}
#endif
