// FUNCTION: BF2 0x63fcf0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x118];
    float m_v;
    float get() { return m_v; }
};
float get_0x63fcf0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_LightSourceTemplate_getSoftness_const (0x63fcf0)
