// FUNCTION: BF2 0x5c5da0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x54];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5c5da0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WeaponHudCompTemplate_getAltGuiIndex (0x5c5da0)
