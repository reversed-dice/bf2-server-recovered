// FUNCTION: BF2 0x513b50
namespace dice { namespace hfe {
class ControlPointTemplate {
public:
    char _pad[0x2c9];
    bool field;
    void setHasGreyCapturingState(bool v);
};
void ControlPointTemplate::setHasGreyCapturingState(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPointTemplate_setHasGreyCapturingState (0x513b50)
