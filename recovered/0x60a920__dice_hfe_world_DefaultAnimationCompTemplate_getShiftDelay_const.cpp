// FUNCTION: BF2 0x60a920
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1c];
    float m_v;
    float get() { return m_v; }
};
float get_0x60a920(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultAnimationCompTemplate_getShiftDelay_const (0x60a920)
