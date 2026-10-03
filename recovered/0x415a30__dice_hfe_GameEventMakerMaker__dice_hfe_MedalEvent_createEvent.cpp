// FUNCTION: BF2 0x415a30
extern "C" void GameEvent_GameEvent(void*);

namespace dice { namespace hfe {

class GameEventMakerMaker {
public:
    struct GameEvent* dice_hfe_MedalEvent_createEvent();
    int m_field_08;
    int m_field_0c;
};

struct GameEvent* GameEventMakerMaker::dice_hfe_MedalEvent_createEvent() {
    GameEvent* ev = (GameEvent*)operator new(0x20);
    GameEvent_GameEvent(ev);
    *reinterpret_cast<void**>(ev) = reinterpret_cast<void*>(0xb2d3b0);
    return ev;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker::dice_hfe_MedalEvent_createEvent (0x415a30)