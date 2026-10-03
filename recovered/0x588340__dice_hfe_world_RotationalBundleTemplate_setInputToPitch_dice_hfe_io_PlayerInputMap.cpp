// FUNCTION: BF2 0x588340
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x258];
    unsigned int m_v;
    void set(unsigned int v) { m_v = v; }
};
void set_0x588340(Accessor* p, unsigned int v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_RotationalBundleTemplate_setInputToPitch_dice_hfe_io_PlayerInputMap (0x588340)
