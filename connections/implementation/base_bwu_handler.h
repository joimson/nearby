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

#ifndef CORE_INTERNAL_BASE_BWU_HANDLER_H_
#define CORE_INTERNAL_BASE_BWU_HANDLER_H_

#include <memory>
#include <string>

#include "absl/container/flat_hash_map.h"
#include "connections/implementation/bwu_handler.h"
#include "connections/implementation/endpoint_channel_manager.h"

namespace location {
namespace nearby {
namespace connections {

// TODO: ...bookkeeping.
class BaseBwuHandler : public BwuHandler {
 public:
  BaseBwuHandler(EndpointChannelManager& channel_manager,
                 BwuNotifications bwu_notifications);
  ~BaseBwuHandler() override;

  // BwuHandler:
  ByteArray InitializeUpgradedMediumForEndpoint(
      ClientProxy* client, const std::string& service_id,
      const std::string& endpoint_id) final;
  void RevertInitiatorState() final;
  void RevertInitiatorState(const std::string& upgrade_service_id,
                            const std::string& endpoint_id) final;

 protected:
  // TODO.
  virtual ByteArray HandleInitializeUpgradedMediumForEndpoint(
      ClientProxy* client, const std::string& upgrade_service_id,
      const std::string& endpoint_id) = 0;
  virtual void HandleRevertInitiatorStateForService(
      const std::string& upgrade_service_id) = 0;

  // Represents the incoming Socket the Initiator has gotten after initializing
  // its upgraded bandwidth medium.
  EndpointChannelManager* GetEndpointChannelManager();

  BwuNotifications bwu_notifications_;

 private:
  EndpointChannelManager* channel_manager_;

  // Map from the (wrapped) service ID to endpoint IDs that are initiating a
  // bandwidth upgrade. Not used for endpoints that respond to bandwidth upgrade
  // requests from another device.
  absl::flat_hash_map<std::string, absl::flat_hash_set<std::string>>
      upgrade_service_id_to_active_endpoint_ids_;
};

}  // namespace connections
}  // namespace nearby
}  // namespace location

#endif  // CORE_INTERNAL_BASE_BWU_HANDLER_H_
