// FUNCTION: BF2 0x621e70
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x621e70(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_FixedTargetComp_getRef (0x621e70)
