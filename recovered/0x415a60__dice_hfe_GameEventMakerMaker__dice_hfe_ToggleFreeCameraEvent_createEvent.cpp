// FUNCTION: BF2 0x415a60
extern void ToggleFreeCameraEvent_Init(void* p);

namespace dice { namespace hfe {

class GameEventMakerMaker {
public:
    struct GameEvent* dice_hfe_VoteEvent_createEvent();
    struct GameEvent* dice_hfe_RadioMessageEvent_createEvent();
    void* HandlePickupEvent_createEvent();
    void* VoipPlayerMuteEvent_createEvent();
    virtual struct GameEvent* SetPrivateSquadEvent_createEvent();
    struct GameEvent* dice_hfe_ToggleFreeCameraEvent_createEvent();

    int m_field_08;
    int m_field_0c;
};

struct GameEvent* GameEventMakerMaker::dice_hfe_ToggleFreeCameraEvent_createEvent() {
    void* mem = operator new(0x10);
    struct GameEvent* ev = (struct GameEvent*)mem;
    ToggleFreeCameraEvent_Init(ev);
    *(void**)ev = (void*)0xb2e6d0;
    return ev;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker::dice_hfe_ToggleFreeCameraEvent_createEvent (0x415a60)