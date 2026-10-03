// FUNCTION: BF2 0x415bf0
struct GameEvent {
    void* vptr;
};

GameEvent* GameEvent_GameEvent(GameEvent* ev);

namespace dice { namespace hfe {

class GameEventMakerMaker {
public:
    GameEvent* VoipOnOffEvent_createEvent();
};

GameEvent* GameEventMakerMaker::VoipOnOffEvent_createEvent() {
    GameEvent* ev = static_cast<GameEvent*>(operator new(0x18));
    GameEvent_GameEvent(ev);
    ev->vptr = reinterpret_cast<void*>(0xb2eab0);
    return ev;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_VoipOnOffEvent_createEvent (0x415bf0)