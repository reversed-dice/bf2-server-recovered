// FUNCTION: BF2 0x5ef140
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x88];
    unsigned int m_v;
    unsigned int inc() { return ++m_v; }
};
unsigned int f_136(Accessor* p) { return p->inc(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ReplenishingAmmoComp_addRef (136)
