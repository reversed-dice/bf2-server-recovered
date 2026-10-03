// FUNCTION: BF2 0x6163b0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x36c];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x6163b0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_GenericProjectile_getPlayedImpactEffectAtTick_const (0x6163b0)
