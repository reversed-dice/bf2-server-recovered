// FUNCTION: BF2 0x415d70
namespace dice { namespace hfe {

struct GameEvent {
    void* vptr;          // +0x00
    int   m_field_08;    // +0x08
    int   m_field_0c;    // +0x0C
    char  _pad[0x10];    // +0x10 — sizeof = 0x20
};

class GameEventMakerMaker {
public:
    struct GameEvent* dice_hfe_RadioMessageEvent_createEvent();
};

void GameEvent_GameEvent(struct GameEvent* self);

struct GameEvent* GameEventMakerMaker::dice_hfe_RadioMessageEvent_createEvent()
{
    struct GameEvent* ev = new struct GameEvent;
    GameEvent_GameEvent(ev);
    ev->vptr = reinterpret_cast<void*>(0xb2da30ULL);
    return ev;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker::dice_hfe_RadioMessageEvent_createEvent (0x415d70)