// FUNCTION: BF2 0x5aa0f0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x220];
    float m_v;
    float get() { return m_v; }
};
float get_0x5aa0f0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_SpriteParticle_getVisualBoundingRadius_const (0x5aa0f0)
