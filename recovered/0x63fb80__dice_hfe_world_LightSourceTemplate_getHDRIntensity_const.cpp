// FUNCTION: BF2 0x63fb80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xc4];
    float m_v;
    float get() { return m_v; }
};
float get_0x63fb80(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getHDRIntensity_const (0x63fb80)
