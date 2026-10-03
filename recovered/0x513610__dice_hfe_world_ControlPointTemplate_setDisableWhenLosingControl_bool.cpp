// FUNCTION: BF2 0x513610
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


void ControlPointTemplate::setDisableWhenLosingControl(bool b) { m_disableWhenLosingControl = b; }

} } }
// REVERSED_FUNCTION: dice_hfe_world_ControlPointTemplate_setDisableWhenLosingControl_bool (0x513610)
