// FUNCTION: BF2 0x42f2c0
namespace dice { namespace hfe {

class GameEvent {
public:
    GameEvent();
    virtual ~GameEvent();
    char _pad[0x08];
};

class SetNightVisionEvent : public GameEvent {
public:
    SetNightVisionEvent(unsigned int param_2, bool param_3);

    unsigned int m_unk_0x2;
    unsigned char m_unk_0x14;
};

SetNightVisionEvent::SetNightVisionEvent(unsigned int param_2, bool param_3) {
    m_unk_0x2 = param_2;
    m_unk_0x14 = param_3;
}

} }
// REVERSED_FUNCTION: dice_hfe_SetNightVisionEvent_SetNightVisionEvent_int_bool (0x42f2c0)