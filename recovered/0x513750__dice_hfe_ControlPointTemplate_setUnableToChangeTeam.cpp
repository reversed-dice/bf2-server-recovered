// FUNCTION: BF2 0x513750
namespace dice { namespace hfe {
class ControlPointTemplate {
public:
    char _pad[0x228];
    bool field;
    void setUnableToChangeTeam(bool v);
};
void ControlPointTemplate::setUnableToChangeTeam(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPointTemplate_setUnableToChangeTeam (0x513750)
