// FUNCTION: BF2 0x513a30
namespace dice { namespace hfe {
class ControlPointTemplate {
public:
    char _pad[0x290];
    bool field;
    void setHoistFlag(bool v);
};
void ControlPointTemplate::setHoistFlag(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPointTemplate_setHoistFlag (0x513a30)
