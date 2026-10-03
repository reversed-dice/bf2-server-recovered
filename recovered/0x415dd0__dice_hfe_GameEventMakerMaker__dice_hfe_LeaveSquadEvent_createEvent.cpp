// FUNCTION: BF2 0x415dd0
namespace dice { namespace hfe {
  struct GameEvent;
  void GameEvent_GameEvent(GameEvent* event);

  class GameEventMakerMaker {
  public:
    struct GameEvent* dice_hfe_VoteEvent_createEvent();
    struct GameEvent* dice_hfe_RadioMessageEvent_createEvent();
    void* HandlePickupEvent_createEvent();
    void* VoipPlayerMuteEvent_createEvent();
    virtual struct GameEvent* SetPrivateSquadEvent_createEvent();
    struct GameEvent* dice_hfe_RemoveSpawnGroupEvent_createEvent();
    struct GameEvent* dice_hfe_ContentCheckEvent_createEvent();
    struct GameEvent* dice_hfe_MedalEvent_createEvent();
    struct GameEvent* dice_hfe_ToggleFreeCameraEvent_createEvent();
    struct GameEvent* dice_hfe_EndOfRoundEvent_createEvent();
    struct GameEvent* dice_hfe_VoipOnOffEvent_createEvent();
    struct GameEvent* dice_hfe_SetAcceptOrderEvent_createEvent();
    struct GameEvent* dice_hfe_LeaveSquadEvent_createEvent();

    int m_field_08;
    int m_field_0c;
  };

  struct GameEvent* GameEventMakerMaker::dice_hfe_LeaveSquadEvent_createEvent() {
    struct GameEvent* event = (struct GameEvent*)operator new(0x18);
    GameEvent_GameEvent(event);
    *reinterpret_cast<void**>(event) = reinterpret_cast<void*>(0xb2d2f0ULL);
    return event;
  }
} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker::dice_hfe_LeaveSquadEvent_createEvent (0x415dd0)