// FUNCTION: BF2 0x513990
namespace dice { namespace hfe {
class ControlPointTemplate {
public:
    char _pad[0x248];
    int field;
    void setGroupId(int v);
};
void ControlPointTemplate::setGroupId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPointTemplate_setGroupId (0x513990)
