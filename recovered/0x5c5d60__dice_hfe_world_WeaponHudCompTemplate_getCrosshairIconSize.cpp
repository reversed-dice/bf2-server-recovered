// FUNCTION: BF2 0x5c5d60
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x64];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5c5d60(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WeaponHudCompTemplate_getCrosshairIconSize (0x5c5d60)
