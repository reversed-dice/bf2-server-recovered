// FUNCTION: BF2 0x473220
namespace dice { namespace hfe {

unsigned int g_debugReplenish;

class GameLogic {
public:
    void setDebugReplenish(unsigned int val);
};

void GameLogic::setDebugReplenish(unsigned int val) {
    g_debugReplenish = val;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_setDebugReplenish_int (0x473240)