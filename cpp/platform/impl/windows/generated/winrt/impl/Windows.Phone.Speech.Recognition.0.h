// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Windows_Phone_Speech_Recognition_0_H
#define WINRT_Windows_Phone_Speech_Recognition_0_H
WINRT_EXPORT namespace winrt::Windows::Phone::Speech::Recognition
{
    enum class SpeechRecognitionUIStatus : int32_t
    {
        Succeeded = 0,
        Busy = 1,
        Cancelled = 2,
        Preempted = 3,
        PrivacyPolicyDeclined = 4,
    };
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Phone::Speech::Recognition::SpeechRecognitionUIStatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Phone::Speech::Recognition::SpeechRecognitionUIStatus> = L"Windows.Phone.Speech.Recognition.SpeechRecognitionUIStatus";
}
#endif
