// FUNCTION: BF2 0x5aee10
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x1a];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5aee10(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_AbilityGLCompTemplate_getHasAmmoAbility (0x5aee10)
