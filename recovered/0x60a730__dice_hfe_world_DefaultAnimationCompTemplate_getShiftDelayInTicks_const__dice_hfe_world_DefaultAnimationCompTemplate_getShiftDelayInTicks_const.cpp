// FUNCTION: BF2 0x60a730
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x20];
    unsigned int m_v;
    unsigned int get() { return m_v; }
};
unsigned int get_0x60a730(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultAnimationCompTemplate_getShiftDelayInTicks_const__dice_hfe_world_DefaultAnimationCompTemplate_getShiftDelayInTicks_const (0x60a730)
