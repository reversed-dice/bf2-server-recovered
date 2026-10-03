// FUNCTION: BF2 0x5b8ad0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1ec];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5b8ad0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_ArmorGLCompTemplate_getHideChildrenOnSpectacularDeath (0x5b8ad0)
