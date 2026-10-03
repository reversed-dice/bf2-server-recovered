// FUNCTION: BF2 0x63dda0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x260];
    float m_v;
    float get() { return m_v; }
};
float get_0x63dda0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSource_getConeAngleRads1_const (0x63dda0)
