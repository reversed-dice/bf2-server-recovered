// FUNCTION: BF2 0x50cf00
namespace dice { namespace hfe { namespace world {
class AreaObjectTemplate {
public:
    char pad[0x210];
    float m_unk_0x210;
    float m_unk_0x214;
    float m_unk_0x218;
    float m_unk_0x21c;
    float m_unk_0x220;
    float m_unk_0x224;
    float m_unk_0x228;
    char pad2[0x8];
    unsigned char m_unk_0x234;
    void setTriggerRadius(float param_1);
};
void AreaObjectTemplate::setTriggerRadius(float param_1) {
    char* base = (char*)(&m_unk_0x214);
    float fVar1 = __builtin_fabsf(param_1);
    m_unk_0x210 = fVar1;
    float doubled = fVar1 + fVar1;
    if (doubled > m_unk_0x220) m_unk_0x220 = doubled;
    if (m_unk_0x214 > doubled) m_unk_0x214 = doubled;
    if (doubled > m_unk_0x224) m_unk_0x224 = doubled;
    if (m_unk_0x218 > doubled) m_unk_0x218 = doubled;
    if (doubled > m_unk_0x228) m_unk_0x228 = doubled;
    if (m_unk_0x21c > doubled) m_unk_0x21c = doubled;
    doubled = -doubled;
    base[0x20] = 1;
    if (doubled > m_unk_0x220) m_unk_0x220 = doubled;
    if (m_unk_0x214 > doubled) m_unk_0x214 = doubled;
    if (doubled > m_unk_0x224) m_unk_0x224 = doubled;
    if (m_unk_0x218 > doubled) m_unk_0x218 = doubled;
    if (doubled > m_unk_0x228) m_unk_0x228 = doubled;
    if (m_unk_0x21c > doubled) m_unk_0x21c = doubled;
    base[0x20] = 1;
}
} } }
// REVERSED_FUNCTION: dice_hfe_world_AreaObjectTemplate::setTriggerRadius_float (0x50cf00)