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

#ifndef WINRT_Windows_UI_Xaml_Media_Media3D_2_H
#define WINRT_Windows_UI_Xaml_Media_Media3D_2_H
#include "winrt/impl/Windows.UI.Xaml.1.h"
#include "winrt/impl/Windows.UI.Xaml.Media.Media3D.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Media3D
{
    struct Matrix3D
    {
        double M11;
        double M12;
        double M13;
        double M14;
        double M21;
        double M22;
        double M23;
        double M24;
        double M31;
        double M32;
        double M33;
        double M34;
        double OffsetX;
        double OffsetY;
        double OffsetZ;
        double M44;
    };
    inline bool operator==(Matrix3D const& left, Matrix3D const& right) noexcept
    {
        return left.M11 == right.M11 && left.M12 == right.M12 && left.M13 == right.M13 && left.M14 == right.M14 && left.M21 == right.M21 && left.M22 == right.M22 && left.M23 == right.M23 && left.M24 == right.M24 && left.M31 == right.M31 && left.M32 == right.M32 && left.M33 == right.M33 && left.M34 == right.M34 && left.OffsetX == right.OffsetX && left.OffsetY == right.OffsetY && left.OffsetZ == right.OffsetZ && left.M44 == right.M44;
    }
    inline bool operator!=(Matrix3D const& left, Matrix3D const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) CompositeTransform3D : winrt::Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D,
        impl::base<CompositeTransform3D, winrt::Windows::UI::Xaml::Media::Media3D::Transform3D, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<CompositeTransform3D, winrt::Windows::UI::Xaml::Media::Media3D::ITransform3D, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        CompositeTransform3D(std::nullptr_t) noexcept {}
        CompositeTransform3D(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Media3D::ICompositeTransform3D(ptr, take_ownership_from_abi) {}
        CompositeTransform3D();
        CompositeTransform3D(CompositeTransform3D const&) noexcept = default;
        CompositeTransform3D(CompositeTransform3D&&) noexcept = default;
        CompositeTransform3D& operator=(CompositeTransform3D const&) & noexcept = default;
        CompositeTransform3D& operator=(CompositeTransform3D&&) & noexcept = default;
        [[nodiscard]] static auto CenterXProperty();
        [[nodiscard]] static auto CenterYProperty();
        [[nodiscard]] static auto CenterZProperty();
        [[nodiscard]] static auto RotationXProperty();
        [[nodiscard]] static auto RotationYProperty();
        [[nodiscard]] static auto RotationZProperty();
        [[nodiscard]] static auto ScaleXProperty();
        [[nodiscard]] static auto ScaleYProperty();
        [[nodiscard]] static auto ScaleZProperty();
        [[nodiscard]] static auto TranslateXProperty();
        [[nodiscard]] static auto TranslateYProperty();
        [[nodiscard]] static auto TranslateZProperty();
    };
    struct __declspec(empty_bases) Matrix3DHelper : winrt::Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper
    {
        Matrix3DHelper(std::nullptr_t) noexcept {}
        Matrix3DHelper(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Media3D::IMatrix3DHelper(ptr, take_ownership_from_abi) {}
        Matrix3DHelper(Matrix3DHelper const&) noexcept = default;
        Matrix3DHelper(Matrix3DHelper&&) noexcept = default;
        Matrix3DHelper& operator=(Matrix3DHelper const&) & noexcept = default;
        Matrix3DHelper& operator=(Matrix3DHelper&&) & noexcept = default;
        [[nodiscard]] static auto Identity();
        static auto Multiply(winrt::Windows::UI::Xaml::Media::Media3D::Matrix3D const& matrix1, winrt::Windows::UI::Xaml::Media::Media3D::Matrix3D const& matrix2);
        static auto FromElements(double m11, double m12, double m13, double m14, double m21, double m22, double m23, double m24, double m31, double m32, double m33, double m34, double offsetX, double offsetY, double offsetZ, double m44);
        static auto GetHasInverse(winrt::Windows::UI::Xaml::Media::Media3D::Matrix3D const& target);
        static auto GetIsIdentity(winrt::Windows::UI::Xaml::Media::Media3D::Matrix3D const& target);
        static auto Invert(winrt::Windows::UI::Xaml::Media::Media3D::Matrix3D const& target);
    };
    struct __declspec(empty_bases) PerspectiveTransform3D : winrt::Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D,
        impl::base<PerspectiveTransform3D, winrt::Windows::UI::Xaml::Media::Media3D::Transform3D, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<PerspectiveTransform3D, winrt::Windows::UI::Xaml::Media::Media3D::ITransform3D, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        PerspectiveTransform3D(std::nullptr_t) noexcept {}
        PerspectiveTransform3D(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Media3D::IPerspectiveTransform3D(ptr, take_ownership_from_abi) {}
        PerspectiveTransform3D();
        PerspectiveTransform3D(PerspectiveTransform3D const&) noexcept = default;
        PerspectiveTransform3D(PerspectiveTransform3D&&) noexcept = default;
        PerspectiveTransform3D& operator=(PerspectiveTransform3D const&) & noexcept = default;
        PerspectiveTransform3D& operator=(PerspectiveTransform3D&&) & noexcept = default;
        [[nodiscard]] static auto DepthProperty();
        [[nodiscard]] static auto OffsetXProperty();
        [[nodiscard]] static auto OffsetYProperty();
    };
    struct __declspec(empty_bases) Transform3D : winrt::Windows::UI::Xaml::Media::Media3D::ITransform3D,
        impl::base<Transform3D, winrt::Windows::UI::Xaml::DependencyObject>,
        impl::require<Transform3D, winrt::Windows::UI::Xaml::IDependencyObject, winrt::Windows::UI::Xaml::IDependencyObject2>
    {
        Transform3D(std::nullptr_t) noexcept {}
        Transform3D(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Xaml::Media::Media3D::ITransform3D(ptr, take_ownership_from_abi) {}
        Transform3D(Transform3D const&) noexcept = default;
        Transform3D(Transform3D&&) noexcept = default;
        Transform3D& operator=(Transform3D const&) & noexcept = default;
        Transform3D& operator=(Transform3D&&) & noexcept = default;
    };
}
#endif
