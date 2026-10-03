// FUNCTION: BF2 0x5aede0
namespace dice { namespace hfe {
class AbilityGLCompTemplate {
public:
    char _pad[0x19];
    bool field;
    void setHasRepairingAbility(bool v);
};
void AbilityGLCompTemplate::setHasRepairingAbility(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_AbilityGLCompTemplate_setHasRepairingAbility (0x5aede0)
