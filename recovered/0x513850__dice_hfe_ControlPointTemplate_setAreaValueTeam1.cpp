// FUNCTION: BF2 0x513850
namespace dice { namespace hfe {
class ControlPointTemplate {
public:
    char _pad[0x238];
    int field;
    void setAreaValueTeam1(int v);
};
void ControlPointTemplate::setAreaValueTeam1(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPointTemplate_setAreaValueTeam1 (0x513850)
