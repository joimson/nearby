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

#ifndef PLATFORM_API_CRYPTO_H_
#define PLATFORM_API_CRYPTO_H_

#include "absl/strings/string_view.h"
#include "platform/base/byte_array.h"

namespace location {
namespace nearby {

// A provider of standard hashing algorithms.
class Crypto {
 public:
  // Initialize global crypto state.
  static void Init();
  // Return MD5 hash of input.
  static ByteArray Md5(absl::string_view input);
  // Return SHA256 hash of input.
  static ByteArray Sha256(absl::string_view input);
};

}  // namespace nearby
}  // namespace location

#endif  // PLATFORM_API_CRYPTO_H_
