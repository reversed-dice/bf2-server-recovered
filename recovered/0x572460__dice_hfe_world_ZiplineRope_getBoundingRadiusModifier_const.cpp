// FUNCTION: BF2 0x572460
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x230];
    float m_v;
    float get() { return m_v; }
};
float get_0x572460(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ZiplineRope_getBoundingRadiusModifier_const (0x572460)
