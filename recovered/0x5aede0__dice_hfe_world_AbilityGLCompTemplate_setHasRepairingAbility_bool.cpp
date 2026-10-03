// FUNCTION: BF2 0x5aede0
namespace dice { namespace hfe { namespace world {
class Accessor {
public:
    unsigned char _pad[0x19];
    bool m_v;
    void set(bool v) { m_v = v; }
};
void set_0x5aede0(Accessor* p, bool v) { p->set(v); }
} } }
// REVERSED_FUNCTION: dice_hfe_world_AbilityGLCompTemplate_setHasRepairingAbility_bool (0x5aede0)
