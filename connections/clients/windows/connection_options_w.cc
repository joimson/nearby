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

#include "connections/clients/windows/connection_options_w.h"

#include <string>

namespace location {
namespace nearby {
namespace windows {

void ConnectionOptionsW::GetMediums(const Medium* mediums,
                                    size_t mediums_size) const {
  auto allowedMediums = allowed.GetMediums(true);
  auto iter = allowedMediums.begin();
  int index = 0;
  while (iter != allowedMediums.end()) {
    *mediums_[index++] = iter[index];
  }
  mediums_size = allowed.GetMediums(true).size();
}

}  // namespace windows
}  // namespace nearby
}  // namespace location
