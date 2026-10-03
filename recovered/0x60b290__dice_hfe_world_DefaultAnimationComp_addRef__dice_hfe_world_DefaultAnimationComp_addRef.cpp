// FUNCTION: BF2 0x60b290
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x38];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_56(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultAnimationComp_addRef__dice_hfe_world_DefaultAnimationComp_addRef (56)
