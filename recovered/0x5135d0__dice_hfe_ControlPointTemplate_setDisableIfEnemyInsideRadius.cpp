// FUNCTION: BF2 0x5135d0
namespace dice { namespace hfe {
class ControlPointTemplate {
public:
    char _pad[0x224];
    bool field;
    void setDisableIfEnemyInsideRadius(bool v);
};
void ControlPointTemplate::setDisableIfEnemyInsideRadius(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPointTemplate_setDisableIfEnemyInsideRadius (0x5135d0)
