// FUNCTION: BF2 0x5b4c90
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x2dc];
    float m_v;
    float get() { return m_v; }
};
float get_0x5b4c90(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLComp_getAccumulatedDamageNorm_const (0x5b4c90)
