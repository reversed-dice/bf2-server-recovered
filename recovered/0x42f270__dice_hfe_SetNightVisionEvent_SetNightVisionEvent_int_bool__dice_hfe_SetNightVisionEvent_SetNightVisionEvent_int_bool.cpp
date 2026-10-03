// FUNCTION: BF2 0x42f270
namespace dice { namespace hfe {

class GameEvent {
public:
    char _pad[0x10];
    GameEvent();
};

class SetNightVisionEvent_SetNightVisionEvent : public GameEvent {
public:
    unsigned int m_unk_0x2;      // +0x10
    unsigned char m_unk_0x14;    // +0x14

    SetNightVisionEvent_SetNightVisionEvent(unsigned int param_1, unsigned char param_2);
};

SetNightVisionEvent_SetNightVisionEvent::SetNightVisionEvent_SetNightVisionEvent(
    unsigned int param_1, unsigned char param_2) : GameEvent()
{
    m_unk_0x2 = param_1;
    m_unk_0x14 = param_2;
    *reinterpret_cast<void**>(this) = reinterpret_cast<void*>(0xb2deb0);
}

} }
// REVERSED_FUNCTION: dice_hfe_SetNightVisionEvent_SetNightVisionEvent_int_bool (0x42f270)