// FUNCTION: BF2 0x473ae0
namespace dice { namespace hfe { namespace world {
class CommanderToolState {
public:
    float m_scanActiveTime;      // +0x0
    float m_unk_0x4;             // +0x4
    float m_unk_0x8;             // +0x8
    float m_unk_0xC;             // +0xC
    unsigned int m_unk_0x10;     // +0x10
    unsigned int m_unk_0x14;     // +0x14
    unsigned int m_unk_0x18;     // +0x18
    unsigned int m_unk_0x1C;     // +0x1C
    unsigned int m_unk_0x20;     // +0x20
    unsigned int m_unk_0x24;     // +0x24
    unsigned int m_unk_0x28;     // +0x28
    unsigned int m_unk_0x2C;     // +0x2C
    unsigned int m_unk_0x30;     // +0x30
    int m_unk_0x34;             // +0x34

    void update_float(float param_1);
};
void CommanderToolState::update_float(float param_1) {
    if (m_scanActiveTime > 0.0f) {
        m_scanActiveTime -= param_1;
    }
    if (m_unk_0x8 > 0.0f) {
        m_unk_0x8 -= param_1;
    }
    if (m_unk_0x4 > 0.0f) {
        m_unk_0x4 -= param_1;
    }
    if (m_unk_0xC > 0.0f) {
        m_unk_0xC -= param_1;
    }
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_CommanderToolState::update_float (0x473ae0)