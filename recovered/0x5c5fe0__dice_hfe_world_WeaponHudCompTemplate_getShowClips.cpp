// FUNCTION: BF2 0x5c5fe0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x87];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5c5fe0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WeaponHudCompTemplate_getShowClips (0x5c5fe0)
