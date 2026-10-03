#pragma once
namespace dice { namespace hfe {
class AmbientEffectAreaEvent_createEvent;
class ArtilleryEvent_createEvent;
class BeginRoundEvent_createEvent;
class ChallengeEvent_createEvent;
class ChallengeResponseEvent_createEvent;
class ChangePlayerNameEvent_createEvent;
class ChangeSquadNameEvent_createEvent;
class CommanderEvent_createEvent;
class ConnectionTypeEvent_createEvent;
class ContentCheckEvent_createEvent;
class CreateKitEvent_createEvent;
class CreateObjectEvent_createEvent;
class CreatePlayerEvent_createEvent;
class CreateSpawnGroupEvent_createEvent;
class DataBlockEvent_createEvent;
class DestroyObjectEvent_createEvent;
class DestroyPlayerEvent_createEvent;
class DropVehicleEvent_createEvent;
class EndOfRoundEvent_createEvent;
class EnterVehicleEvent_createEvent;
class ExitVehicleEvent_createEvent;
class FixPlayerTeamEvent_createEvent;
class GameEvent;
class GrapplingHookContainerCreateEvent_createEvent;
class GrapplingHookContainerDetachEvent_createEvent;
class GrapplingHookContainerUpdateEvent_createEvent;
class GrapplingHookCreateEvent_createEvent;
class HandleDropEvent_createEvent;
class HandlePickupEvent_createEvent;
class InviteEvent_createEvent;
class IssueSquadOrderEvent_createEvent;
class JoinSquadEvent_createEvent;
class KickBanEvent_createEvent;
class LeaveSquadEvent_createEvent;
class MedalEvent_createEvent;
class MissileInitEvent_createEvent;
class PlayerTearGassedEvent_createEvent;
class PostRemoteEvent_createEvent;
class PythonCommandEvent_createEvent;
class RadioMessageEvent_createEvent;
class RankEvent_createEvent;
class RemoveSpawnGroupEvent_createEvent;
class RequestEvent_createEvent;
class SetAcceptOrderEvent_createEvent;
class SetNightVisionEvent_createEvent;
class SetPrivateSquadEvent_createEvent;
class SetSquadLeaderEvent_createEvent;
class SpottedEvent_createEvent;
class StickyProjectileEvent_createEvent;
class StringBlockEvent_createEvent;
class SupplyDropEvent_createEvent;
class TargetDirectionEvent_createEvent;
class ToggleFreeCameraEvent_createEvent;
class UAVEvent_createEvent;
class UnlockEvent_createEvent;
class UpdateTriggerEvent_createEvent;
class VerifyPlayerTeamEvent_createEvent;
class VoipOnOffEvent_createEvent;
class VoipPlayerMuteEvent_createEvent;
class VoipSessionEvent_createEvent;
class VoteEvent_createEvent;
class GameEventMakerMaker {
public:
  // FUNCTION: BF2 0x00415820
  void dice(hfe::FixPlayerTeamEvent_createEvent);
  // FUNCTION: BF2 0x00415850
  void dice(hfe::VerifyPlayerTeamEvent_createEvent);
  // FUNCTION: BF2 0x00415880
  void dice(hfe::SetNightVisionEvent_createEvent);
  // FUNCTION: BF2 0x004158b0
  void dice(hfe::PlayerTearGassedEvent_createEvent);
  // FUNCTION: BF2 0x004158e0
  void dice(hfe::GrapplingHookContainerUpdateEvent_createEvent);
  // FUNCTION: BF2 0x00415910
  GameEvent* createEvent();
  // FUNCTION: BF2 0x00415910
  void dice(hfe::GrapplingHookContainerCreateEvent_createEvent);
  // FUNCTION: BF2 0x00415940
  GameEvent* RemoveSpawnGroupEvent_createEvent();
  // FUNCTION: BF2 0x00415940
  void dice(hfe::RemoveSpawnGroupEvent_createEvent);
  // FUNCTION: BF2 0x00415970
  void dice(hfe::CreateSpawnGroupEvent_createEvent);
  // FUNCTION: BF2 0x004159a0
  void dice(hfe::ContentCheckEvent_createEvent);
  // FUNCTION: BF2 0x004159a0
  void* ContentCheckEvent_createEvent();
  // FUNCTION: BF2 0x004159d0
  void dice(hfe::MissileInitEvent_createEvent);
  // FUNCTION: BF2 0x00415a00
  void dice(hfe::UnlockEvent_createEvent);
  // FUNCTION: BF2 0x00415a30
  GameEvent* MedalEvent_createEvent();
  // FUNCTION: BF2 0x00415a30
  void dice(hfe::MedalEvent_createEvent);
  // FUNCTION: BF2 0x00415a60
  GameEvent* ToggleFreeCameraEvent_createEvent();
  // FUNCTION: BF2 0x00415a60
  void dice(hfe::ToggleFreeCameraEvent_createEvent);
  // FUNCTION: BF2 0x00415a90
  GameEvent* VoipSessionEvent_createEvent();
  // FUNCTION: BF2 0x00415a90
  void dice(hfe::VoipSessionEvent_createEvent);
  // FUNCTION: BF2 0x00415ac0
  void dice(hfe::RequestEvent_createEvent);
  // FUNCTION: BF2 0x00415af0
  void dice(hfe::PythonCommandEvent_createEvent);
  // FUNCTION: BF2 0x00415b30
  GameEvent* EndOfRoundEvent_createEvent();
  // FUNCTION: BF2 0x00415b30
  void dice(hfe::EndOfRoundEvent_createEvent);
  // FUNCTION: BF2 0x00415b60
  void dice(hfe::BeginRoundEvent_createEvent);
  // FUNCTION: BF2 0x00415b90
  void dice(hfe::VoteEvent_createEvent);
  // FUNCTION: BF2 0x00415b90
  void* VoteEvent_createEvent();
  // FUNCTION: BF2 0x00415bc0
  void dice(hfe::VoipPlayerMuteEvent_createEvent);
  // FUNCTION: BF2 0x00415bf0
  GameEvent* VoipOnOffEvent_createEvent();
  // FUNCTION: BF2 0x00415bf0
  void dice(hfe::VoipOnOffEvent_createEvent);
  // FUNCTION: BF2 0x00415c20
  void dice(hfe::SpottedEvent_createEvent);
  // FUNCTION: BF2 0x00415c50
  GameEvent* SetAcceptOrderEvent_createEvent();
  // FUNCTION: BF2 0x00415c50
  void dice(hfe::SetAcceptOrderEvent_createEvent);
  // FUNCTION: BF2 0x00415c80
  void dice(hfe::KickBanEvent_createEvent);
  // FUNCTION: BF2 0x00415cb0
  void dice(hfe::RankEvent_createEvent);
  // FUNCTION: BF2 0x00415ce0
  void dice(hfe::InviteEvent_createEvent);
  // FUNCTION: BF2 0x00415d10
  GameEvent* SetPrivateSquadEvent_createEvent();
  // FUNCTION: BF2 0x00415d10
  void dice(hfe::SetPrivateSquadEvent_createEvent);
  // FUNCTION: BF2 0x00415d40
  void dice(hfe::ChangeSquadNameEvent_createEvent);
  // FUNCTION: BF2 0x00415d70
  void dice(hfe::RadioMessageEvent_createEvent);
  // FUNCTION: BF2 0x00415da0
  void dice(hfe::CommanderEvent_createEvent);
  // FUNCTION: BF2 0x00415dd0
  void dice(hfe::LeaveSquadEvent_createEvent);
  // FUNCTION: BF2 0x00415e00
  GameEvent* JoinSquadEvent_createEvent();
  // FUNCTION: BF2 0x00415e00
  void dice(hfe::JoinSquadEvent_createEvent);
  // FUNCTION: BF2 0x00415e30
  void dice(hfe::StringBlockEvent_createEvent);
  // FUNCTION: BF2 0x00415e60
  GameEvent* HandlePickupEvent_createEvent();
  // FUNCTION: BF2 0x00415e60
  void dice(hfe::HandlePickupEvent_createEvent);
  // FUNCTION: BF2 0x00415e90
  void* dice(hfe::ChangePlayerNameEvent_createEvent);
  // FUNCTION: BF2 0x00415ec0
  void dice(hfe::PostRemoteEvent_createEvent);
  // FUNCTION: BF2 0x00415ef0
  void* dice(hfe::ExitVehicleEvent_createEvent);
  // FUNCTION: BF2 0x00415f20
  void dice(hfe::EnterVehicleEvent_createEvent);
  // FUNCTION: BF2 0x00415f50
  void* dice(hfe::DestroyPlayerEvent_createEvent);
  // FUNCTION: BF2 0x00415f80
  void dice(hfe::DestroyObjectEvent_createEvent);
  // FUNCTION: BF2 0x00415fb0
  void dice(hfe::CreatePlayerEvent_createEvent);
  // FUNCTION: BF2 0x00415fe0
  void dice(hfe::DataBlockEvent_createEvent);
  // FUNCTION: BF2 0x00416010
  void dice(hfe::ConnectionTypeEvent_createEvent);
  // FUNCTION: BF2 0x00416040
  void* dice(hfe::ChallengeResponseEvent_createEvent);
  // FUNCTION: BF2 0x00416070
  void dice(hfe::ChallengeEvent_createEvent);
  // FUNCTION: BF2 0x004160a0
  void dice(hfe::StickyProjectileEvent_createEvent);
  // FUNCTION: BF2 0x00416110
  void dice(hfe::GrapplingHookCreateEvent_createEvent);
  // FUNCTION: BF2 0x00416150
  void dice(hfe::GrapplingHookContainerDetachEvent_createEvent);
  // FUNCTION: BF2 0x00416190
  void dice(hfe::UpdateTriggerEvent_createEvent);
  // FUNCTION: BF2 0x004161d0
  void dice(hfe::TargetDirectionEvent_createEvent);
  // FUNCTION: BF2 0x00416250
  void dice(hfe::AmbientEffectAreaEvent_createEvent);
  // FUNCTION: BF2 0x00416290
  void dice(hfe::IssueSquadOrderEvent_createEvent);
  // FUNCTION: BF2 0x004162e0
  void dice(hfe::HandleDropEvent_createEvent);
  // FUNCTION: BF2 0x00416320
  void dice(hfe::CreateKitEvent_createEvent);
  // FUNCTION: BF2 0x00416360
  void dice(hfe::CreateObjectEvent_createEvent);
  // FUNCTION: BF2 0x00416450
  void dice(hfe::DropVehicleEvent_createEvent);
  // FUNCTION: BF2 0x00416480
  void dice(hfe::UAVEvent_createEvent);
  // FUNCTION: BF2 0x004164b0
  void dice(hfe::SupplyDropEvent_createEvent);
  // FUNCTION: BF2 0x004164e0
  void dice(hfe::ArtilleryEvent_createEvent);
  // FUNCTION: BF2 0x00416540
  void dice(hfe::SetSquadLeaderEvent_createEvent);
};
} }
