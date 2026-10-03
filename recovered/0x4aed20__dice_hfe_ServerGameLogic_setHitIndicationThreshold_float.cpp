// FUNCTION: BF2 0x4aed20
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x550];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x4aed20(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_ServerGameLogic_setHitIndicationThreshold_float (0x4aed20)
