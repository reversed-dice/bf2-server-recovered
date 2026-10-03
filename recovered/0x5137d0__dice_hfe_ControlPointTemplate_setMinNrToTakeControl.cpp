// FUNCTION: BF2 0x5137d0
namespace dice { namespace hfe {
class ControlPointTemplate {
public:
    char _pad[0x22c];
    int field;
    void setMinNrToTakeControl(int v);
};
void ControlPointTemplate::setMinNrToTakeControl(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPointTemplate_setMinNrToTakeControl (0x5137d0)
