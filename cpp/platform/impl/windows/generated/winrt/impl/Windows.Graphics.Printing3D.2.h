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

#ifndef WINRT_Windows_Graphics_Printing3D_2_H
#define WINRT_Windows_Graphics_Printing3D_2_H
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Graphics.Printing3D.1.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing3D
{
    struct Print3DTaskSourceRequestedHandler : Windows::Foundation::IUnknown
    {
        Print3DTaskSourceRequestedHandler(std::nullptr_t = nullptr) noexcept {}
        Print3DTaskSourceRequestedHandler(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        Print3DTaskSourceRequestedHandler(Print3DTaskSourceRequestedHandler const&) noexcept = default;
        Print3DTaskSourceRequestedHandler(Print3DTaskSourceRequestedHandler&&) noexcept = default;
        Print3DTaskSourceRequestedHandler& operator=(Print3DTaskSourceRequestedHandler const&) & noexcept = default;
        Print3DTaskSourceRequestedHandler& operator=(Print3DTaskSourceRequestedHandler&&) & noexcept = default;
        template <typename L> Print3DTaskSourceRequestedHandler(L lambda);
        template <typename F> Print3DTaskSourceRequestedHandler(F* function);
        template <typename O, typename M> Print3DTaskSourceRequestedHandler(O* object, M method);
        template <typename O, typename M> Print3DTaskSourceRequestedHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> Print3DTaskSourceRequestedHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Graphics::Printing3D::Print3DTaskSourceRequestedArgs const& args) const;
    };
    struct Printing3DBufferDescription
    {
        winrt::Windows::Graphics::Printing3D::Printing3DBufferFormat Format;
        uint32_t Stride;
    };
    inline bool operator==(Printing3DBufferDescription const& left, Printing3DBufferDescription const& right) noexcept
    {
        return left.Format == right.Format && left.Stride == right.Stride;
    }
    inline bool operator!=(Printing3DBufferDescription const& left, Printing3DBufferDescription const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) Print3DManager : winrt::Windows::Graphics::Printing3D::IPrint3DManager
    {
        Print3DManager(std::nullptr_t) noexcept {}
        Print3DManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrint3DManager(ptr, take_ownership_from_abi) {}
        Print3DManager(Print3DManager const&) noexcept = default;
        Print3DManager(Print3DManager&&) noexcept = default;
        Print3DManager& operator=(Print3DManager const&) & noexcept = default;
        Print3DManager& operator=(Print3DManager&&) & noexcept = default;
        static auto GetForCurrentView();
        static auto ShowPrintUIAsync();
    };
    struct __declspec(empty_bases) Print3DTask : winrt::Windows::Graphics::Printing3D::IPrint3DTask
    {
        Print3DTask(std::nullptr_t) noexcept {}
        Print3DTask(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrint3DTask(ptr, take_ownership_from_abi) {}
        Print3DTask(Print3DTask const&) noexcept = default;
        Print3DTask(Print3DTask&&) noexcept = default;
        Print3DTask& operator=(Print3DTask const&) & noexcept = default;
        Print3DTask& operator=(Print3DTask&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Print3DTaskCompletedEventArgs : winrt::Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs
    {
        Print3DTaskCompletedEventArgs(std::nullptr_t) noexcept {}
        Print3DTaskCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrint3DTaskCompletedEventArgs(ptr, take_ownership_from_abi) {}
        Print3DTaskCompletedEventArgs(Print3DTaskCompletedEventArgs const&) noexcept = default;
        Print3DTaskCompletedEventArgs(Print3DTaskCompletedEventArgs&&) noexcept = default;
        Print3DTaskCompletedEventArgs& operator=(Print3DTaskCompletedEventArgs const&) & noexcept = default;
        Print3DTaskCompletedEventArgs& operator=(Print3DTaskCompletedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Print3DTaskRequest : winrt::Windows::Graphics::Printing3D::IPrint3DTaskRequest
    {
        Print3DTaskRequest(std::nullptr_t) noexcept {}
        Print3DTaskRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrint3DTaskRequest(ptr, take_ownership_from_abi) {}
        Print3DTaskRequest(Print3DTaskRequest const&) noexcept = default;
        Print3DTaskRequest(Print3DTaskRequest&&) noexcept = default;
        Print3DTaskRequest& operator=(Print3DTaskRequest const&) & noexcept = default;
        Print3DTaskRequest& operator=(Print3DTaskRequest&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Print3DTaskRequestedEventArgs : winrt::Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs
    {
        Print3DTaskRequestedEventArgs(std::nullptr_t) noexcept {}
        Print3DTaskRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrint3DTaskRequestedEventArgs(ptr, take_ownership_from_abi) {}
        Print3DTaskRequestedEventArgs(Print3DTaskRequestedEventArgs const&) noexcept = default;
        Print3DTaskRequestedEventArgs(Print3DTaskRequestedEventArgs&&) noexcept = default;
        Print3DTaskRequestedEventArgs& operator=(Print3DTaskRequestedEventArgs const&) & noexcept = default;
        Print3DTaskRequestedEventArgs& operator=(Print3DTaskRequestedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Print3DTaskSourceChangedEventArgs : winrt::Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs
    {
        Print3DTaskSourceChangedEventArgs(std::nullptr_t) noexcept {}
        Print3DTaskSourceChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrint3DTaskSourceChangedEventArgs(ptr, take_ownership_from_abi) {}
        Print3DTaskSourceChangedEventArgs(Print3DTaskSourceChangedEventArgs const&) noexcept = default;
        Print3DTaskSourceChangedEventArgs(Print3DTaskSourceChangedEventArgs&&) noexcept = default;
        Print3DTaskSourceChangedEventArgs& operator=(Print3DTaskSourceChangedEventArgs const&) & noexcept = default;
        Print3DTaskSourceChangedEventArgs& operator=(Print3DTaskSourceChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Print3DTaskSourceRequestedArgs : winrt::Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs
    {
        Print3DTaskSourceRequestedArgs(std::nullptr_t) noexcept {}
        Print3DTaskSourceRequestedArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrint3DTaskSourceRequestedArgs(ptr, take_ownership_from_abi) {}
        Print3DTaskSourceRequestedArgs(Print3DTaskSourceRequestedArgs const&) noexcept = default;
        Print3DTaskSourceRequestedArgs(Print3DTaskSourceRequestedArgs&&) noexcept = default;
        Print3DTaskSourceRequestedArgs& operator=(Print3DTaskSourceRequestedArgs const&) & noexcept = default;
        Print3DTaskSourceRequestedArgs& operator=(Print3DTaskSourceRequestedArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Printing3D3MFPackage : winrt::Windows::Graphics::Printing3D::IPrinting3D3MFPackage,
        impl::require<Printing3D3MFPackage, winrt::Windows::Graphics::Printing3D::IPrinting3D3MFPackage2>
    {
        Printing3D3MFPackage(std::nullptr_t) noexcept {}
        Printing3D3MFPackage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3D3MFPackage(ptr, take_ownership_from_abi) {}
        Printing3D3MFPackage();
        Printing3D3MFPackage(Printing3D3MFPackage const&) noexcept = default;
        Printing3D3MFPackage(Printing3D3MFPackage&&) noexcept = default;
        Printing3D3MFPackage& operator=(Printing3D3MFPackage const&) & noexcept = default;
        Printing3D3MFPackage& operator=(Printing3D3MFPackage&&) & noexcept = default;
        static auto LoadAsync(winrt::Windows::Storage::Streams::IRandomAccessStream const& value);
    };
    struct __declspec(empty_bases) Printing3DBaseMaterial : winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterial
    {
        Printing3DBaseMaterial(std::nullptr_t) noexcept {}
        Printing3DBaseMaterial(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterial(ptr, take_ownership_from_abi) {}
        Printing3DBaseMaterial();
        Printing3DBaseMaterial(Printing3DBaseMaterial const&) noexcept = default;
        Printing3DBaseMaterial(Printing3DBaseMaterial&&) noexcept = default;
        Printing3DBaseMaterial& operator=(Printing3DBaseMaterial const&) & noexcept = default;
        Printing3DBaseMaterial& operator=(Printing3DBaseMaterial&&) & noexcept = default;
        [[nodiscard]] static auto Abs();
        [[nodiscard]] static auto Pla();
    };
    struct __declspec(empty_bases) Printing3DBaseMaterialGroup : winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup
    {
        Printing3DBaseMaterialGroup(std::nullptr_t) noexcept {}
        Printing3DBaseMaterialGroup(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DBaseMaterialGroup(ptr, take_ownership_from_abi) {}
        explicit Printing3DBaseMaterialGroup(uint32_t MaterialGroupId);
        Printing3DBaseMaterialGroup(Printing3DBaseMaterialGroup const&) noexcept = default;
        Printing3DBaseMaterialGroup(Printing3DBaseMaterialGroup&&) noexcept = default;
        Printing3DBaseMaterialGroup& operator=(Printing3DBaseMaterialGroup const&) & noexcept = default;
        Printing3DBaseMaterialGroup& operator=(Printing3DBaseMaterialGroup&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Printing3DColorMaterial : winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterial,
        impl::require<Printing3DColorMaterial, winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterial2>
    {
        Printing3DColorMaterial(std::nullptr_t) noexcept {}
        Printing3DColorMaterial(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterial(ptr, take_ownership_from_abi) {}
        Printing3DColorMaterial();
        Printing3DColorMaterial(Printing3DColorMaterial const&) noexcept = default;
        Printing3DColorMaterial(Printing3DColorMaterial&&) noexcept = default;
        Printing3DColorMaterial& operator=(Printing3DColorMaterial const&) & noexcept = default;
        Printing3DColorMaterial& operator=(Printing3DColorMaterial&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Printing3DColorMaterialGroup : winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup
    {
        Printing3DColorMaterialGroup(std::nullptr_t) noexcept {}
        Printing3DColorMaterialGroup(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DColorMaterialGroup(ptr, take_ownership_from_abi) {}
        explicit Printing3DColorMaterialGroup(uint32_t MaterialGroupId);
        Printing3DColorMaterialGroup(Printing3DColorMaterialGroup const&) noexcept = default;
        Printing3DColorMaterialGroup(Printing3DColorMaterialGroup&&) noexcept = default;
        Printing3DColorMaterialGroup& operator=(Printing3DColorMaterialGroup const&) & noexcept = default;
        Printing3DColorMaterialGroup& operator=(Printing3DColorMaterialGroup&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Printing3DComponent : winrt::Windows::Graphics::Printing3D::IPrinting3DComponent
    {
        Printing3DComponent(std::nullptr_t) noexcept {}
        Printing3DComponent(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DComponent(ptr, take_ownership_from_abi) {}
        Printing3DComponent();
        Printing3DComponent(Printing3DComponent const&) noexcept = default;
        Printing3DComponent(Printing3DComponent&&) noexcept = default;
        Printing3DComponent& operator=(Printing3DComponent const&) & noexcept = default;
        Printing3DComponent& operator=(Printing3DComponent&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Printing3DComponentWithMatrix : winrt::Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix
    {
        Printing3DComponentWithMatrix(std::nullptr_t) noexcept {}
        Printing3DComponentWithMatrix(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DComponentWithMatrix(ptr, take_ownership_from_abi) {}
        Printing3DComponentWithMatrix();
        Printing3DComponentWithMatrix(Printing3DComponentWithMatrix const&) noexcept = default;
        Printing3DComponentWithMatrix(Printing3DComponentWithMatrix&&) noexcept = default;
        Printing3DComponentWithMatrix& operator=(Printing3DComponentWithMatrix const&) & noexcept = default;
        Printing3DComponentWithMatrix& operator=(Printing3DComponentWithMatrix&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Printing3DCompositeMaterial : winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial
    {
        Printing3DCompositeMaterial(std::nullptr_t) noexcept {}
        Printing3DCompositeMaterial(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterial(ptr, take_ownership_from_abi) {}
        Printing3DCompositeMaterial();
        Printing3DCompositeMaterial(Printing3DCompositeMaterial const&) noexcept = default;
        Printing3DCompositeMaterial(Printing3DCompositeMaterial&&) noexcept = default;
        Printing3DCompositeMaterial& operator=(Printing3DCompositeMaterial const&) & noexcept = default;
        Printing3DCompositeMaterial& operator=(Printing3DCompositeMaterial&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Printing3DCompositeMaterialGroup : winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup,
        impl::require<Printing3DCompositeMaterialGroup, winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup2>
    {
        Printing3DCompositeMaterialGroup(std::nullptr_t) noexcept {}
        Printing3DCompositeMaterialGroup(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DCompositeMaterialGroup(ptr, take_ownership_from_abi) {}
        explicit Printing3DCompositeMaterialGroup(uint32_t MaterialGroupId);
        Printing3DCompositeMaterialGroup(Printing3DCompositeMaterialGroup const&) noexcept = default;
        Printing3DCompositeMaterialGroup(Printing3DCompositeMaterialGroup&&) noexcept = default;
        Printing3DCompositeMaterialGroup& operator=(Printing3DCompositeMaterialGroup const&) & noexcept = default;
        Printing3DCompositeMaterialGroup& operator=(Printing3DCompositeMaterialGroup&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Printing3DFaceReductionOptions : winrt::Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions
    {
        Printing3DFaceReductionOptions(std::nullptr_t) noexcept {}
        Printing3DFaceReductionOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DFaceReductionOptions(ptr, take_ownership_from_abi) {}
        Printing3DFaceReductionOptions();
        Printing3DFaceReductionOptions(Printing3DFaceReductionOptions const&) noexcept = default;
        Printing3DFaceReductionOptions(Printing3DFaceReductionOptions&&) noexcept = default;
        Printing3DFaceReductionOptions& operator=(Printing3DFaceReductionOptions const&) & noexcept = default;
        Printing3DFaceReductionOptions& operator=(Printing3DFaceReductionOptions&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Printing3DMaterial : winrt::Windows::Graphics::Printing3D::IPrinting3DMaterial
    {
        Printing3DMaterial(std::nullptr_t) noexcept {}
        Printing3DMaterial(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DMaterial(ptr, take_ownership_from_abi) {}
        Printing3DMaterial();
        Printing3DMaterial(Printing3DMaterial const&) noexcept = default;
        Printing3DMaterial(Printing3DMaterial&&) noexcept = default;
        Printing3DMaterial& operator=(Printing3DMaterial const&) & noexcept = default;
        Printing3DMaterial& operator=(Printing3DMaterial&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Printing3DMesh : winrt::Windows::Graphics::Printing3D::IPrinting3DMesh
    {
        Printing3DMesh(std::nullptr_t) noexcept {}
        Printing3DMesh(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DMesh(ptr, take_ownership_from_abi) {}
        Printing3DMesh();
        Printing3DMesh(Printing3DMesh const&) noexcept = default;
        Printing3DMesh(Printing3DMesh&&) noexcept = default;
        Printing3DMesh& operator=(Printing3DMesh const&) & noexcept = default;
        Printing3DMesh& operator=(Printing3DMesh&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Printing3DMeshVerificationResult : winrt::Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult
    {
        Printing3DMeshVerificationResult(std::nullptr_t) noexcept {}
        Printing3DMeshVerificationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DMeshVerificationResult(ptr, take_ownership_from_abi) {}
        Printing3DMeshVerificationResult(Printing3DMeshVerificationResult const&) noexcept = default;
        Printing3DMeshVerificationResult(Printing3DMeshVerificationResult&&) noexcept = default;
        Printing3DMeshVerificationResult& operator=(Printing3DMeshVerificationResult const&) & noexcept = default;
        Printing3DMeshVerificationResult& operator=(Printing3DMeshVerificationResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Printing3DModel : winrt::Windows::Graphics::Printing3D::IPrinting3DModel,
        impl::require<Printing3DModel, winrt::Windows::Graphics::Printing3D::IPrinting3DModel2>
    {
        Printing3DModel(std::nullptr_t) noexcept {}
        Printing3DModel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DModel(ptr, take_ownership_from_abi) {}
        Printing3DModel();
        Printing3DModel(Printing3DModel const&) noexcept = default;
        Printing3DModel(Printing3DModel&&) noexcept = default;
        Printing3DModel& operator=(Printing3DModel const&) & noexcept = default;
        Printing3DModel& operator=(Printing3DModel&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Printing3DModelTexture : winrt::Windows::Graphics::Printing3D::IPrinting3DModelTexture
    {
        Printing3DModelTexture(std::nullptr_t) noexcept {}
        Printing3DModelTexture(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DModelTexture(ptr, take_ownership_from_abi) {}
        Printing3DModelTexture();
        Printing3DModelTexture(Printing3DModelTexture const&) noexcept = default;
        Printing3DModelTexture(Printing3DModelTexture&&) noexcept = default;
        Printing3DModelTexture& operator=(Printing3DModelTexture const&) & noexcept = default;
        Printing3DModelTexture& operator=(Printing3DModelTexture&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Printing3DMultiplePropertyMaterial : winrt::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial
    {
        Printing3DMultiplePropertyMaterial(std::nullptr_t) noexcept {}
        Printing3DMultiplePropertyMaterial(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterial(ptr, take_ownership_from_abi) {}
        Printing3DMultiplePropertyMaterial();
        Printing3DMultiplePropertyMaterial(Printing3DMultiplePropertyMaterial const&) noexcept = default;
        Printing3DMultiplePropertyMaterial(Printing3DMultiplePropertyMaterial&&) noexcept = default;
        Printing3DMultiplePropertyMaterial& operator=(Printing3DMultiplePropertyMaterial const&) & noexcept = default;
        Printing3DMultiplePropertyMaterial& operator=(Printing3DMultiplePropertyMaterial&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Printing3DMultiplePropertyMaterialGroup : winrt::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup
    {
        Printing3DMultiplePropertyMaterialGroup(std::nullptr_t) noexcept {}
        Printing3DMultiplePropertyMaterialGroup(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DMultiplePropertyMaterialGroup(ptr, take_ownership_from_abi) {}
        explicit Printing3DMultiplePropertyMaterialGroup(uint32_t MaterialGroupId);
        Printing3DMultiplePropertyMaterialGroup(Printing3DMultiplePropertyMaterialGroup const&) noexcept = default;
        Printing3DMultiplePropertyMaterialGroup(Printing3DMultiplePropertyMaterialGroup&&) noexcept = default;
        Printing3DMultiplePropertyMaterialGroup& operator=(Printing3DMultiplePropertyMaterialGroup const&) & noexcept = default;
        Printing3DMultiplePropertyMaterialGroup& operator=(Printing3DMultiplePropertyMaterialGroup&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Printing3DTexture2CoordMaterial : winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial
    {
        Printing3DTexture2CoordMaterial(std::nullptr_t) noexcept {}
        Printing3DTexture2CoordMaterial(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterial(ptr, take_ownership_from_abi) {}
        Printing3DTexture2CoordMaterial();
        Printing3DTexture2CoordMaterial(Printing3DTexture2CoordMaterial const&) noexcept = default;
        Printing3DTexture2CoordMaterial(Printing3DTexture2CoordMaterial&&) noexcept = default;
        Printing3DTexture2CoordMaterial& operator=(Printing3DTexture2CoordMaterial const&) & noexcept = default;
        Printing3DTexture2CoordMaterial& operator=(Printing3DTexture2CoordMaterial&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Printing3DTexture2CoordMaterialGroup : winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup,
        impl::require<Printing3DTexture2CoordMaterialGroup, winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup2>
    {
        Printing3DTexture2CoordMaterialGroup(std::nullptr_t) noexcept {}
        Printing3DTexture2CoordMaterialGroup(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DTexture2CoordMaterialGroup(ptr, take_ownership_from_abi) {}
        explicit Printing3DTexture2CoordMaterialGroup(uint32_t MaterialGroupId);
        Printing3DTexture2CoordMaterialGroup(Printing3DTexture2CoordMaterialGroup const&) noexcept = default;
        Printing3DTexture2CoordMaterialGroup(Printing3DTexture2CoordMaterialGroup&&) noexcept = default;
        Printing3DTexture2CoordMaterialGroup& operator=(Printing3DTexture2CoordMaterialGroup const&) & noexcept = default;
        Printing3DTexture2CoordMaterialGroup& operator=(Printing3DTexture2CoordMaterialGroup&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Printing3DTextureResource : winrt::Windows::Graphics::Printing3D::IPrinting3DTextureResource
    {
        Printing3DTextureResource(std::nullptr_t) noexcept {}
        Printing3DTextureResource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Graphics::Printing3D::IPrinting3DTextureResource(ptr, take_ownership_from_abi) {}
        Printing3DTextureResource();
        Printing3DTextureResource(Printing3DTextureResource const&) noexcept = default;
        Printing3DTextureResource(Printing3DTextureResource&&) noexcept = default;
        Printing3DTextureResource& operator=(Printing3DTextureResource const&) & noexcept = default;
        Printing3DTextureResource& operator=(Printing3DTextureResource&&) & noexcept = default;
    };
}
#endif
