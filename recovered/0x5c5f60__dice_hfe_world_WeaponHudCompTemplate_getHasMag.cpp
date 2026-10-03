// FUNCTION: BF2 0x5c5f60
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x83];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5c5f60(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WeaponHudCompTemplate_getHasMag (0x5c5f60)
