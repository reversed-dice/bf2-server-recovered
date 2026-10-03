// FUNCTION: BF2 0x473220
namespace dice { namespace hfe {

extern int g_debugMissiles;

class GameLogic {
public:
    void setDebugMissiles(int value);
};

void GameLogic::setDebugMissiles(int value) {
    g_debugMissiles = value;
}

} }

// REVERSED_FUNCTION: dice_hfe_GameLogic_setDebugMissiles_int (0x473220)