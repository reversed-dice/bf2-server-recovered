// FUNCTION: BF2 0x415bf0
namespace dice { namespace hfe {
struct GameEvent {
    void* vptr;       // 0x00
    int   m_field_08; // 0x08
    int   m_field_0c; // 0x0C
    char  _pad[8];    // 0x10..0x18
    GameEvent();
};

class GameEventMakerMaker {
public:
    struct GameEvent* dice_hfe_VoipOnOffEvent_createEvent();
    int m_field_08;  // +0x8
    int m_field_0c;  // +0xC
};

struct GameEvent* GameEventMakerMaker::dice_hfe_VoipOnOffEvent_createEvent() {
    struct GameEvent* obj = new struct GameEvent();
    obj->vptr = reinterpret_cast<void*>(0xb2eab0ULL);
    return obj;
}
} }
// REVERSED_FUNCTION: dice_hfe_GameEventMakerMaker::dice_hfe_VoipOnOffEvent_createEvent (0x415bf0)