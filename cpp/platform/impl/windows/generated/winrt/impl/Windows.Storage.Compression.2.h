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

#ifndef WINRT_Windows_Storage_Compression_2_H
#define WINRT_Windows_Storage_Compression_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Storage.Compression.1.h"
WINRT_EXPORT namespace winrt::Windows::Storage::Compression
{
    struct __declspec(empty_bases) Compressor : winrt::Windows::Storage::Compression::ICompressor
    {
        Compressor(std::nullptr_t) noexcept {}
        Compressor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Compression::ICompressor(ptr, take_ownership_from_abi) {}
        explicit Compressor(winrt::Windows::Storage::Streams::IOutputStream const& underlyingStream);
        Compressor(winrt::Windows::Storage::Streams::IOutputStream const& underlyingStream, winrt::Windows::Storage::Compression::CompressAlgorithm const& algorithm, uint32_t blockSize);
        Compressor(Compressor const&) noexcept = default;
        Compressor(Compressor&&) noexcept = default;
        Compressor& operator=(Compressor const&) & noexcept = default;
        Compressor& operator=(Compressor&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Decompressor : winrt::Windows::Storage::Compression::IDecompressor
    {
        Decompressor(std::nullptr_t) noexcept {}
        Decompressor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Storage::Compression::IDecompressor(ptr, take_ownership_from_abi) {}
        explicit Decompressor(winrt::Windows::Storage::Streams::IInputStream const& underlyingStream);
        Decompressor(Decompressor const&) noexcept = default;
        Decompressor(Decompressor&&) noexcept = default;
        Decompressor& operator=(Decompressor const&) & noexcept = default;
        Decompressor& operator=(Decompressor&&) & noexcept = default;
    };
}
#endif
