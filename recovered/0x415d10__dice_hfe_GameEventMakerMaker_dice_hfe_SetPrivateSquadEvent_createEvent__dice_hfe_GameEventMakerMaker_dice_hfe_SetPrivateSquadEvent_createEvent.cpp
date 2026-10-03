// FUNCTION: BF2 0x415d10
namespace dice { namespace hfe {

struct GameEvent {
    void* vptr;
    int m_field_08;
    int m_field_0c;
};

void GameEvent_GameEvent(GameEvent* self);

class GameEventMakerMaker {
public:
    GameEvent* SetPrivateSquadEvent_createEvent();
};

GameEvent* GameEventMakerMaker::SetPrivateSquadEvent_createEvent()
{
    void* raw = ::operator new(0x18);
    GameEvent* ev = static_cast<GameEvent*>(raw);
    GameEvent_GameEvent(static_cast<GameEvent*>(raw));
    GameEvent* result = ev;
    ev->vptr = reinterpret_cast<void*>(0xb2df90ULL);
    return result;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_SetPrivateSquadEvent_createEvent (0x415d10)