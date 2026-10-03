// FUNCTION: BF2 0x473000
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0xad];
    bool field;
    int isLevelLoadedXP() const;
};
int GameLogic::isLevelLoadedXP() const { return (int)field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_isLevelLoadedXP (0x473000)
