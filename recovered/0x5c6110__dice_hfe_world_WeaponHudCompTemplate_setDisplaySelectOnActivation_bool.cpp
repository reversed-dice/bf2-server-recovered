// FUNCTION: BF2 0x5c6110
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x89];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x5c6110(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WeaponHudCompTemplate_setDisplaySelectOnActivation_bool (0x5c6110)
