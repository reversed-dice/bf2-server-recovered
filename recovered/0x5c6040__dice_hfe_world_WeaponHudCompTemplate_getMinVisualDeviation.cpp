// FUNCTION: BF2 0x5c6040
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x60];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x5c6040(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_WeaponHudCompTemplate_getMinVisualDeviation (0x5c6040)
