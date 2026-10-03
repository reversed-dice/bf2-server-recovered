// FUNCTION: BF2 0x5135d0
#include <string>
namespace dice { namespace hfe { namespace world {

class ControlPointTemplate {
public:
    unsigned char _pad[0x224];
    bool m_disableIfEnemyInsideRadius;
    bool m_disableWhenLosingControl;
    bool m_loseControlWhenEnemyClose;
    bool m_loseControlWhenNotClose;
    unsigned char _pad2[0x234 - 0x228];
    unsigned int m_onlyTakeableByTeam;
    void setDisableIfEnemyInsideRadius(bool b);
    void setDisableWhenLosingControl(bool b);
    void setLoseControlWhenEnemyClose(bool b);
    void setLoseControlWhenNotClose(bool b);
    void setOnlyTakeableByTeam(unsigned int t);
};


void ControlPointTemplate::setDisableIfEnemyInsideRadius(bool b) { m_disableIfEnemyInsideRadius = b; }

} } }
// REVERSED_FUNCTION: dice_hfe_world_ControlPointTemplate_setDisableIfEnemyInsideRadius_bool (0x5135d0)
