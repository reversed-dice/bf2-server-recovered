// FUNCTION: BF2 0x415e00
void* operator new(unsigned long size);

namespace dice { namespace hfe {

struct GameEvent {
    void* vptr;
    int m_field_08;
    int m_field_0c;
};

void GameEvent_GameEvent(GameEvent* self);

class GameEventMakerMaker {
public:
    GameEvent* JoinSquadEvent_createEvent();
};

GameEvent* GameEventMakerMaker::JoinSquadEvent_createEvent() {
    GameEvent* ev = (GameEvent*)operator new(0x18);
    GameEvent_GameEvent(ev);
    ev->vptr = reinterpret_cast<void*>(0xb2d050ULL);
    return ev;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_JoinSquadEvent_createEvent (0x415e00)