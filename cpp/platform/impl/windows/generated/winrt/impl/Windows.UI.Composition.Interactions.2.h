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

#ifndef WINRT_Windows_UI_Composition_Interactions_2_H
#define WINRT_Windows_UI_Composition_Interactions_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.UI.Composition.1.h"
#include "winrt/impl/Windows.UI.Composition.Interactions.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Composition::Interactions
{
    struct __declspec(empty_bases) CompositionConditionalValue : winrt::Windows::UI::Composition::Interactions::ICompositionConditionalValue,
        impl::base<CompositionConditionalValue, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionConditionalValue, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionConditionalValue(std::nullptr_t) noexcept {}
        CompositionConditionalValue(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::Interactions::ICompositionConditionalValue(ptr, take_ownership_from_abi) {}
        CompositionConditionalValue(CompositionConditionalValue const&) noexcept = default;
        CompositionConditionalValue(CompositionConditionalValue&&) noexcept = default;
        CompositionConditionalValue& operator=(CompositionConditionalValue const&) & noexcept = default;
        CompositionConditionalValue& operator=(CompositionConditionalValue&&) & noexcept = default;
        static auto Create(winrt::Windows::UI::Composition::Compositor const& compositor);
    };
    struct __declspec(empty_bases) CompositionInteractionSourceCollection : winrt::Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection,
        impl::base<CompositionInteractionSourceCollection, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<CompositionInteractionSourceCollection, winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Composition::Interactions::ICompositionInteractionSource>, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        CompositionInteractionSourceCollection(std::nullptr_t) noexcept {}
        CompositionInteractionSourceCollection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::Interactions::ICompositionInteractionSourceCollection(ptr, take_ownership_from_abi) {}
        CompositionInteractionSourceCollection(CompositionInteractionSourceCollection const&) noexcept = default;
        CompositionInteractionSourceCollection(CompositionInteractionSourceCollection&&) noexcept = default;
        CompositionInteractionSourceCollection& operator=(CompositionInteractionSourceCollection const&) & noexcept = default;
        CompositionInteractionSourceCollection& operator=(CompositionInteractionSourceCollection&&) & noexcept = default;
    };
    struct __declspec(empty_bases) InteractionSourceConfiguration : winrt::Windows::UI::Composition::Interactions::IInteractionSourceConfiguration,
        impl::base<InteractionSourceConfiguration, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<InteractionSourceConfiguration, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        InteractionSourceConfiguration(std::nullptr_t) noexcept {}
        InteractionSourceConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::Interactions::IInteractionSourceConfiguration(ptr, take_ownership_from_abi) {}
        InteractionSourceConfiguration(InteractionSourceConfiguration const&) noexcept = default;
        InteractionSourceConfiguration(InteractionSourceConfiguration&&) noexcept = default;
        InteractionSourceConfiguration& operator=(InteractionSourceConfiguration const&) & noexcept = default;
        InteractionSourceConfiguration& operator=(InteractionSourceConfiguration&&) & noexcept = default;
    };
    struct __declspec(empty_bases) InteractionTracker : winrt::Windows::UI::Composition::Interactions::IInteractionTracker,
        impl::base<InteractionTracker, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<InteractionTracker, winrt::Windows::UI::Composition::Interactions::IInteractionTracker2, winrt::Windows::UI::Composition::Interactions::IInteractionTracker3, winrt::Windows::UI::Composition::Interactions::IInteractionTracker4, winrt::Windows::UI::Composition::Interactions::IInteractionTracker5, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        InteractionTracker(std::nullptr_t) noexcept {}
        InteractionTracker(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::Interactions::IInteractionTracker(ptr, take_ownership_from_abi) {}
        InteractionTracker(InteractionTracker const&) noexcept = default;
        InteractionTracker(InteractionTracker&&) noexcept = default;
        InteractionTracker& operator=(InteractionTracker const&) & noexcept = default;
        InteractionTracker& operator=(InteractionTracker&&) & noexcept = default;
        using winrt::Windows::UI::Composition::Interactions::IInteractionTracker::TryUpdatePosition;
        using impl::consume_t<InteractionTracker, winrt::Windows::UI::Composition::Interactions::IInteractionTracker4>::TryUpdatePosition;
        using impl::consume_t<InteractionTracker, winrt::Windows::UI::Composition::Interactions::IInteractionTracker5>::TryUpdatePosition;
        using winrt::Windows::UI::Composition::Interactions::IInteractionTracker::TryUpdatePositionBy;
        using impl::consume_t<InteractionTracker, winrt::Windows::UI::Composition::Interactions::IInteractionTracker4>::TryUpdatePositionBy;
        static auto Create(winrt::Windows::UI::Composition::Compositor const& compositor);
        static auto CreateWithOwner(winrt::Windows::UI::Composition::Compositor const& compositor, winrt::Windows::UI::Composition::Interactions::IInteractionTrackerOwner const& owner);
        static auto SetBindingMode(winrt::Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker1, winrt::Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker2, winrt::Windows::UI::Composition::Interactions::InteractionBindingAxisModes const& axisMode);
        static auto GetBindingMode(winrt::Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker1, winrt::Windows::UI::Composition::Interactions::InteractionTracker const& boundTracker2);
    };
    struct __declspec(empty_bases) InteractionTrackerCustomAnimationStateEnteredArgs : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs,
        impl::require<InteractionTrackerCustomAnimationStateEnteredArgs, winrt::Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs2>
    {
        InteractionTrackerCustomAnimationStateEnteredArgs(std::nullptr_t) noexcept {}
        InteractionTrackerCustomAnimationStateEnteredArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerCustomAnimationStateEnteredArgs(ptr, take_ownership_from_abi) {}
        InteractionTrackerCustomAnimationStateEnteredArgs(InteractionTrackerCustomAnimationStateEnteredArgs const&) noexcept = default;
        InteractionTrackerCustomAnimationStateEnteredArgs(InteractionTrackerCustomAnimationStateEnteredArgs&&) noexcept = default;
        InteractionTrackerCustomAnimationStateEnteredArgs& operator=(InteractionTrackerCustomAnimationStateEnteredArgs const&) & noexcept = default;
        InteractionTrackerCustomAnimationStateEnteredArgs& operator=(InteractionTrackerCustomAnimationStateEnteredArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) InteractionTrackerIdleStateEnteredArgs : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs,
        impl::require<InteractionTrackerIdleStateEnteredArgs, winrt::Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs2>
    {
        InteractionTrackerIdleStateEnteredArgs(std::nullptr_t) noexcept {}
        InteractionTrackerIdleStateEnteredArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerIdleStateEnteredArgs(ptr, take_ownership_from_abi) {}
        InteractionTrackerIdleStateEnteredArgs(InteractionTrackerIdleStateEnteredArgs const&) noexcept = default;
        InteractionTrackerIdleStateEnteredArgs(InteractionTrackerIdleStateEnteredArgs&&) noexcept = default;
        InteractionTrackerIdleStateEnteredArgs& operator=(InteractionTrackerIdleStateEnteredArgs const&) & noexcept = default;
        InteractionTrackerIdleStateEnteredArgs& operator=(InteractionTrackerIdleStateEnteredArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) InteractionTrackerInertiaModifier : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier,
        impl::base<InteractionTrackerInertiaModifier, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<InteractionTrackerInertiaModifier, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        InteractionTrackerInertiaModifier(std::nullptr_t) noexcept {}
        InteractionTrackerInertiaModifier(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier(ptr, take_ownership_from_abi) {}
        InteractionTrackerInertiaModifier(InteractionTrackerInertiaModifier const&) noexcept = default;
        InteractionTrackerInertiaModifier(InteractionTrackerInertiaModifier&&) noexcept = default;
        InteractionTrackerInertiaModifier& operator=(InteractionTrackerInertiaModifier const&) & noexcept = default;
        InteractionTrackerInertiaModifier& operator=(InteractionTrackerInertiaModifier&&) & noexcept = default;
    };
    struct __declspec(empty_bases) InteractionTrackerInertiaMotion : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion,
        impl::base<InteractionTrackerInertiaMotion, winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<InteractionTrackerInertiaMotion, winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        InteractionTrackerInertiaMotion(std::nullptr_t) noexcept {}
        InteractionTrackerInertiaMotion(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaMotion(ptr, take_ownership_from_abi) {}
        InteractionTrackerInertiaMotion(InteractionTrackerInertiaMotion const&) noexcept = default;
        InteractionTrackerInertiaMotion(InteractionTrackerInertiaMotion&&) noexcept = default;
        InteractionTrackerInertiaMotion& operator=(InteractionTrackerInertiaMotion const&) & noexcept = default;
        InteractionTrackerInertiaMotion& operator=(InteractionTrackerInertiaMotion&&) & noexcept = default;
        static auto Create(winrt::Windows::UI::Composition::Compositor const& compositor);
    };
    struct __declspec(empty_bases) InteractionTrackerInertiaNaturalMotion : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion,
        impl::base<InteractionTrackerInertiaNaturalMotion, winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<InteractionTrackerInertiaNaturalMotion, winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        InteractionTrackerInertiaNaturalMotion(std::nullptr_t) noexcept {}
        InteractionTrackerInertiaNaturalMotion(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaNaturalMotion(ptr, take_ownership_from_abi) {}
        InteractionTrackerInertiaNaturalMotion(InteractionTrackerInertiaNaturalMotion const&) noexcept = default;
        InteractionTrackerInertiaNaturalMotion(InteractionTrackerInertiaNaturalMotion&&) noexcept = default;
        InteractionTrackerInertiaNaturalMotion& operator=(InteractionTrackerInertiaNaturalMotion const&) & noexcept = default;
        InteractionTrackerInertiaNaturalMotion& operator=(InteractionTrackerInertiaNaturalMotion&&) & noexcept = default;
        static auto Create(winrt::Windows::UI::Composition::Compositor const& compositor);
    };
    struct __declspec(empty_bases) InteractionTrackerInertiaRestingValue : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue,
        impl::base<InteractionTrackerInertiaRestingValue, winrt::Windows::UI::Composition::Interactions::InteractionTrackerInertiaModifier, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<InteractionTrackerInertiaRestingValue, winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaModifier, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        InteractionTrackerInertiaRestingValue(std::nullptr_t) noexcept {}
        InteractionTrackerInertiaRestingValue(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaRestingValue(ptr, take_ownership_from_abi) {}
        InteractionTrackerInertiaRestingValue(InteractionTrackerInertiaRestingValue const&) noexcept = default;
        InteractionTrackerInertiaRestingValue(InteractionTrackerInertiaRestingValue&&) noexcept = default;
        InteractionTrackerInertiaRestingValue& operator=(InteractionTrackerInertiaRestingValue const&) & noexcept = default;
        InteractionTrackerInertiaRestingValue& operator=(InteractionTrackerInertiaRestingValue&&) & noexcept = default;
        static auto Create(winrt::Windows::UI::Composition::Compositor const& compositor);
    };
    struct __declspec(empty_bases) InteractionTrackerInertiaStateEnteredArgs : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs,
        impl::require<InteractionTrackerInertiaStateEnteredArgs, winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs2, winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs3>
    {
        InteractionTrackerInertiaStateEnteredArgs(std::nullptr_t) noexcept {}
        InteractionTrackerInertiaStateEnteredArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInertiaStateEnteredArgs(ptr, take_ownership_from_abi) {}
        InteractionTrackerInertiaStateEnteredArgs(InteractionTrackerInertiaStateEnteredArgs const&) noexcept = default;
        InteractionTrackerInertiaStateEnteredArgs(InteractionTrackerInertiaStateEnteredArgs&&) noexcept = default;
        InteractionTrackerInertiaStateEnteredArgs& operator=(InteractionTrackerInertiaStateEnteredArgs const&) & noexcept = default;
        InteractionTrackerInertiaStateEnteredArgs& operator=(InteractionTrackerInertiaStateEnteredArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) InteractionTrackerInteractingStateEnteredArgs : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs,
        impl::require<InteractionTrackerInteractingStateEnteredArgs, winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs2>
    {
        InteractionTrackerInteractingStateEnteredArgs(std::nullptr_t) noexcept {}
        InteractionTrackerInteractingStateEnteredArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerInteractingStateEnteredArgs(ptr, take_ownership_from_abi) {}
        InteractionTrackerInteractingStateEnteredArgs(InteractionTrackerInteractingStateEnteredArgs const&) noexcept = default;
        InteractionTrackerInteractingStateEnteredArgs(InteractionTrackerInteractingStateEnteredArgs&&) noexcept = default;
        InteractionTrackerInteractingStateEnteredArgs& operator=(InteractionTrackerInteractingStateEnteredArgs const&) & noexcept = default;
        InteractionTrackerInteractingStateEnteredArgs& operator=(InteractionTrackerInteractingStateEnteredArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) InteractionTrackerRequestIgnoredArgs : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs
    {
        InteractionTrackerRequestIgnoredArgs(std::nullptr_t) noexcept {}
        InteractionTrackerRequestIgnoredArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerRequestIgnoredArgs(ptr, take_ownership_from_abi) {}
        InteractionTrackerRequestIgnoredArgs(InteractionTrackerRequestIgnoredArgs const&) noexcept = default;
        InteractionTrackerRequestIgnoredArgs(InteractionTrackerRequestIgnoredArgs&&) noexcept = default;
        InteractionTrackerRequestIgnoredArgs& operator=(InteractionTrackerRequestIgnoredArgs const&) & noexcept = default;
        InteractionTrackerRequestIgnoredArgs& operator=(InteractionTrackerRequestIgnoredArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) InteractionTrackerValuesChangedArgs : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs
    {
        InteractionTrackerValuesChangedArgs(std::nullptr_t) noexcept {}
        InteractionTrackerValuesChangedArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerValuesChangedArgs(ptr, take_ownership_from_abi) {}
        InteractionTrackerValuesChangedArgs(InteractionTrackerValuesChangedArgs const&) noexcept = default;
        InteractionTrackerValuesChangedArgs(InteractionTrackerValuesChangedArgs&&) noexcept = default;
        InteractionTrackerValuesChangedArgs& operator=(InteractionTrackerValuesChangedArgs const&) & noexcept = default;
        InteractionTrackerValuesChangedArgs& operator=(InteractionTrackerValuesChangedArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) InteractionTrackerVector2InertiaModifier : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier,
        impl::base<InteractionTrackerVector2InertiaModifier, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<InteractionTrackerVector2InertiaModifier, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        InteractionTrackerVector2InertiaModifier(std::nullptr_t) noexcept {}
        InteractionTrackerVector2InertiaModifier(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier(ptr, take_ownership_from_abi) {}
        InteractionTrackerVector2InertiaModifier(InteractionTrackerVector2InertiaModifier const&) noexcept = default;
        InteractionTrackerVector2InertiaModifier(InteractionTrackerVector2InertiaModifier&&) noexcept = default;
        InteractionTrackerVector2InertiaModifier& operator=(InteractionTrackerVector2InertiaModifier const&) & noexcept = default;
        InteractionTrackerVector2InertiaModifier& operator=(InteractionTrackerVector2InertiaModifier&&) & noexcept = default;
    };
    struct __declspec(empty_bases) InteractionTrackerVector2InertiaNaturalMotion : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion,
        impl::base<InteractionTrackerVector2InertiaNaturalMotion, winrt::Windows::UI::Composition::Interactions::InteractionTrackerVector2InertiaModifier, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<InteractionTrackerVector2InertiaNaturalMotion, winrt::Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaModifier, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        InteractionTrackerVector2InertiaNaturalMotion(std::nullptr_t) noexcept {}
        InteractionTrackerVector2InertiaNaturalMotion(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::Interactions::IInteractionTrackerVector2InertiaNaturalMotion(ptr, take_ownership_from_abi) {}
        InteractionTrackerVector2InertiaNaturalMotion(InteractionTrackerVector2InertiaNaturalMotion const&) noexcept = default;
        InteractionTrackerVector2InertiaNaturalMotion(InteractionTrackerVector2InertiaNaturalMotion&&) noexcept = default;
        InteractionTrackerVector2InertiaNaturalMotion& operator=(InteractionTrackerVector2InertiaNaturalMotion const&) & noexcept = default;
        InteractionTrackerVector2InertiaNaturalMotion& operator=(InteractionTrackerVector2InertiaNaturalMotion&&) & noexcept = default;
        static auto Create(winrt::Windows::UI::Composition::Compositor const& compositor);
    };
    struct __declspec(empty_bases) VisualInteractionSource : winrt::Windows::UI::Composition::Interactions::IVisualInteractionSource,
        impl::base<VisualInteractionSource, winrt::Windows::UI::Composition::CompositionObject>,
        impl::require<VisualInteractionSource, winrt::Windows::UI::Composition::Interactions::IVisualInteractionSource2, winrt::Windows::UI::Composition::Interactions::IVisualInteractionSource3, winrt::Windows::UI::Composition::Interactions::ICompositionInteractionSource, winrt::Windows::UI::Composition::ICompositionObject, winrt::Windows::UI::Composition::ICompositionObject2, winrt::Windows::UI::Composition::ICompositionObject3, winrt::Windows::UI::Composition::ICompositionObject4, winrt::Windows::Foundation::IClosable, winrt::Windows::UI::Composition::IAnimationObject>
    {
        VisualInteractionSource(std::nullptr_t) noexcept {}
        VisualInteractionSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Composition::Interactions::IVisualInteractionSource(ptr, take_ownership_from_abi) {}
        VisualInteractionSource(VisualInteractionSource const&) noexcept = default;
        VisualInteractionSource(VisualInteractionSource&&) noexcept = default;
        VisualInteractionSource& operator=(VisualInteractionSource const&) & noexcept = default;
        VisualInteractionSource& operator=(VisualInteractionSource&&) & noexcept = default;
        static auto Create(winrt::Windows::UI::Composition::Visual const& source);
        static auto CreateFromIVisualElement(winrt::Windows::UI::Composition::IVisualElement const& source);
    };
}
#endif
