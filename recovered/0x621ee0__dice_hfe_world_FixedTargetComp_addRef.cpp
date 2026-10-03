// FUNCTION: BF2 0x621ee0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x28];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_40(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_FixedTargetComp_addRef (40)

// re-trigger validate
