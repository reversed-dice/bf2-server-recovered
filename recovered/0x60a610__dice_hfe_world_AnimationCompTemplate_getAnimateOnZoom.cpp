// FUNCTION: BF2 0x60a610
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x10];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x60a610(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_AnimationCompTemplate_getAnimateOnZoom (0x60a610)
