// FUNCTION: BF2 0x513890
namespace dice { namespace hfe {
class ControlPointTemplate {
public:
    char _pad[0x23c];
    int field;
    void setAreaValueTeam2(int v);
};
void ControlPointTemplate::setAreaValueTeam2(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPointTemplate_setAreaValueTeam2 (0x513890)
