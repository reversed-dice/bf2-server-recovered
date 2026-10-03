// FUNCTION: BF2 0x63fcc0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x114];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x63fcc0(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_setShadowIntensity_float (0x63fcc0)
