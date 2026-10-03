// FUNCTION: BF2 0x60bb00
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x38];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_56(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ThrownAnimationComp_addRef (56)
