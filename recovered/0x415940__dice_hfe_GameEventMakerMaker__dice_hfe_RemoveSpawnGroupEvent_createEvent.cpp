// FUNCTION: BF2 0x415940
namespace dice { namespace hfe {

struct GameEvent {
    void* vptr;
    unsigned char pad[0x10];
};

void GameEvent_GameEvent(GameEvent* ev);

class GameEventMakerMaker {
public:
    struct GameEvent* dice_hfe_VoteEvent_createEvent();
    struct GameEvent* dice_hfe_RadioMessageEvent_createEvent();
    void* HandlePickupEvent_createEvent();
    void* VoipPlayerMuteEvent_createEvent();
    virtual GameEvent* SetPrivateSquadEvent_createEvent();
    struct GameEvent* dice_hfe_RemoveSpawnGroupEvent_createEvent();

    int m_field_08;
    int m_field_0c;
};

struct GameEvent* GameEventMakerMaker::dice_hfe_RemoveSpawnGroupEvent_createEvent()
{
    struct GameEvent* ev = static_cast<struct GameEvent*>(::operator new(0x18));
    GameEvent_GameEvent(ev);
    ev->vptr = reinterpret_cast<void*>(0xb2dc30ULL);
    return ev;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker::dice_hfe_RemoveSpawnGroupEvent_createEvent (0x415940)