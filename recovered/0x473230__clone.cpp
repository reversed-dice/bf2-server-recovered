// FUNCTION: BF2 0x473230
namespace dice { namespace hfe {

extern unsigned int g_debugReplenish;

class GameLogic {
public:
    unsigned int getDebugReplenish();
};

unsigned int GameLogic::getDebugReplenish() {
    return g_debugReplenish;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getDebugReplenish (0x473250)