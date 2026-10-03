// FUNCTION: BF2 0x513610
namespace dice { namespace hfe {
class ControlPointTemplate {
public:
    char _pad[0x225];
    bool field;
    void setDisableWhenLosingControl(bool v);
};
void ControlPointTemplate::setDisableWhenLosingControl(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPointTemplate_setDisableWhenLosingControl (0x513610)
