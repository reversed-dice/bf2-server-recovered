// FUNCTION: BF2 0x415c50
namespace dice { namespace hfe {

class GameEvent {
public:
    void* vptr;
    int   m_field_08;
    int   m_field_0c;
};

class GameEventMakerMaker {
public:
    GameEvent* SetAcceptOrderEvent_createEvent();
};

void GameEvent_GameEvent(GameEvent* self);

GameEvent* GameEventMakerMaker::SetAcceptOrderEvent_createEvent()
{
    GameEvent* pvVar1 = static_cast<GameEvent*>(::operator new(0x18));
    GameEvent_GameEvent(pvVar1);
    pvVar1->vptr = reinterpret_cast<void*>(0xb2ddd0);
    return pvVar1;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_SetAcceptOrderEvent_createEvent (0x415c50)