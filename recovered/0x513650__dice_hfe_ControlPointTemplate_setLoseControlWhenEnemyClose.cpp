// FUNCTION: BF2 0x513650
namespace dice { namespace hfe {
class ControlPointTemplate {
public:
    char _pad[0x226];
    bool field;
    void setLoseControlWhenEnemyClose(bool v);
};
void ControlPointTemplate::setLoseControlWhenEnemyClose(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ControlPointTemplate_setLoseControlWhenEnemyClose (0x513650)
