// FUNCTION: BF2 0x5138d0
namespace dice { namespace hfe {
class ControlPointTemplate {
public:
    char _pad[0x240];
    int field;
    void setEnemyTicketLossWhenCaptured(int v);
};
void ControlPointTemplate::setEnemyTicketLossWhenCaptured(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPointTemplate_setEnemyTicketLossWhenCaptured (0x5138d0)
