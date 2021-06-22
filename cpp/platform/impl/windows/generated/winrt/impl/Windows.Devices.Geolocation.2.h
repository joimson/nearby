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

#ifndef WINRT_Windows_Devices_Geolocation_2_H
#define WINRT_Windows_Devices_Geolocation_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Devices.Geolocation.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Geolocation
{
    struct BasicGeoposition
    {
        double Latitude;
        double Longitude;
        double Altitude;
    };
    inline bool operator==(BasicGeoposition const& left, BasicGeoposition const& right) noexcept
    {
        return left.Latitude == right.Latitude && left.Longitude == right.Longitude && left.Altitude == right.Altitude;
    }
    inline bool operator!=(BasicGeoposition const& left, BasicGeoposition const& right) noexcept
    {
        return !(left == right);
    }
    struct __declspec(empty_bases) CivicAddress : winrt::Windows::Devices::Geolocation::ICivicAddress
    {
        CivicAddress(std::nullptr_t) noexcept {}
        CivicAddress(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Geolocation::ICivicAddress(ptr, take_ownership_from_abi) {}
        CivicAddress(CivicAddress const&) noexcept = default;
        CivicAddress(CivicAddress&&) noexcept = default;
        CivicAddress& operator=(CivicAddress const&) & noexcept = default;
        CivicAddress& operator=(CivicAddress&&) & noexcept = default;
    };
    struct __declspec(empty_bases) GeoboundingBox : winrt::Windows::Devices::Geolocation::IGeoboundingBox
    {
        GeoboundingBox(std::nullptr_t) noexcept {}
        GeoboundingBox(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Geolocation::IGeoboundingBox(ptr, take_ownership_from_abi) {}
        GeoboundingBox(winrt::Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, winrt::Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner);
        GeoboundingBox(winrt::Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, winrt::Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner, winrt::Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem);
        GeoboundingBox(winrt::Windows::Devices::Geolocation::BasicGeoposition const& northwestCorner, winrt::Windows::Devices::Geolocation::BasicGeoposition const& southeastCorner, winrt::Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId);
        GeoboundingBox(GeoboundingBox const&) noexcept = default;
        GeoboundingBox(GeoboundingBox&&) noexcept = default;
        GeoboundingBox& operator=(GeoboundingBox const&) & noexcept = default;
        GeoboundingBox& operator=(GeoboundingBox&&) & noexcept = default;
        static auto TryCompute(param::iterable<winrt::Windows::Devices::Geolocation::BasicGeoposition> const& positions);
        static auto TryCompute(param::iterable<winrt::Windows::Devices::Geolocation::BasicGeoposition> const& positions, winrt::Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeRefSystem);
        static auto TryCompute(param::iterable<winrt::Windows::Devices::Geolocation::BasicGeoposition> const& positions, winrt::Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeRefSystem, uint32_t spatialReferenceId);
    };
    struct __declspec(empty_bases) Geocircle : winrt::Windows::Devices::Geolocation::IGeocircle
    {
        Geocircle(std::nullptr_t) noexcept {}
        Geocircle(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Geolocation::IGeocircle(ptr, take_ownership_from_abi) {}
        Geocircle(winrt::Windows::Devices::Geolocation::BasicGeoposition const& position, double radius);
        Geocircle(winrt::Windows::Devices::Geolocation::BasicGeoposition const& position, double radius, winrt::Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem);
        Geocircle(winrt::Windows::Devices::Geolocation::BasicGeoposition const& position, double radius, winrt::Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId);
        Geocircle(Geocircle const&) noexcept = default;
        Geocircle(Geocircle&&) noexcept = default;
        Geocircle& operator=(Geocircle const&) & noexcept = default;
        Geocircle& operator=(Geocircle&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Geocoordinate : winrt::Windows::Devices::Geolocation::IGeocoordinate,
        impl::require<Geocoordinate, winrt::Windows::Devices::Geolocation::IGeocoordinateWithPositionData, winrt::Windows::Devices::Geolocation::IGeocoordinateWithPoint, winrt::Windows::Devices::Geolocation::IGeocoordinateWithPositionSourceTimestamp>
    {
        Geocoordinate(std::nullptr_t) noexcept {}
        Geocoordinate(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Geolocation::IGeocoordinate(ptr, take_ownership_from_abi) {}
        Geocoordinate(Geocoordinate const&) noexcept = default;
        Geocoordinate(Geocoordinate&&) noexcept = default;
        Geocoordinate& operator=(Geocoordinate const&) & noexcept = default;
        Geocoordinate& operator=(Geocoordinate&&) & noexcept = default;
    };
    struct __declspec(empty_bases) GeocoordinateSatelliteData : winrt::Windows::Devices::Geolocation::IGeocoordinateSatelliteData
    {
        GeocoordinateSatelliteData(std::nullptr_t) noexcept {}
        GeocoordinateSatelliteData(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Geolocation::IGeocoordinateSatelliteData(ptr, take_ownership_from_abi) {}
        GeocoordinateSatelliteData(GeocoordinateSatelliteData const&) noexcept = default;
        GeocoordinateSatelliteData(GeocoordinateSatelliteData&&) noexcept = default;
        GeocoordinateSatelliteData& operator=(GeocoordinateSatelliteData const&) & noexcept = default;
        GeocoordinateSatelliteData& operator=(GeocoordinateSatelliteData&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Geolocator : winrt::Windows::Devices::Geolocation::IGeolocator,
        impl::require<Geolocator, winrt::Windows::Devices::Geolocation::IGeolocatorWithScalarAccuracy, winrt::Windows::Devices::Geolocation::IGeolocator2>
    {
        Geolocator(std::nullptr_t) noexcept {}
        Geolocator(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Geolocation::IGeolocator(ptr, take_ownership_from_abi) {}
        Geolocator();
        Geolocator(Geolocator const&) noexcept = default;
        Geolocator(Geolocator&&) noexcept = default;
        Geolocator& operator=(Geolocator const&) & noexcept = default;
        Geolocator& operator=(Geolocator&&) & noexcept = default;
        static auto RequestAccessAsync();
        static auto GetGeopositionHistoryAsync(winrt::Windows::Foundation::DateTime const& startTime);
        static auto GetGeopositionHistoryAsync(winrt::Windows::Foundation::DateTime const& startTime, winrt::Windows::Foundation::TimeSpan const& duration);
        [[nodiscard]] static auto IsDefaultGeopositionRecommended();
        static auto DefaultGeoposition(winrt::Windows::Foundation::IReference<winrt::Windows::Devices::Geolocation::BasicGeoposition> const& value);
        [[nodiscard]] static auto DefaultGeoposition();
    };
    struct __declspec(empty_bases) Geopath : winrt::Windows::Devices::Geolocation::IGeopath
    {
        Geopath(std::nullptr_t) noexcept {}
        Geopath(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Geolocation::IGeopath(ptr, take_ownership_from_abi) {}
        explicit Geopath(param::iterable<winrt::Windows::Devices::Geolocation::BasicGeoposition> const& positions);
        Geopath(param::iterable<winrt::Windows::Devices::Geolocation::BasicGeoposition> const& positions, winrt::Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem);
        Geopath(param::iterable<winrt::Windows::Devices::Geolocation::BasicGeoposition> const& positions, winrt::Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId);
        Geopath(Geopath const&) noexcept = default;
        Geopath(Geopath&&) noexcept = default;
        Geopath& operator=(Geopath const&) & noexcept = default;
        Geopath& operator=(Geopath&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Geopoint : winrt::Windows::Devices::Geolocation::IGeopoint
    {
        Geopoint(std::nullptr_t) noexcept {}
        Geopoint(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Geolocation::IGeopoint(ptr, take_ownership_from_abi) {}
        explicit Geopoint(winrt::Windows::Devices::Geolocation::BasicGeoposition const& position);
        Geopoint(winrt::Windows::Devices::Geolocation::BasicGeoposition const& position, winrt::Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem);
        Geopoint(winrt::Windows::Devices::Geolocation::BasicGeoposition const& position, winrt::Windows::Devices::Geolocation::AltitudeReferenceSystem const& altitudeReferenceSystem, uint32_t spatialReferenceId);
        Geopoint(Geopoint const&) noexcept = default;
        Geopoint(Geopoint&&) noexcept = default;
        Geopoint& operator=(Geopoint const&) & noexcept = default;
        Geopoint& operator=(Geopoint&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Geoposition : winrt::Windows::Devices::Geolocation::IGeoposition,
        impl::require<Geoposition, winrt::Windows::Devices::Geolocation::IGeoposition2>
    {
        Geoposition(std::nullptr_t) noexcept {}
        Geoposition(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Geolocation::IGeoposition(ptr, take_ownership_from_abi) {}
        Geoposition(Geoposition const&) noexcept = default;
        Geoposition(Geoposition&&) noexcept = default;
        Geoposition& operator=(Geoposition const&) & noexcept = default;
        Geoposition& operator=(Geoposition&&) & noexcept = default;
    };
    struct __declspec(empty_bases) Geovisit : winrt::Windows::Devices::Geolocation::IGeovisit
    {
        Geovisit(std::nullptr_t) noexcept {}
        Geovisit(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Geolocation::IGeovisit(ptr, take_ownership_from_abi) {}
        Geovisit(Geovisit const&) noexcept = default;
        Geovisit(Geovisit&&) noexcept = default;
        Geovisit& operator=(Geovisit const&) & noexcept = default;
        Geovisit& operator=(Geovisit&&) & noexcept = default;
    };
    struct __declspec(empty_bases) GeovisitMonitor : winrt::Windows::Devices::Geolocation::IGeovisitMonitor
    {
        GeovisitMonitor(std::nullptr_t) noexcept {}
        GeovisitMonitor(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Geolocation::IGeovisitMonitor(ptr, take_ownership_from_abi) {}
        GeovisitMonitor();
        GeovisitMonitor(GeovisitMonitor const&) noexcept = default;
        GeovisitMonitor(GeovisitMonitor&&) noexcept = default;
        GeovisitMonitor& operator=(GeovisitMonitor const&) & noexcept = default;
        GeovisitMonitor& operator=(GeovisitMonitor&&) & noexcept = default;
        static auto GetLastReportAsync();
    };
    struct __declspec(empty_bases) GeovisitStateChangedEventArgs : winrt::Windows::Devices::Geolocation::IGeovisitStateChangedEventArgs
    {
        GeovisitStateChangedEventArgs(std::nullptr_t) noexcept {}
        GeovisitStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Geolocation::IGeovisitStateChangedEventArgs(ptr, take_ownership_from_abi) {}
        GeovisitStateChangedEventArgs(GeovisitStateChangedEventArgs const&) noexcept = default;
        GeovisitStateChangedEventArgs(GeovisitStateChangedEventArgs&&) noexcept = default;
        GeovisitStateChangedEventArgs& operator=(GeovisitStateChangedEventArgs const&) & noexcept = default;
        GeovisitStateChangedEventArgs& operator=(GeovisitStateChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) GeovisitTriggerDetails : winrt::Windows::Devices::Geolocation::IGeovisitTriggerDetails
    {
        GeovisitTriggerDetails(std::nullptr_t) noexcept {}
        GeovisitTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Geolocation::IGeovisitTriggerDetails(ptr, take_ownership_from_abi) {}
        GeovisitTriggerDetails(GeovisitTriggerDetails const&) noexcept = default;
        GeovisitTriggerDetails(GeovisitTriggerDetails&&) noexcept = default;
        GeovisitTriggerDetails& operator=(GeovisitTriggerDetails const&) & noexcept = default;
        GeovisitTriggerDetails& operator=(GeovisitTriggerDetails&&) & noexcept = default;
    };
    struct __declspec(empty_bases) PositionChangedEventArgs : winrt::Windows::Devices::Geolocation::IPositionChangedEventArgs
    {
        PositionChangedEventArgs(std::nullptr_t) noexcept {}
        PositionChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Geolocation::IPositionChangedEventArgs(ptr, take_ownership_from_abi) {}
        PositionChangedEventArgs(PositionChangedEventArgs const&) noexcept = default;
        PositionChangedEventArgs(PositionChangedEventArgs&&) noexcept = default;
        PositionChangedEventArgs& operator=(PositionChangedEventArgs const&) & noexcept = default;
        PositionChangedEventArgs& operator=(PositionChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) StatusChangedEventArgs : winrt::Windows::Devices::Geolocation::IStatusChangedEventArgs
    {
        StatusChangedEventArgs(std::nullptr_t) noexcept {}
        StatusChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Geolocation::IStatusChangedEventArgs(ptr, take_ownership_from_abi) {}
        StatusChangedEventArgs(StatusChangedEventArgs const&) noexcept = default;
        StatusChangedEventArgs(StatusChangedEventArgs&&) noexcept = default;
        StatusChangedEventArgs& operator=(StatusChangedEventArgs const&) & noexcept = default;
        StatusChangedEventArgs& operator=(StatusChangedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) VenueData : winrt::Windows::Devices::Geolocation::IVenueData
    {
        VenueData(std::nullptr_t) noexcept {}
        VenueData(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Geolocation::IVenueData(ptr, take_ownership_from_abi) {}
        VenueData(VenueData const&) noexcept = default;
        VenueData(VenueData&&) noexcept = default;
        VenueData& operator=(VenueData const&) & noexcept = default;
        VenueData& operator=(VenueData&&) & noexcept = default;
    };
}
#endif
