// FUNCTION: BF2 0x415c50
void* operator new(unsigned long);

namespace dice { namespace hfe {

struct GameEvent {
    void* vptr;
    int m_field_08;
    int m_field_0c;
};

class GameEventMakerMaker {
public:
    struct GameEvent* dice_hfe_VoteEvent_createEvent();
    struct GameEvent* dice_hfe_RadioMessageEvent_createEvent();
    void* HandlePickupEvent_createEvent();
    void* VoipPlayerMuteEvent_createEvent();
    virtual GameEvent* SetPrivateSquadEvent_createEvent();
    struct GameEvent* dice_hfe_RemoveSpawnGroupEvent_createEvent();
    struct GameEvent* dice_hfe_ContentCheckEvent_createEvent();
    struct GameEvent* dice_hfe_MedalEvent_createEvent();
    struct GameEvent* dice_hfe_ToggleFreeCameraEvent_createEvent();
    struct GameEvent* dice_hfe_SetAcceptOrderEvent_createEvent();

    int m_field_08;
    int m_field_0c;
};

void GameEvent_GameEvent(GameEvent* self);

struct GameEvent* GameEventMakerMaker::dice_hfe_SetAcceptOrderEvent_createEvent() {
    GameEvent* ev = static_cast<GameEvent*>(::operator new(0x18));
    GameEvent_GameEvent(ev);
    ev->vptr = reinterpret_cast<void*>(0xb2ddd0);
    return ev;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker::dice_hfe_SetAcceptOrderEvent_createEvent (0x415c50)