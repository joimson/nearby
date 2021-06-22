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

#ifndef WINRT_Windows_Media_Audio_2_H
#define WINRT_Windows_Media_Audio_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Media.Capture.1.h"
#include "winrt/impl/Windows.Media.Devices.1.h"
#include "winrt/impl/Windows.Media.Effects.1.h"
#include "winrt/impl/Windows.Media.Render.1.h"
#include "winrt/impl/Windows.Media.Audio.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Audio
{
    struct __declspec(empty_bases) AudioDeviceInputNode : winrt::Windows::Media::Audio::IAudioDeviceInputNode,
        impl::require<AudioDeviceInputNode, winrt::Windows::Media::Audio::IAudioInputNode2>
    {
        AudioDeviceInputNode(std::nullptr_t) noexcept {}
        AudioDeviceInputNode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioDeviceInputNode(ptr, take_ownership_from_abi) {}
        AudioDeviceInputNode(AudioDeviceInputNode const&) noexcept = default;
        AudioDeviceInputNode(AudioDeviceInputNode&&) noexcept = default;
        AudioDeviceInputNode& operator=(AudioDeviceInputNode const&) & noexcept = default;
        AudioDeviceInputNode& operator=(AudioDeviceInputNode&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AudioDeviceOutputNode : winrt::Windows::Media::Audio::IAudioDeviceOutputNode,
        impl::require<AudioDeviceOutputNode, winrt::Windows::Media::Audio::IAudioNodeWithListener>
    {
        AudioDeviceOutputNode(std::nullptr_t) noexcept {}
        AudioDeviceOutputNode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioDeviceOutputNode(ptr, take_ownership_from_abi) {}
        AudioDeviceOutputNode(AudioDeviceOutputNode const&) noexcept = default;
        AudioDeviceOutputNode(AudioDeviceOutputNode&&) noexcept = default;
        AudioDeviceOutputNode& operator=(AudioDeviceOutputNode const&) & noexcept = default;
        AudioDeviceOutputNode& operator=(AudioDeviceOutputNode&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AudioFileInputNode : winrt::Windows::Media::Audio::IAudioFileInputNode,
        impl::require<AudioFileInputNode, winrt::Windows::Media::Audio::IAudioInputNode2>
    {
        AudioFileInputNode(std::nullptr_t) noexcept {}
        AudioFileInputNode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioFileInputNode(ptr, take_ownership_from_abi) {}
        AudioFileInputNode(AudioFileInputNode const&) noexcept = default;
        AudioFileInputNode(AudioFileInputNode&&) noexcept = default;
        AudioFileInputNode& operator=(AudioFileInputNode const&) & noexcept = default;
        AudioFileInputNode& operator=(AudioFileInputNode&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AudioFileOutputNode : winrt::Windows::Media::Audio::IAudioFileOutputNode
    {
        AudioFileOutputNode(std::nullptr_t) noexcept {}
        AudioFileOutputNode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioFileOutputNode(ptr, take_ownership_from_abi) {}
        AudioFileOutputNode(AudioFileOutputNode const&) noexcept = default;
        AudioFileOutputNode(AudioFileOutputNode&&) noexcept = default;
        AudioFileOutputNode& operator=(AudioFileOutputNode const&) & noexcept = default;
        AudioFileOutputNode& operator=(AudioFileOutputNode&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AudioFrameCompletedEventArgs : winrt::Windows::Media::Audio::IAudioFrameCompletedEventArgs
    {
        AudioFrameCompletedEventArgs(std::nullptr_t) noexcept {}
        AudioFrameCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioFrameCompletedEventArgs(ptr, take_ownership_from_abi) {}
        AudioFrameCompletedEventArgs(AudioFrameCompletedEventArgs const&) noexcept = default;
        AudioFrameCompletedEventArgs(AudioFrameCompletedEventArgs&&) noexcept = default;
        AudioFrameCompletedEventArgs& operator=(AudioFrameCompletedEventArgs const&) & noexcept = default;
        AudioFrameCompletedEventArgs& operator=(AudioFrameCompletedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AudioFrameInputNode : winrt::Windows::Media::Audio::IAudioFrameInputNode,
        impl::require<AudioFrameInputNode, winrt::Windows::Media::Audio::IAudioInputNode2>
    {
        AudioFrameInputNode(std::nullptr_t) noexcept {}
        AudioFrameInputNode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioFrameInputNode(ptr, take_ownership_from_abi) {}
        AudioFrameInputNode(AudioFrameInputNode const&) noexcept = default;
        AudioFrameInputNode(AudioFrameInputNode&&) noexcept = default;
        AudioFrameInputNode& operator=(AudioFrameInputNode const&) & noexcept = default;
        AudioFrameInputNode& operator=(AudioFrameInputNode&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AudioFrameOutputNode : winrt::Windows::Media::Audio::IAudioFrameOutputNode
    {
        AudioFrameOutputNode(std::nullptr_t) noexcept {}
        AudioFrameOutputNode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioFrameOutputNode(ptr, take_ownership_from_abi) {}
        AudioFrameOutputNode(AudioFrameOutputNode const&) noexcept = default;
        AudioFrameOutputNode(AudioFrameOutputNode&&) noexcept = default;
        AudioFrameOutputNode& operator=(AudioFrameOutputNode const&) & noexcept = default;
        AudioFrameOutputNode& operator=(AudioFrameOutputNode&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AudioGraph : winrt::Windows::Media::Audio::IAudioGraph,
        impl::require<AudioGraph, winrt::Windows::Media::Audio::IAudioGraph2, winrt::Windows::Media::Audio::IAudioGraph3>
    {
        AudioGraph(std::nullptr_t) noexcept {}
        AudioGraph(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioGraph(ptr, take_ownership_from_abi) {}
        AudioGraph(AudioGraph const&) noexcept = default;
        AudioGraph(AudioGraph&&) noexcept = default;
        AudioGraph& operator=(AudioGraph const&) & noexcept = default;
        AudioGraph& operator=(AudioGraph&&) & noexcept = default;
        using winrt::Windows::Media::Audio::IAudioGraph::CreateDeviceInputNodeAsync;
        using impl::consume_t<AudioGraph, winrt::Windows::Media::Audio::IAudioGraph2>::CreateDeviceInputNodeAsync;
        using winrt::Windows::Media::Audio::IAudioGraph::CreateFileInputNodeAsync;
        using impl::consume_t<AudioGraph, winrt::Windows::Media::Audio::IAudioGraph2>::CreateFileInputNodeAsync;
        using winrt::Windows::Media::Audio::IAudioGraph::CreateFrameInputNode;
        using impl::consume_t<AudioGraph, winrt::Windows::Media::Audio::IAudioGraph2>::CreateFrameInputNode;
        using winrt::Windows::Media::Audio::IAudioGraph::CreateSubmixNode;
        using impl::consume_t<AudioGraph, winrt::Windows::Media::Audio::IAudioGraph2>::CreateSubmixNode;
        static auto CreateAsync(winrt::Windows::Media::Audio::AudioGraphSettings const& settings);
    };
    struct __declspec(empty_bases) AudioGraphBatchUpdater : winrt::Windows::Foundation::IClosable
    {
        AudioGraphBatchUpdater(std::nullptr_t) noexcept {}
        AudioGraphBatchUpdater(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IClosable(ptr, take_ownership_from_abi) {}
        AudioGraphBatchUpdater(AudioGraphBatchUpdater const&) noexcept = default;
        AudioGraphBatchUpdater(AudioGraphBatchUpdater&&) noexcept = default;
        AudioGraphBatchUpdater& operator=(AudioGraphBatchUpdater const&) & noexcept = default;
        AudioGraphBatchUpdater& operator=(AudioGraphBatchUpdater&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AudioGraphConnection : winrt::Windows::Media::Audio::IAudioGraphConnection
    {
        AudioGraphConnection(std::nullptr_t) noexcept {}
        AudioGraphConnection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioGraphConnection(ptr, take_ownership_from_abi) {}
        AudioGraphConnection(AudioGraphConnection const&) noexcept = default;
        AudioGraphConnection(AudioGraphConnection&&) noexcept = default;
        AudioGraphConnection& operator=(AudioGraphConnection const&) & noexcept = default;
        AudioGraphConnection& operator=(AudioGraphConnection&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AudioGraphSettings : winrt::Windows::Media::Audio::IAudioGraphSettings,
        impl::require<AudioGraphSettings, winrt::Windows::Media::Audio::IAudioGraphSettings2>
    {
        AudioGraphSettings(std::nullptr_t) noexcept {}
        AudioGraphSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioGraphSettings(ptr, take_ownership_from_abi) {}
        explicit AudioGraphSettings(winrt::Windows::Media::Render::AudioRenderCategory const& audioRenderCategory);
        AudioGraphSettings(AudioGraphSettings const&) noexcept = default;
        AudioGraphSettings(AudioGraphSettings&&) noexcept = default;
        AudioGraphSettings& operator=(AudioGraphSettings const&) & noexcept = default;
        AudioGraphSettings& operator=(AudioGraphSettings&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AudioGraphUnrecoverableErrorOccurredEventArgs : winrt::Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs
    {
        AudioGraphUnrecoverableErrorOccurredEventArgs(std::nullptr_t) noexcept {}
        AudioGraphUnrecoverableErrorOccurredEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioGraphUnrecoverableErrorOccurredEventArgs(ptr, take_ownership_from_abi) {}
        AudioGraphUnrecoverableErrorOccurredEventArgs(AudioGraphUnrecoverableErrorOccurredEventArgs const&) noexcept = default;
        AudioGraphUnrecoverableErrorOccurredEventArgs(AudioGraphUnrecoverableErrorOccurredEventArgs&&) noexcept = default;
        AudioGraphUnrecoverableErrorOccurredEventArgs& operator=(AudioGraphUnrecoverableErrorOccurredEventArgs const&) & noexcept = default;
        AudioGraphUnrecoverableErrorOccurredEventArgs& operator=(AudioGraphUnrecoverableErrorOccurredEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AudioNodeEmitter : winrt::Windows::Media::Audio::IAudioNodeEmitter,
        impl::require<AudioNodeEmitter, winrt::Windows::Media::Audio::IAudioNodeEmitter2>
    {
        AudioNodeEmitter(std::nullptr_t) noexcept {}
        AudioNodeEmitter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioNodeEmitter(ptr, take_ownership_from_abi) {}
        AudioNodeEmitter();
        AudioNodeEmitter(winrt::Windows::Media::Audio::AudioNodeEmitterShape const& shape, winrt::Windows::Media::Audio::AudioNodeEmitterDecayModel const& decayModel, winrt::Windows::Media::Audio::AudioNodeEmitterSettings const& settings);
        AudioNodeEmitter(AudioNodeEmitter const&) noexcept = default;
        AudioNodeEmitter(AudioNodeEmitter&&) noexcept = default;
        AudioNodeEmitter& operator=(AudioNodeEmitter const&) & noexcept = default;
        AudioNodeEmitter& operator=(AudioNodeEmitter&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AudioNodeEmitterConeProperties : winrt::Windows::Media::Audio::IAudioNodeEmitterConeProperties
    {
        AudioNodeEmitterConeProperties(std::nullptr_t) noexcept {}
        AudioNodeEmitterConeProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioNodeEmitterConeProperties(ptr, take_ownership_from_abi) {}
        AudioNodeEmitterConeProperties(AudioNodeEmitterConeProperties const&) noexcept = default;
        AudioNodeEmitterConeProperties(AudioNodeEmitterConeProperties&&) noexcept = default;
        AudioNodeEmitterConeProperties& operator=(AudioNodeEmitterConeProperties const&) & noexcept = default;
        AudioNodeEmitterConeProperties& operator=(AudioNodeEmitterConeProperties&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AudioNodeEmitterDecayModel : winrt::Windows::Media::Audio::IAudioNodeEmitterDecayModel
    {
        AudioNodeEmitterDecayModel(std::nullptr_t) noexcept {}
        AudioNodeEmitterDecayModel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioNodeEmitterDecayModel(ptr, take_ownership_from_abi) {}
        AudioNodeEmitterDecayModel(AudioNodeEmitterDecayModel const&) noexcept = default;
        AudioNodeEmitterDecayModel(AudioNodeEmitterDecayModel&&) noexcept = default;
        AudioNodeEmitterDecayModel& operator=(AudioNodeEmitterDecayModel const&) & noexcept = default;
        AudioNodeEmitterDecayModel& operator=(AudioNodeEmitterDecayModel&&) & noexcept = default;
        static auto CreateNatural(double minGain, double maxGain, double unityGainDistance, double cutoffDistance);
        static auto CreateCustom(double minGain, double maxGain);
    };
    struct __declspec(empty_bases) AudioNodeEmitterNaturalDecayModelProperties : winrt::Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties
    {
        AudioNodeEmitterNaturalDecayModelProperties(std::nullptr_t) noexcept {}
        AudioNodeEmitterNaturalDecayModelProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioNodeEmitterNaturalDecayModelProperties(ptr, take_ownership_from_abi) {}
        AudioNodeEmitterNaturalDecayModelProperties(AudioNodeEmitterNaturalDecayModelProperties const&) noexcept = default;
        AudioNodeEmitterNaturalDecayModelProperties(AudioNodeEmitterNaturalDecayModelProperties&&) noexcept = default;
        AudioNodeEmitterNaturalDecayModelProperties& operator=(AudioNodeEmitterNaturalDecayModelProperties const&) & noexcept = default;
        AudioNodeEmitterNaturalDecayModelProperties& operator=(AudioNodeEmitterNaturalDecayModelProperties&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AudioNodeEmitterShape : winrt::Windows::Media::Audio::IAudioNodeEmitterShape
    {
        AudioNodeEmitterShape(std::nullptr_t) noexcept {}
        AudioNodeEmitterShape(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioNodeEmitterShape(ptr, take_ownership_from_abi) {}
        AudioNodeEmitterShape(AudioNodeEmitterShape const&) noexcept = default;
        AudioNodeEmitterShape(AudioNodeEmitterShape&&) noexcept = default;
        AudioNodeEmitterShape& operator=(AudioNodeEmitterShape const&) & noexcept = default;
        AudioNodeEmitterShape& operator=(AudioNodeEmitterShape&&) & noexcept = default;
        static auto CreateCone(double innerAngle, double outerAngle, double outerAngleGain);
        static auto CreateOmnidirectional();
    };
    struct __declspec(empty_bases) AudioNodeListener : winrt::Windows::Media::Audio::IAudioNodeListener
    {
        AudioNodeListener(std::nullptr_t) noexcept {}
        AudioNodeListener(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioNodeListener(ptr, take_ownership_from_abi) {}
        AudioNodeListener();
        AudioNodeListener(AudioNodeListener const&) noexcept = default;
        AudioNodeListener(AudioNodeListener&&) noexcept = default;
        AudioNodeListener& operator=(AudioNodeListener const&) & noexcept = default;
        AudioNodeListener& operator=(AudioNodeListener&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AudioPlaybackConnection : winrt::Windows::Media::Audio::IAudioPlaybackConnection,
        impl::require<AudioPlaybackConnection, winrt::Windows::Foundation::IClosable>
    {
        AudioPlaybackConnection(std::nullptr_t) noexcept {}
        AudioPlaybackConnection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioPlaybackConnection(ptr, take_ownership_from_abi) {}
        AudioPlaybackConnection(AudioPlaybackConnection const&) noexcept = default;
        AudioPlaybackConnection(AudioPlaybackConnection&&) noexcept = default;
        AudioPlaybackConnection& operator=(AudioPlaybackConnection const&) & noexcept = default;
        AudioPlaybackConnection& operator=(AudioPlaybackConnection&&) & noexcept = default;
        static auto GetDeviceSelector();
        static auto TryCreateFromId(param::hstring const& id);
    };
    struct __declspec(empty_bases) AudioPlaybackConnectionOpenResult : winrt::Windows::Media::Audio::IAudioPlaybackConnectionOpenResult
    {
        AudioPlaybackConnectionOpenResult(std::nullptr_t) noexcept {}
        AudioPlaybackConnectionOpenResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioPlaybackConnectionOpenResult(ptr, take_ownership_from_abi) {}
        AudioPlaybackConnectionOpenResult(AudioPlaybackConnectionOpenResult const&) noexcept = default;
        AudioPlaybackConnectionOpenResult(AudioPlaybackConnectionOpenResult&&) noexcept = default;
        AudioPlaybackConnectionOpenResult& operator=(AudioPlaybackConnectionOpenResult const&) & noexcept = default;
        AudioPlaybackConnectionOpenResult& operator=(AudioPlaybackConnectionOpenResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) AudioStateMonitor : winrt::Windows::Media::Audio::IAudioStateMonitor
    {
        AudioStateMonitor(std::nullptr_t) noexcept {}
        AudioStateMonitor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioStateMonitor(ptr, take_ownership_from_abi) {}
        AudioStateMonitor(AudioStateMonitor const&) noexcept = default;
        AudioStateMonitor(AudioStateMonitor&&) noexcept = default;
        AudioStateMonitor& operator=(AudioStateMonitor const&) & noexcept = default;
        AudioStateMonitor& operator=(AudioStateMonitor&&) & noexcept = default;
        static auto CreateForRenderMonitoring();
        static auto CreateForRenderMonitoring(winrt::Windows::Media::Render::AudioRenderCategory const& category);
        static auto CreateForRenderMonitoring(winrt::Windows::Media::Render::AudioRenderCategory const& category, winrt::Windows::Media::Devices::AudioDeviceRole const& role);
        static auto CreateForRenderMonitoringWithCategoryAndDeviceId(winrt::Windows::Media::Render::AudioRenderCategory const& category, param::hstring const& deviceId);
        static auto CreateForCaptureMonitoring();
        static auto CreateForCaptureMonitoring(winrt::Windows::Media::Capture::MediaCategory const& category);
        static auto CreateForCaptureMonitoring(winrt::Windows::Media::Capture::MediaCategory const& category, winrt::Windows::Media::Devices::AudioDeviceRole const& role);
        static auto CreateForCaptureMonitoringWithCategoryAndDeviceId(winrt::Windows::Media::Capture::MediaCategory const& category, param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) AudioSubmixNode : winrt::Windows::Media::Audio::IAudioInputNode,
        impl::require<AudioSubmixNode, winrt::Windows::Media::Audio::IAudioInputNode2>
    {
        AudioSubmixNode(std::nullptr_t) noexcept {}
        AudioSubmixNode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IAudioInputNode(ptr, take_ownership_from_abi) {}
        AudioSubmixNode(AudioSubmixNode const&) noexcept = default;
        AudioSubmixNode(AudioSubmixNode&&) noexcept = default;
        AudioSubmixNode& operator=(AudioSubmixNode const&) & noexcept = default;
        AudioSubmixNode& operator=(AudioSubmixNode&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CreateAudioDeviceInputNodeResult : winrt::Windows::Media::Audio::ICreateAudioDeviceInputNodeResult,
        impl::require<CreateAudioDeviceInputNodeResult, winrt::Windows::Media::Audio::ICreateAudioDeviceInputNodeResult2>
    {
        CreateAudioDeviceInputNodeResult(std::nullptr_t) noexcept {}
        CreateAudioDeviceInputNodeResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::ICreateAudioDeviceInputNodeResult(ptr, take_ownership_from_abi) {}
        CreateAudioDeviceInputNodeResult(CreateAudioDeviceInputNodeResult const&) noexcept = default;
        CreateAudioDeviceInputNodeResult(CreateAudioDeviceInputNodeResult&&) noexcept = default;
        CreateAudioDeviceInputNodeResult& operator=(CreateAudioDeviceInputNodeResult const&) & noexcept = default;
        CreateAudioDeviceInputNodeResult& operator=(CreateAudioDeviceInputNodeResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CreateAudioDeviceOutputNodeResult : winrt::Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult,
        impl::require<CreateAudioDeviceOutputNodeResult, winrt::Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult2>
    {
        CreateAudioDeviceOutputNodeResult(std::nullptr_t) noexcept {}
        CreateAudioDeviceOutputNodeResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::ICreateAudioDeviceOutputNodeResult(ptr, take_ownership_from_abi) {}
        CreateAudioDeviceOutputNodeResult(CreateAudioDeviceOutputNodeResult const&) noexcept = default;
        CreateAudioDeviceOutputNodeResult(CreateAudioDeviceOutputNodeResult&&) noexcept = default;
        CreateAudioDeviceOutputNodeResult& operator=(CreateAudioDeviceOutputNodeResult const&) & noexcept = default;
        CreateAudioDeviceOutputNodeResult& operator=(CreateAudioDeviceOutputNodeResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CreateAudioFileInputNodeResult : winrt::Windows::Media::Audio::ICreateAudioFileInputNodeResult,
        impl::require<CreateAudioFileInputNodeResult, winrt::Windows::Media::Audio::ICreateAudioFileInputNodeResult2>
    {
        CreateAudioFileInputNodeResult(std::nullptr_t) noexcept {}
        CreateAudioFileInputNodeResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::ICreateAudioFileInputNodeResult(ptr, take_ownership_from_abi) {}
        CreateAudioFileInputNodeResult(CreateAudioFileInputNodeResult const&) noexcept = default;
        CreateAudioFileInputNodeResult(CreateAudioFileInputNodeResult&&) noexcept = default;
        CreateAudioFileInputNodeResult& operator=(CreateAudioFileInputNodeResult const&) & noexcept = default;
        CreateAudioFileInputNodeResult& operator=(CreateAudioFileInputNodeResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CreateAudioFileOutputNodeResult : winrt::Windows::Media::Audio::ICreateAudioFileOutputNodeResult,
        impl::require<CreateAudioFileOutputNodeResult, winrt::Windows::Media::Audio::ICreateAudioFileOutputNodeResult2>
    {
        CreateAudioFileOutputNodeResult(std::nullptr_t) noexcept {}
        CreateAudioFileOutputNodeResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::ICreateAudioFileOutputNodeResult(ptr, take_ownership_from_abi) {}
        CreateAudioFileOutputNodeResult(CreateAudioFileOutputNodeResult const&) noexcept = default;
        CreateAudioFileOutputNodeResult(CreateAudioFileOutputNodeResult&&) noexcept = default;
        CreateAudioFileOutputNodeResult& operator=(CreateAudioFileOutputNodeResult const&) & noexcept = default;
        CreateAudioFileOutputNodeResult& operator=(CreateAudioFileOutputNodeResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CreateAudioGraphResult : winrt::Windows::Media::Audio::ICreateAudioGraphResult,
        impl::require<CreateAudioGraphResult, winrt::Windows::Media::Audio::ICreateAudioGraphResult2>
    {
        CreateAudioGraphResult(std::nullptr_t) noexcept {}
        CreateAudioGraphResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::ICreateAudioGraphResult(ptr, take_ownership_from_abi) {}
        CreateAudioGraphResult(CreateAudioGraphResult const&) noexcept = default;
        CreateAudioGraphResult(CreateAudioGraphResult&&) noexcept = default;
        CreateAudioGraphResult& operator=(CreateAudioGraphResult const&) & noexcept = default;
        CreateAudioGraphResult& operator=(CreateAudioGraphResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CreateMediaSourceAudioInputNodeResult : winrt::Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult,
        impl::require<CreateMediaSourceAudioInputNodeResult, winrt::Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult2>
    {
        CreateMediaSourceAudioInputNodeResult(std::nullptr_t) noexcept {}
        CreateMediaSourceAudioInputNodeResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::ICreateMediaSourceAudioInputNodeResult(ptr, take_ownership_from_abi) {}
        CreateMediaSourceAudioInputNodeResult(CreateMediaSourceAudioInputNodeResult const&) noexcept = default;
        CreateMediaSourceAudioInputNodeResult(CreateMediaSourceAudioInputNodeResult&&) noexcept = default;
        CreateMediaSourceAudioInputNodeResult& operator=(CreateMediaSourceAudioInputNodeResult const&) & noexcept = default;
        CreateMediaSourceAudioInputNodeResult& operator=(CreateMediaSourceAudioInputNodeResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) EchoEffectDefinition : winrt::Windows::Media::Audio::IEchoEffectDefinition
    {
        EchoEffectDefinition(std::nullptr_t) noexcept {}
        EchoEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IEchoEffectDefinition(ptr, take_ownership_from_abi) {}
        explicit EchoEffectDefinition(winrt::Windows::Media::Audio::AudioGraph const& audioGraph);
        EchoEffectDefinition(EchoEffectDefinition const&) noexcept = default;
        EchoEffectDefinition(EchoEffectDefinition&&) noexcept = default;
        EchoEffectDefinition& operator=(EchoEffectDefinition const&) & noexcept = default;
        EchoEffectDefinition& operator=(EchoEffectDefinition&&) & noexcept = default;
    };
    struct __declspec(empty_bases) EqualizerBand : winrt::Windows::Media::Audio::IEqualizerBand
    {
        EqualizerBand(std::nullptr_t) noexcept {}
        EqualizerBand(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IEqualizerBand(ptr, take_ownership_from_abi) {}
        EqualizerBand(EqualizerBand const&) noexcept = default;
        EqualizerBand(EqualizerBand&&) noexcept = default;
        EqualizerBand& operator=(EqualizerBand const&) & noexcept = default;
        EqualizerBand& operator=(EqualizerBand&&) & noexcept = default;
    };
    struct __declspec(empty_bases) EqualizerEffectDefinition : winrt::Windows::Media::Audio::IEqualizerEffectDefinition
    {
        EqualizerEffectDefinition(std::nullptr_t) noexcept {}
        EqualizerEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IEqualizerEffectDefinition(ptr, take_ownership_from_abi) {}
        explicit EqualizerEffectDefinition(winrt::Windows::Media::Audio::AudioGraph const& audioGraph);
        EqualizerEffectDefinition(EqualizerEffectDefinition const&) noexcept = default;
        EqualizerEffectDefinition(EqualizerEffectDefinition&&) noexcept = default;
        EqualizerEffectDefinition& operator=(EqualizerEffectDefinition const&) & noexcept = default;
        EqualizerEffectDefinition& operator=(EqualizerEffectDefinition&&) & noexcept = default;
    };
    struct __declspec(empty_bases) FrameInputNodeQuantumStartedEventArgs : winrt::Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs
    {
        FrameInputNodeQuantumStartedEventArgs(std::nullptr_t) noexcept {}
        FrameInputNodeQuantumStartedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IFrameInputNodeQuantumStartedEventArgs(ptr, take_ownership_from_abi) {}
        FrameInputNodeQuantumStartedEventArgs(FrameInputNodeQuantumStartedEventArgs const&) noexcept = default;
        FrameInputNodeQuantumStartedEventArgs(FrameInputNodeQuantumStartedEventArgs&&) noexcept = default;
        FrameInputNodeQuantumStartedEventArgs& operator=(FrameInputNodeQuantumStartedEventArgs const&) & noexcept = default;
        FrameInputNodeQuantumStartedEventArgs& operator=(FrameInputNodeQuantumStartedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) LimiterEffectDefinition : winrt::Windows::Media::Audio::ILimiterEffectDefinition
    {
        LimiterEffectDefinition(std::nullptr_t) noexcept {}
        LimiterEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::ILimiterEffectDefinition(ptr, take_ownership_from_abi) {}
        explicit LimiterEffectDefinition(winrt::Windows::Media::Audio::AudioGraph const& audioGraph);
        LimiterEffectDefinition(LimiterEffectDefinition const&) noexcept = default;
        LimiterEffectDefinition(LimiterEffectDefinition&&) noexcept = default;
        LimiterEffectDefinition& operator=(LimiterEffectDefinition const&) & noexcept = default;
        LimiterEffectDefinition& operator=(LimiterEffectDefinition&&) & noexcept = default;
    };
    struct __declspec(empty_bases) MediaSourceAudioInputNode : winrt::Windows::Media::Audio::IMediaSourceAudioInputNode
    {
        MediaSourceAudioInputNode(std::nullptr_t) noexcept {}
        MediaSourceAudioInputNode(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IMediaSourceAudioInputNode(ptr, take_ownership_from_abi) {}
        MediaSourceAudioInputNode(MediaSourceAudioInputNode const&) noexcept = default;
        MediaSourceAudioInputNode(MediaSourceAudioInputNode&&) noexcept = default;
        MediaSourceAudioInputNode& operator=(MediaSourceAudioInputNode const&) & noexcept = default;
        MediaSourceAudioInputNode& operator=(MediaSourceAudioInputNode&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ReverbEffectDefinition : winrt::Windows::Media::Audio::IReverbEffectDefinition
    {
        ReverbEffectDefinition(std::nullptr_t) noexcept {}
        ReverbEffectDefinition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::IReverbEffectDefinition(ptr, take_ownership_from_abi) {}
        explicit ReverbEffectDefinition(winrt::Windows::Media::Audio::AudioGraph const& audioGraph);
        ReverbEffectDefinition(ReverbEffectDefinition const&) noexcept = default;
        ReverbEffectDefinition(ReverbEffectDefinition&&) noexcept = default;
        ReverbEffectDefinition& operator=(ReverbEffectDefinition const&) & noexcept = default;
        ReverbEffectDefinition& operator=(ReverbEffectDefinition&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SetDefaultSpatialAudioFormatResult : winrt::Windows::Media::Audio::ISetDefaultSpatialAudioFormatResult
    {
        SetDefaultSpatialAudioFormatResult(std::nullptr_t) noexcept {}
        SetDefaultSpatialAudioFormatResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::ISetDefaultSpatialAudioFormatResult(ptr, take_ownership_from_abi) {}
        SetDefaultSpatialAudioFormatResult(SetDefaultSpatialAudioFormatResult const&) noexcept = default;
        SetDefaultSpatialAudioFormatResult(SetDefaultSpatialAudioFormatResult&&) noexcept = default;
        SetDefaultSpatialAudioFormatResult& operator=(SetDefaultSpatialAudioFormatResult const&) & noexcept = default;
        SetDefaultSpatialAudioFormatResult& operator=(SetDefaultSpatialAudioFormatResult&&) & noexcept = default;
    };
    struct __declspec(empty_bases) SpatialAudioDeviceConfiguration : winrt::Windows::Media::Audio::ISpatialAudioDeviceConfiguration
    {
        SpatialAudioDeviceConfiguration(std::nullptr_t) noexcept {}
        SpatialAudioDeviceConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::ISpatialAudioDeviceConfiguration(ptr, take_ownership_from_abi) {}
        SpatialAudioDeviceConfiguration(SpatialAudioDeviceConfiguration const&) noexcept = default;
        SpatialAudioDeviceConfiguration(SpatialAudioDeviceConfiguration&&) noexcept = default;
        SpatialAudioDeviceConfiguration& operator=(SpatialAudioDeviceConfiguration const&) & noexcept = default;
        SpatialAudioDeviceConfiguration& operator=(SpatialAudioDeviceConfiguration&&) & noexcept = default;
        static auto GetForDeviceId(param::hstring const& deviceId);
    };
    struct __declspec(empty_bases) SpatialAudioFormatConfiguration : winrt::Windows::Media::Audio::ISpatialAudioFormatConfiguration
    {
        SpatialAudioFormatConfiguration(std::nullptr_t) noexcept {}
        SpatialAudioFormatConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Audio::ISpatialAudioFormatConfiguration(ptr, take_ownership_from_abi) {}
        SpatialAudioFormatConfiguration(SpatialAudioFormatConfiguration const&) noexcept = default;
        SpatialAudioFormatConfiguration(SpatialAudioFormatConfiguration&&) noexcept = default;
        SpatialAudioFormatConfiguration& operator=(SpatialAudioFormatConfiguration const&) & noexcept = default;
        SpatialAudioFormatConfiguration& operator=(SpatialAudioFormatConfiguration&&) & noexcept = default;
        static auto GetDefault();
    };
    struct SpatialAudioFormatSubtype
    {
        SpatialAudioFormatSubtype() = delete;
        [[nodiscard]] static auto WindowsSonic();
        [[nodiscard]] static auto DolbyAtmosForHeadphones();
        [[nodiscard]] static auto DolbyAtmosForHomeTheater();
        [[nodiscard]] static auto DolbyAtmosForSpeakers();
        [[nodiscard]] static auto DTSHeadphoneX();
        [[nodiscard]] static auto DTSXUltra();
    };
}
#endif
