// FUNCTION: BF2 0x415dd0
namespace dice { namespace hfe {

class GameEvent;
void GameEvent_GameEvent(GameEvent*);

class GameEventMakerMaker {
public:
    GameEvent* createEvent();
};

GameEvent* GameEventMakerMaker::createEvent()
{
    GameEvent* ev = static_cast<GameEvent*>(operator new(0x18));
    GameEvent_GameEvent(ev);
    *reinterpret_cast<void**>(ev) = reinterpret_cast<void*>(0xb2d2f0ULL);
    return ev;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker_dice_hfe_LeaveSquadEvent_createEvent (0x415dd0)