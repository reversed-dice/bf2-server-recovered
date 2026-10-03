// FUNCTION: BF2 0x415940
namespace dice { namespace hfe {

struct GameEvent {
    void* vptr;
    int   m_field_08;
    int   m_field_0c;
};

extern void GameEvent_GameEvent(GameEvent*);

class GameEventMakerMaker {
public:
    GameEvent* RemoveSpawnGroupEvent_createEvent();
};

GameEvent* GameEventMakerMaker::RemoveSpawnGroupEvent_createEvent()
{
    void* mem = operator new(24);
    GameEvent* ev = static_cast<GameEvent*>(mem);
    GameEvent_GameEvent(ev);
    GameEvent* ret = ev;
    ev->vptr = reinterpret_cast<void*>(0xb2dc30);
    return ret;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_RemoveSpawnGroupEvent_createEvent (0x415940)