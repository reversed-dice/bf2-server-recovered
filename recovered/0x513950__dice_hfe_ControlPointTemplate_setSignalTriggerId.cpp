// FUNCTION: BF2 0x513950
namespace dice { namespace hfe {
class ControlPointTemplate {
public:
    char _pad[0x2b8];
    int field;
    void setSignalTriggerId(int v);
};
void ControlPointTemplate::setSignalTriggerId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPointTemplate_setSignalTriggerId (0x513950)
