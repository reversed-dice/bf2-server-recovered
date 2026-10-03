// FUNCTION: BF2 0x63fbe0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xec];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x63fbe0(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_setProjectorAspect_float (0x63fbe0)
