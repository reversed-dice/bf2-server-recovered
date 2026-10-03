// FUNCTION: BF2 0x5ef0c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x88];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5ef0c0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ReplenishingAmmoComp_getRef__dice_hfe_world_ReplenishingAmmoComp_getRef (0x5ef0c0)
