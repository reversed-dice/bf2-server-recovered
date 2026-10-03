// FUNCTION: BF2 0x415bc0
void* operator new(unsigned long);

namespace dice { namespace hfe {

struct GameEvent {
    void* vptr;
    int m_field_08;
    int m_field_0c;
};

class GameEventMakerMaker {
public:
    void* VoipPlayerMuteEvent_createEvent();
};

void GameEvent_GameEvent(GameEvent* self);

void* GameEventMakerMaker::VoipPlayerMuteEvent_createEvent() {
    GameEvent* ev = static_cast<GameEvent*>(::operator new(0x18));
    GameEvent_GameEvent(ev);
    ev->vptr = reinterpret_cast<void*>(0xb2eb90ULL);
    return ev;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker::dice_hfe_VoipPlayerMuteEvent_createEvent (0x415bc0)