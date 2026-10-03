// FUNCTION: BF2 0x63fbc0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xe8];
    float m_v;
    void set(float v) { m_v = v; }
};
void set_0x63fbc0(Accessor* p, float v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_setProjectorFov_float (0x63fbc0)
