// FUNCTION: BF2 0x415b90
namespace dice { namespace hfe {

struct GameEvent {
    void* vptr;
    int m_field_08;
    int m_field_0c;
};

void GameEvent_GameEvent(GameEvent*);

class GameEventMakerMaker {
public:
    void* VoteEvent_createEvent();
};

void* GameEventMakerMaker::VoteEvent_createEvent() {
    GameEvent* evt = static_cast<GameEvent*>(::operator new(0x28));
    GameEvent_GameEvent(evt);
    evt->vptr = reinterpret_cast<void*>(0xb2ed10ULL);
    return evt;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_VoteEvent_createEvent (0x415b90)