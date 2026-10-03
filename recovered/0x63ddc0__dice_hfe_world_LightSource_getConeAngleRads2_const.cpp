// FUNCTION: BF2 0x63ddc0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x268];
    float m_v;
    float get() { return m_v; }
};
float get_0x63ddc0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSource_getConeAngleRads2_const (0x63ddc0)
