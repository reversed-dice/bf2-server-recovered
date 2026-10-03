// FUNCTION: BF2 0x415a30
namespace dice { namespace hfe {

class GameEvent {
public:
    void* vptr;
    int m_field_08;
    int m_field_0c;
};

void GameEvent_GameEvent(GameEvent* self);

class GameEventMakerMaker {
public:
    GameEvent* MedalEvent_createEvent();
};

GameEvent* GameEventMakerMaker::MedalEvent_createEvent()
{
    GameEvent* ev = static_cast<GameEvent*>(::operator new(0x20));
    GameEvent_GameEvent(ev);
    ev->vptr = reinterpret_cast<void*>(0xb2d3b0ULL);
    return ev;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_MedalEvent_createEvent (0x415a30)