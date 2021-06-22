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

#ifndef WINRT_Windows_Storage_Streams_1_H
#define WINRT_Windows_Storage_Streams_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Storage.Streams.0.h"
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct __declspec(empty_bases) IBuffer :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBuffer>
    {
        IBuffer(std::nullptr_t = nullptr) noexcept {}
        IBuffer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBuffer(IBuffer const&) noexcept = default;
        IBuffer(IBuffer&&) noexcept = default;
        IBuffer& operator=(IBuffer const&) & noexcept = default;
        IBuffer& operator=(IBuffer&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IBufferFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBufferFactory>
    {
        IBufferFactory(std::nullptr_t = nullptr) noexcept {}
        IBufferFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBufferFactory(IBufferFactory const&) noexcept = default;
        IBufferFactory(IBufferFactory&&) noexcept = default;
        IBufferFactory& operator=(IBufferFactory const&) & noexcept = default;
        IBufferFactory& operator=(IBufferFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IBufferStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBufferStatics>
    {
        IBufferStatics(std::nullptr_t = nullptr) noexcept {}
        IBufferStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IBufferStatics(IBufferStatics const&) noexcept = default;
        IBufferStatics(IBufferStatics&&) noexcept = default;
        IBufferStatics& operator=(IBufferStatics const&) & noexcept = default;
        IBufferStatics& operator=(IBufferStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IContentTypeProvider :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IContentTypeProvider>
    {
        IContentTypeProvider(std::nullptr_t = nullptr) noexcept {}
        IContentTypeProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IContentTypeProvider(IContentTypeProvider const&) noexcept = default;
        IContentTypeProvider(IContentTypeProvider&&) noexcept = default;
        IContentTypeProvider& operator=(IContentTypeProvider const&) & noexcept = default;
        IContentTypeProvider& operator=(IContentTypeProvider&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IDataReader :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDataReader>
    {
        IDataReader(std::nullptr_t = nullptr) noexcept {}
        IDataReader(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IDataReader(IDataReader const&) noexcept = default;
        IDataReader(IDataReader&&) noexcept = default;
        IDataReader& operator=(IDataReader const&) & noexcept = default;
        IDataReader& operator=(IDataReader&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IDataReaderFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDataReaderFactory>
    {
        IDataReaderFactory(std::nullptr_t = nullptr) noexcept {}
        IDataReaderFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IDataReaderFactory(IDataReaderFactory const&) noexcept = default;
        IDataReaderFactory(IDataReaderFactory&&) noexcept = default;
        IDataReaderFactory& operator=(IDataReaderFactory const&) & noexcept = default;
        IDataReaderFactory& operator=(IDataReaderFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IDataReaderStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDataReaderStatics>
    {
        IDataReaderStatics(std::nullptr_t = nullptr) noexcept {}
        IDataReaderStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IDataReaderStatics(IDataReaderStatics const&) noexcept = default;
        IDataReaderStatics(IDataReaderStatics&&) noexcept = default;
        IDataReaderStatics& operator=(IDataReaderStatics const&) & noexcept = default;
        IDataReaderStatics& operator=(IDataReaderStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IDataWriter :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDataWriter>
    {
        IDataWriter(std::nullptr_t = nullptr) noexcept {}
        IDataWriter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IDataWriter(IDataWriter const&) noexcept = default;
        IDataWriter(IDataWriter&&) noexcept = default;
        IDataWriter& operator=(IDataWriter const&) & noexcept = default;
        IDataWriter& operator=(IDataWriter&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IDataWriterFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IDataWriterFactory>
    {
        IDataWriterFactory(std::nullptr_t = nullptr) noexcept {}
        IDataWriterFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IDataWriterFactory(IDataWriterFactory const&) noexcept = default;
        IDataWriterFactory(IDataWriterFactory&&) noexcept = default;
        IDataWriterFactory& operator=(IDataWriterFactory const&) & noexcept = default;
        IDataWriterFactory& operator=(IDataWriterFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IFileRandomAccessStreamStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IFileRandomAccessStreamStatics>
    {
        IFileRandomAccessStreamStatics(std::nullptr_t = nullptr) noexcept {}
        IFileRandomAccessStreamStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IFileRandomAccessStreamStatics(IFileRandomAccessStreamStatics const&) noexcept = default;
        IFileRandomAccessStreamStatics(IFileRandomAccessStreamStatics&&) noexcept = default;
        IFileRandomAccessStreamStatics& operator=(IFileRandomAccessStreamStatics const&) & noexcept = default;
        IFileRandomAccessStreamStatics& operator=(IFileRandomAccessStreamStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IInputStream :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IInputStream>,
        impl::require<winrt::Windows::Storage::Streams::IInputStream, winrt::Windows::Foundation::IClosable>
    {
        IInputStream(std::nullptr_t = nullptr) noexcept {}
        IInputStream(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IInputStream(IInputStream const&) noexcept = default;
        IInputStream(IInputStream&&) noexcept = default;
        IInputStream& operator=(IInputStream const&) & noexcept = default;
        IInputStream& operator=(IInputStream&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IInputStreamReference :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IInputStreamReference>
    {
        IInputStreamReference(std::nullptr_t = nullptr) noexcept {}
        IInputStreamReference(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IInputStreamReference(IInputStreamReference const&) noexcept = default;
        IInputStreamReference(IInputStreamReference&&) noexcept = default;
        IInputStreamReference& operator=(IInputStreamReference const&) & noexcept = default;
        IInputStreamReference& operator=(IInputStreamReference&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IOutputStream :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IOutputStream>,
        impl::require<winrt::Windows::Storage::Streams::IOutputStream, winrt::Windows::Foundation::IClosable>
    {
        IOutputStream(std::nullptr_t = nullptr) noexcept {}
        IOutputStream(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IOutputStream(IOutputStream const&) noexcept = default;
        IOutputStream(IOutputStream&&) noexcept = default;
        IOutputStream& operator=(IOutputStream const&) & noexcept = default;
        IOutputStream& operator=(IOutputStream&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IRandomAccessStream :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRandomAccessStream>,
        impl::require<winrt::Windows::Storage::Streams::IRandomAccessStream, winrt::Windows::Foundation::IClosable, winrt::Windows::Storage::Streams::IInputStream, winrt::Windows::Storage::Streams::IOutputStream>
    {
        IRandomAccessStream(std::nullptr_t = nullptr) noexcept {}
        IRandomAccessStream(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IRandomAccessStream(IRandomAccessStream const&) noexcept = default;
        IRandomAccessStream(IRandomAccessStream&&) noexcept = default;
        IRandomAccessStream& operator=(IRandomAccessStream const&) & noexcept = default;
        IRandomAccessStream& operator=(IRandomAccessStream&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IRandomAccessStreamReference :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRandomAccessStreamReference>
    {
        IRandomAccessStreamReference(std::nullptr_t = nullptr) noexcept {}
        IRandomAccessStreamReference(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IRandomAccessStreamReference(IRandomAccessStreamReference const&) noexcept = default;
        IRandomAccessStreamReference(IRandomAccessStreamReference&&) noexcept = default;
        IRandomAccessStreamReference& operator=(IRandomAccessStreamReference const&) & noexcept = default;
        IRandomAccessStreamReference& operator=(IRandomAccessStreamReference&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IRandomAccessStreamReferenceStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRandomAccessStreamReferenceStatics>
    {
        IRandomAccessStreamReferenceStatics(std::nullptr_t = nullptr) noexcept {}
        IRandomAccessStreamReferenceStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IRandomAccessStreamReferenceStatics(IRandomAccessStreamReferenceStatics const&) noexcept = default;
        IRandomAccessStreamReferenceStatics(IRandomAccessStreamReferenceStatics&&) noexcept = default;
        IRandomAccessStreamReferenceStatics& operator=(IRandomAccessStreamReferenceStatics const&) & noexcept = default;
        IRandomAccessStreamReferenceStatics& operator=(IRandomAccessStreamReferenceStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IRandomAccessStreamStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRandomAccessStreamStatics>
    {
        IRandomAccessStreamStatics(std::nullptr_t = nullptr) noexcept {}
        IRandomAccessStreamStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IRandomAccessStreamStatics(IRandomAccessStreamStatics const&) noexcept = default;
        IRandomAccessStreamStatics(IRandomAccessStreamStatics&&) noexcept = default;
        IRandomAccessStreamStatics& operator=(IRandomAccessStreamStatics const&) & noexcept = default;
        IRandomAccessStreamStatics& operator=(IRandomAccessStreamStatics&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IRandomAccessStreamWithContentType :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRandomAccessStreamWithContentType>,
        impl::require<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType, winrt::Windows::Foundation::IClosable, winrt::Windows::Storage::Streams::IInputStream, winrt::Windows::Storage::Streams::IOutputStream, winrt::Windows::Storage::Streams::IRandomAccessStream, winrt::Windows::Storage::Streams::IContentTypeProvider>
    {
        IRandomAccessStreamWithContentType(std::nullptr_t = nullptr) noexcept {}
        IRandomAccessStreamWithContentType(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IRandomAccessStreamWithContentType(IRandomAccessStreamWithContentType const&) noexcept = default;
        IRandomAccessStreamWithContentType(IRandomAccessStreamWithContentType&&) noexcept = default;
        IRandomAccessStreamWithContentType& operator=(IRandomAccessStreamWithContentType const&) & noexcept = default;
        IRandomAccessStreamWithContentType& operator=(IRandomAccessStreamWithContentType&&) & noexcept = default;
    };
}
#endif
