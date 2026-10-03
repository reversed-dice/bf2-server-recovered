// FUNCTION: BF2 0x415bc0
struct GameEvent {
    void* vptr;
    char pad[16];
};

void GameEvent_GameEvent(GameEvent* p);

namespace dice { namespace hfe {
class GameEventMakerMaker {
public:
    GameEvent* createEvent();
};
GameEvent* GameEventMakerMaker::createEvent() {
    GameEvent* ev = new GameEvent;
    GameEvent_GameEvent(ev);
    ev->vptr = reinterpret_cast<void*>(0xb2eb90ULL);
    return ev;
}
} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_VoipPlayerMuteEvent_createEvent (0x415bc0)