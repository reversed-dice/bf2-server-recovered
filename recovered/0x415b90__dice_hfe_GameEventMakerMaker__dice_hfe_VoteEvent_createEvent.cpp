// FUNCTION: BF2 0x415b90
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
    struct GameEvent* dice_hfe_VoteEvent_createEvent();
    struct GameEvent* dice_hfe_RadioMessageEvent_createEvent();
    void* HandlePickupEvent_createEvent();

    int m_field_08;
    int m_field_0c;
};

struct GameEvent* GameEventMakerMaker::dice_hfe_VoteEvent_createEvent() {
    struct GameEvent* ev = (struct GameEvent*)::operator new(0x28);
    GameEvent_GameEvent(ev);
    ev->vptr = reinterpret_cast<void*>(0xb2ed10);
    return ev;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker::dice_hfe_VoteEvent_createEvent (0x415b90)