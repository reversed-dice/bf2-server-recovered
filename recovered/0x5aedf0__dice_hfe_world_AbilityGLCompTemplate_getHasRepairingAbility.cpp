// FUNCTION: BF2 0x5aedf0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x19];
    bool m_v;
    bool get() { return m_v; }
};
bool get_0x5aedf0(Accessor* p) { return p->get(); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_AbilityGLCompTemplate_getHasRepairingAbility (0x5aedf0)
