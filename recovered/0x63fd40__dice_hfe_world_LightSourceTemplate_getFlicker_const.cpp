// FUNCTION: BF2 0x63fd40
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0xd4];
    float m_v;
    float get() { return m_v; }
};
float get_0x63fd40(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getFlicker_const (0x63fd40)
