// FUNCTION: BF2 0x475380
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x468];
    bool field;
    void setUseActiveCombatArea(bool v);
};
void GameLogic::setUseActiveCombatArea(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_setUseActiveCombatArea (0x475380)
