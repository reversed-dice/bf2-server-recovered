// FUNCTION: BF2 0x5aee00
namespace dice { namespace hfe {
class AbilityGLCompTemplate {
public:
    char _pad[0x1a];
    bool field;
    void setHasAmmoAbility(bool v);
};
void AbilityGLCompTemplate::setHasAmmoAbility(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_AbilityGLCompTemplate_setHasAmmoAbility (0x5aee00)
