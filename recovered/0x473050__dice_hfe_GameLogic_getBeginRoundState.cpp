// FUNCTION: BF2 0x473050
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x428];
    int field;
    int getBeginRoundState() const;
};
int GameLogic::getBeginRoundState() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getBeginRoundState (0x473050)
