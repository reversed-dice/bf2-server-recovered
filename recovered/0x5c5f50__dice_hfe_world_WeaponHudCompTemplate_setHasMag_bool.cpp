// FUNCTION: BF2 0x5c5f50
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x83];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x5c5f50(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WeaponHudCompTemplate_setHasMag_bool (0x5c5f50)
