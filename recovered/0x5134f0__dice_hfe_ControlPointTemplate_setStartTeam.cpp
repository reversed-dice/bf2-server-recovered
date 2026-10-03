// FUNCTION: BF2 0x5134f0
namespace dice { namespace hfe {
class ControlPointTemplate {
public:
    char _pad[0x208];
    int field;
    void setStartTeam(int v);
};
void ControlPointTemplate::setStartTeam(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPointTemplate_setStartTeam (0x5134f0)
