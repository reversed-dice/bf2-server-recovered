// FUNCTION: BF2 0x415b30
namespace dice { namespace hfe {
class GameEventMakerMaker {
public:
    struct GameEvent* dice_hfe_EndOfRoundEvent_createEvent();
};

extern "C" void GameEvent_GameEvent(void*);

struct GameEvent* GameEventMakerMaker::dice_hfe_EndOfRoundEvent_createEvent() {
    struct GameEvent* evt = static_cast<struct GameEvent*>(::operator new(0x20));
    GameEvent_GameEvent(evt);
    *reinterpret_cast<void**>(evt) = reinterpret_cast<void*>(0xb2c550ULL);
    return evt;
}
} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker::dice_hfe_EndOfRoundEvent_createEvent (0x415b30)