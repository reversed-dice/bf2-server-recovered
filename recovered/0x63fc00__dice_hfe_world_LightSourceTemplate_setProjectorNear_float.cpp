// FUNCTION: BF2 0x63fc00
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xf0];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x63fc00(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_setProjectorNear_float (0x63fc00)
