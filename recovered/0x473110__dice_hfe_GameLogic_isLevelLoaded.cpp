// FUNCTION: BF2 0x473110
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0xac];
    bool field;
    int isLevelLoaded() const;
};
int GameLogic::isLevelLoaded() const { return (int)field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_isLevelLoaded (0x473110)
