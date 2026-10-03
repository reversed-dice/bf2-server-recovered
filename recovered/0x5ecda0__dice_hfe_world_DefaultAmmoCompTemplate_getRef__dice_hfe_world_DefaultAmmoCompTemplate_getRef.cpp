// FUNCTION: BF2 0x5ecda0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x58];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5ecda0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultAmmoCompTemplate_getRef__dice_hfe_world_DefaultAmmoCompTemplate_getRef (0x5ecda0)
