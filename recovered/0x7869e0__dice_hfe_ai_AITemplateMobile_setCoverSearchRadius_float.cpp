// FUNCTION: BF2 0x7869e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x18];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x7869e0(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_ai_AITemplateMobile_setCoverSearchRadius_float (0x7869e0)
