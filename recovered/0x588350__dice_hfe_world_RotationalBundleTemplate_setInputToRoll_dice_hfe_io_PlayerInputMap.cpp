// FUNCTION: BF2 0x588350
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x25c];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x588350(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_RotationalBundleTemplate_setInputToRoll_dice_hfe_io_PlayerInputMap (0x588350)
