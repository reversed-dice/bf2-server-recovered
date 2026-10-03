// FUNCTION: BF2 0x415e60
struct GameEvent {
    void* vptr;
    char _pad[16];
};

void GameEvent_GameEvent(GameEvent*);

namespace dice { namespace hfe {

class GameEventMakerMaker {
public:
    GameEvent* HandlePickupEvent_createEvent();
};

GameEvent* GameEventMakerMaker::HandlePickupEvent_createEvent() {
    GameEvent* ev = new GameEvent;
    GameEvent_GameEvent(ev);
    ev->vptr = reinterpret_cast<void*>(0xb2cdf0ULL);
    return ev;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_HandlePickupEvent_createEvent (0x415e60)