// FUNCTION: BF2 0x5c60e0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x80];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5c60e0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WeaponHudCompTemplate_getShowInfo (0x5c60e0)
