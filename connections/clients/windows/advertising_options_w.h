// Copyright 2021 Google LLC
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
#ifndef WINDOWS_ADVERTISING_OPTIONS_W_H_
#define WINDOWS_ADVERTISING_OPTIONS_W_H_

#include "connections/clients/windows/options_base_w.h"

namespace location {
namespace nearby {
namespace windows {

// Connection Options: used for both Advertising and Discovery.
// All fields are mutable, to make the type copy-assignable.
struct DLL_API AdvertisingOptionsW : public OptionsBaseW {
  bool auto_upgrade_bandwidth;
  bool enforce_topology_constraints;
  bool low_power;
  bool enable_bluetooth_listening;
  bool enable_webrtc_listening;

  // Whether this is intended to be used in conjunction with InjectEndpoint().
  bool is_out_of_band_connection = false;
  const char* fast_advertisement_service_uuid;

  // Returns a copy and normalizes allowed mediums:
  // (1) If is_out_of_band_connection is true, verifies that there is only one
  //     medium allowed, defaulting to only Bluetooth if unspecified.
  // (2) If no mediums are allowed, allow all mediums.
  AdvertisingOptionsW CompatibleOptions() const;
};

}  // namespace windows
}  // namespace nearby
}  // namespace location

#endif  // WINDOWS_ADVERTISING_OPTIONS_W_H_
