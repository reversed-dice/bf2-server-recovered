// FUNCTION: BF2 0x473040
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0xa8];
    int field;
    int getGameStatus() const;
};
int GameLogic::getGameStatus() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getGameStatus (0x473040)
