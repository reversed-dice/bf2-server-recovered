// FUNCTION: BF2 0x415a90
namespace dice { namespace hfe {

class GameEvent {
public:
    void* vptr;
};

void GameEvent_GameEvent(GameEvent* ev);

class GameEventMakerMaker {
public:
    GameEvent* VoipSessionEvent_createEvent();
};

GameEvent* GameEventMakerMaker::VoipSessionEvent_createEvent()
{
    GameEvent* ev = static_cast<GameEvent*>(operator new(0x18));
    GameEvent_GameEvent(ev);
    ev->vptr = reinterpret_cast<void*>(0xb2ec50);
    return ev;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_VoipSessionEvent_createEvent (0x415a90)