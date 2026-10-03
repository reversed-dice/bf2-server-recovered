// FUNCTION: BF2 0x5c5d70
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x50];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x5c5d70(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WeaponHudCompTemplate_setGuiIndex_int (0x5c5d70)
