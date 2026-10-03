// FUNCTION: BF2 0x473060
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x428];
    int field;
    void setBeginRoundState(int v);
};
void GameLogic::setBeginRoundState(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_setBeginRoundState (0x473060)
