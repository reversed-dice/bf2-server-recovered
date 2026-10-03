// FUNCTION: BF2 0x5aedc0
namespace dice { namespace hfe {
class AbilityGLCompTemplate {
public:
    char _pad[0x18];
    bool field;
    void setHasHealingAbility(bool v);
};
void AbilityGLCompTemplate::setHasHealingAbility(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_AbilityGLCompTemplate_setHasHealingAbility (0x5aedc0)
