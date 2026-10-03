// FUNCTION: BF2 0x5c5d90
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x54];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x5c5d90(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WeaponHudCompTemplate_setAltGuiIndex_int (0x5c5d90)
