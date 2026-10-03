// FUNCTION: BF2 0x475390
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x468];
    bool field;
    int getUseActiveCombatArea() const;
};
int GameLogic::getUseActiveCombatArea() const { return (int)field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getUseActiveCombatArea (0x475390)
