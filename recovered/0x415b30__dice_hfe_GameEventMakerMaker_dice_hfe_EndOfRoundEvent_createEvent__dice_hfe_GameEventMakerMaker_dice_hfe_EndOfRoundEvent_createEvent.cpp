// FUNCTION: BF2 0x415b30
namespace dice { namespace hfe {

struct GameEvent;

void GameEvent_GameEvent(GameEvent*);

struct GameEvent {
    void* vptr;
    int   m_field_08;
    int   m_field_0c;
};

class GameEventMakerMaker {
public:
    GameEvent* EndOfRoundEvent_createEvent();
};

GameEvent* GameEventMakerMaker::EndOfRoundEvent_createEvent()
{
    GameEvent* ev = (GameEvent*)::operator new(0x20);
    GameEvent_GameEvent(ev);
    ev->vptr = (void*)0xb2c550ULL;
    return ev;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_EndOfRoundEvent_createEvent (0x415b30)