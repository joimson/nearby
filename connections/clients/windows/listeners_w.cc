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

#include "connections/clients/windows/listeners_w.h"

#include "connections/listeners.h"

namespace location {
namespace nearby {
namespace windows {

ResultCallbackW::ResultCallbackW() {
  pImpl = std::make_unique<connections::ResultCallback>();

  pImpl->result_cb = [this](Status status) { result_cb(status); };
}

ResultCallbackW::ResultCallbackW(ResultCallbackW &other) {
  pImpl = std::move(other.pImpl);
}

ResultCallbackW::ResultCallbackW(ResultCallbackW &&other) noexcept {
  pImpl = std::move(other.pImpl);
}

ConnectionListenerW::ConnectionListenerW() {
  pImpl = ::std::make_unique<connections::ConnectionListener>();
  pImpl->initiated_cb =
      [this](
          const std::string endpoint_id,
          const connections::ConnectionResponseInfo connection_response_info) {
        if (this->initiated_cb != nullptr) {
          ConnectionResponseInfoW connection_response_info_w{
              connection_response_info.remote_endpoint_info.data(),
              connection_response_info.remote_endpoint_info.size(),
              connection_response_info.authentication_token.c_str(),
              connection_response_info.raw_authentication_token.data(),
              connection_response_info.raw_authentication_token.size(),
              connection_response_info.is_incoming_connection,
              connection_response_info.is_connection_verified};
          this->initiated_cb(endpoint_id.c_str(), connection_response_info_w);
        }
      };
  pImpl->accepted_cb = [this](const std::string endpoint_id) {
    if (this->accepted_cb != nullptr) {
      this->accepted_cb(endpoint_id.c_str());
    }
  };
  pImpl->rejected_cb = [this](const std::string endpoint_id, Status status) {
    if (this->rejected_cb != nullptr) {
      this->rejected_cb(endpoint_id.c_str(), status);
    }
  };
  pImpl->disconnected_cb = [this](const std::string endpoint_id) {
    if (this->disconnected_cb != nullptr) {
      this->disconnected_cb(endpoint_id.c_str());
    }
  };
  pImpl->bandwidth_changed_cb = [this](const std::string endpoint_id,
                                       connections::Medium medium) {
    if (this->bandwidth_changed_cb != nullptr) {
      this->bandwidth_changed_cb(endpoint_id.c_str(), medium);
    }
  };
}

ConnectionListenerW::ConnectionListenerW(ConnectionListenerW &other) {
  pImpl = std::move(other.pImpl);
  accepted_cb = other.accepted_cb;
  bandwidth_changed_cb = other.bandwidth_changed_cb;
  disconnected_cb = other.disconnected_cb;
  initiated_cb = other.initiated_cb;
  rejected_cb = other.rejected_cb;
}

ConnectionListenerW::ConnectionListenerW(ConnectionListenerW &&other) noexcept {
  pImpl = std::move(other.pImpl);
  accepted_cb = other.accepted_cb;
  bandwidth_changed_cb = other.bandwidth_changed_cb;
  disconnected_cb = other.disconnected_cb;
  initiated_cb = other.initiated_cb;
  rejected_cb = other.rejected_cb;
}

DiscoveryListenerW::DiscoveryListenerW() {
  pImpl = std::make_unique<connections::DiscoveryListener>();

  pImpl->endpoint_distance_changed_cb =
      [this](const std::string endpoint_id,
             connections::DistanceInfo distance_info) {
        if (this->endpoint_distance_changed_cb != nullptr) {
          DistanceInfoW distanceInfoW = DistanceInfoW::kUnknown;
          switch (distance_info) {
            case connections::DistanceInfo::kFar:
              distanceInfoW = DistanceInfoW::kFar;
              break;
            case connections::DistanceInfo::kClose:
              distanceInfoW = DistanceInfoW::kFar;
              break;
            case connections::DistanceInfo::kVeryClose:
              distanceInfoW = DistanceInfoW::kVeryClose;
              break;
            case connections::DistanceInfo::kUnknown:
              break;
          }
          endpoint_distance_changed_cb(endpoint_id.c_str(), distanceInfoW);
        }
      };
  pImpl->endpoint_found_cb = [this](const std::string endpoint_id,
                                    ByteArray endpoint_info,
                                    const std::string service_id) {
    if (endpoint_found_cb != nullptr) {
      endpoint_found_cb(endpoint_id.c_str(), endpoint_info.data(),
                        endpoint_info.size(), service_id.c_str());
    }
  };
  pImpl->endpoint_lost_cb = [this](const std::string endpoint_id) {
    if (this->endpoint_lost_cb != nullptr) {
      this->endpoint_lost_cb(endpoint_id.c_str());
    }
  };
}

DiscoveryListenerW::DiscoveryListenerW(DiscoveryListenerW &other) {
  endpoint_distance_changed_cb = other.endpoint_distance_changed_cb;
  endpoint_found_cb = other.endpoint_found_cb;
  endpoint_lost_cb = other.endpoint_lost_cb;
  pImpl = std::move(other.pImpl);
}

DiscoveryListenerW::DiscoveryListenerW(DiscoveryListenerW &&other) noexcept {
  endpoint_distance_changed_cb = other.endpoint_distance_changed_cb;
  endpoint_found_cb = other.endpoint_found_cb;
  endpoint_lost_cb = other.endpoint_lost_cb;
  pImpl = std::move(other.pImpl);
}

PayloadListenerW::PayloadListenerW() {
  pImpl = std::make_unique<connections::PayloadListener>();

  pImpl->payload_cb = [this](const std::string endpoint_id,
                             connections::Payload payload) {
    PayloadW payloadW;

    if (payload_cb != nullptr) {
      switch (payload.GetType()) {
        case connections::PayloadType::kBytes: {
          payloadW =
              PayloadW(payload.AsBytes().data(), payload.AsBytes().size());
          break;
        }
        case connections::PayloadType::kFile: {
          InputFile file(std::move(*payload.AsFile()));
          payloadW = PayloadW(file);
        } break;
        // TODO(jfcarroll): Figure out how to capture type kStream.
        // case connections::PayloadType::kStream: {
        //  payloadW = PayloadW(payload.AsStream());
        //}
        case connections::PayloadType::kStream: {
          InputFile file(std::move(*payload.AsFile()));
          payloadW = PayloadW(file);
        } break;
        case connections::PayloadType::kUnknown: {
          // Throw exception here?
          break;
        }
      }
      payload_cb(endpoint_id.c_str(), std::move(payloadW));
    }
  };
  pImpl->payload_progress_cb =
      [this](const std::string endpoint_id,
             connections::PayloadProgressInfo payload_progress_info) {
        if (payload_progress_cb != nullptr) {
          PayloadProgressInfoW payload_progress_info_w;
          payload_progress_info_w.payload_id = payload_progress_info.payload_id;
          payload_progress_info_w.total_bytes =
              payload_progress_info.total_bytes;
          payload_progress_info_w.bytes_transferred =
              payload_progress_info.bytes_transferred;

          switch (payload_progress_info.status) {
            case connections::PayloadProgressInfo::Status::kCanceled:
              payload_progress_info_w.status =
                  PayloadProgressInfoW::Status::kCanceled;
              break;
            case connections::PayloadProgressInfo::Status::kFailure:
              payload_progress_info_w.status =
                  PayloadProgressInfoW::Status::kFailure;
              break;
            case connections::PayloadProgressInfo::Status::kInProgress:
              payload_progress_info_w.status =
                  PayloadProgressInfoW::Status::kInProgress;
              break;
            case connections::PayloadProgressInfo::Status::kSuccess:
              payload_progress_info_w.status =
                  PayloadProgressInfoW::Status::kSuccess;
              break;
          }

          payload_progress_cb(endpoint_id.c_str(), payload_progress_info_w);
        }
      };
}

PayloadListenerW::PayloadListenerW(PayloadListenerW &other) {
  pImpl = std::move(other.pImpl);
}

PayloadListenerW::PayloadListenerW(PayloadListenerW &&other) noexcept {
  pImpl = std::move(other.pImpl);
}

}  // namespace windows
}  // namespace nearby
}  // namespace location
