// FUNCTION: BF2 0x5c6010
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x5c];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x5c6010(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WeaponHudCompTemplate_setMaxVisualDeviation_int (0x5c6010)
