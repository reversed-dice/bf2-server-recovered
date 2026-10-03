// FUNCTION: BF2 0x60b150
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x24];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x60b150(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_DefaultAnimationCompTemplate_getLoopingFire (0x60b150)
