// FUNCTION: BF2 0x63fba0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xcc];
    float m_v;
    float get() { return m_v; }
};
float get_0x63fba0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getConeAngle2_const (0x63fba0)
