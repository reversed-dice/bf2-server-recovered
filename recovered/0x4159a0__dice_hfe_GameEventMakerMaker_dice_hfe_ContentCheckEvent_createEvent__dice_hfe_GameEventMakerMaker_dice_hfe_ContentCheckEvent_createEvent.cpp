// FUNCTION: BF2 0x4159a0
class GameEvent;
void GameEvent_GameEvent(GameEvent*);

namespace dice { namespace hfe {

class GameEventMakerMaker {
public:
    void* ContentCheckEvent_createEvent();
};

void* GameEventMakerMaker::ContentCheckEvent_createEvent() {
    void* const ptr = operator new(0x40);
    GameEvent_GameEvent(reinterpret_cast<GameEvent*>(ptr));
    *reinterpret_cast<void**>(ptr) = reinterpret_cast<void*>(0xb2bcb0);
    return ptr;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_ContentCheckEvent_createEvent (0x4159a0)