// FUNCTION: BF2 0x415d70
struct GameEvent {
    void* vptr;
};

extern "C" void GameEvent_GameEvent(GameEvent*);

namespace dice { namespace hfe {

class GameEventMakerMaker {
public:
    static GameEvent* createEvent();
};

GameEvent* GameEventMakerMaker::createEvent()
{
    GameEvent* ev = static_cast<GameEvent*>(::operator new(0x20));
    GameEvent_GameEvent(ev);
    ev->vptr = reinterpret_cast<void*>(0xb2da30ULL);
    return ev;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_RadioMessageEvent_createEvent (0x415d70)