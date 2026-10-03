// FUNCTION: BF2 0x5c5f80
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x84];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5c5f80(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WeaponHudCompTemplate_getHasRangeFinder (0x5c5f80)
