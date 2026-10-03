// FUNCTION: BF2 0x513b10
namespace dice { namespace hfe {
class ControlPointTemplate {
public:
    char _pad[0x2c8];
    bool field;
    void setForSoldierOnly(bool v);
};
void ControlPointTemplate::setForSoldierOnly(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPointTemplate_setForSoldierOnly (0x513b10)
