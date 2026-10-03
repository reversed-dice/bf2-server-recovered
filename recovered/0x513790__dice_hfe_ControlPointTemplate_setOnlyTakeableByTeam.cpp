// FUNCTION: BF2 0x513790
namespace dice { namespace hfe {
class ControlPointTemplate {
public:
    char _pad[0x234];
    int field;
    void setOnlyTakeableByTeam(int v);
};
void ControlPointTemplate::setOnlyTakeableByTeam(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPointTemplate_setOnlyTakeableByTeam (0x513790)
