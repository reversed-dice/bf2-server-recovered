// FUNCTION: BF2 0x473230
namespace dice { namespace hfe {

extern unsigned int g_debugMissiles;

class GameLogic {
public:
    static unsigned int getDebugMissiles();
};

unsigned int GameLogic::getDebugMissiles() {
    return g_debugMissiles;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getDebugMissiles (0x473230)