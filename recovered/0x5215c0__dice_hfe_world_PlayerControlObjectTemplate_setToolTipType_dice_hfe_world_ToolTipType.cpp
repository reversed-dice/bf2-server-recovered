// FUNCTION: BF2 0x5215c0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x310];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x5215c0(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_PlayerControlObjectTemplate_setToolTipType_dice_hfe_world_ToolTipType (0x5215c0)
