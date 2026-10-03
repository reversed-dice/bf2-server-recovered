// FUNCTION: BF2 0x642bc0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x3c];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x642bc0(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WindAffectorTemplate_setWindRadialFalloff_float (0x642bc0)
