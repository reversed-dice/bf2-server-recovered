// FUNCTION: BF2 0x415a60
#include <new>

struct GameEvent {
    void* vptr;
};

void GameEvent_GameEvent(GameEvent*);

namespace dice { namespace hfe {

class GameEventMakerMaker {
public:
    GameEvent* ToggleFreeCameraEvent_createEvent();
};

GameEvent* GameEventMakerMaker::ToggleFreeCameraEvent_createEvent() {
    GameEvent* ev = static_cast<GameEvent*>(operator new(0x10));
    GameEvent_GameEvent(ev);
    ev->vptr = reinterpret_cast<void*>(0xb2e6d0);
    return ev;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_ToggleFreeCameraEvent_createEvent (0x415a60)