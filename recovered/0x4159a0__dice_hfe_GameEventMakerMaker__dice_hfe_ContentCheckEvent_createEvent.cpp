// FUNCTION: BF2 0x4159a0
namespace dice { namespace hfe {

struct GameEvent;
void GameEvent_GameEvent(struct GameEvent*);

struct GameEvent {
    void* vptr;
    int   m_field_08;
    int   m_field_0c;
};

class GameEventMakerMaker {
public:
    struct GameEvent* dice_hfe_ContentCheckEvent_createEvent();

    int m_field_08;
    int m_field_0c;
};

struct GameEvent* GameEventMakerMaker::dice_hfe_ContentCheckEvent_createEvent() {
    struct GameEvent* ev = static_cast<struct GameEvent*>(operator new(0x40));
    GameEvent_GameEvent(ev);
    ev->vptr = reinterpret_cast<void*>(0xb2bcb0ULL);
    return ev;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker::dice_hfe_ContentCheckEvent_createEvent (0x4159a0)