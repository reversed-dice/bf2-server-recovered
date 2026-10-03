// FUNCTION: BF2 0x415d10
namespace dice { namespace hfe {
class GameEvent;
class GameEventMakerMaker {
public:
    virtual GameEvent* SetPrivateSquadEvent_createEvent();
};
void GameEvent_GameEvent(GameEvent* p);
GameEvent* GameEventMakerMaker::SetPrivateSquadEvent_createEvent() {
    GameEvent* p = (GameEvent*)operator new(0x18);
    GameEvent_GameEvent(p);
    *reinterpret_cast<void**>(p) = reinterpret_cast<void*>(0xb2df90ULL);
    return p;
}
} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker::dice_hfe_SetPrivateSquadEvent_createEvent (0x415d10)