// FUNCTION: BF2 0x473080
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x42c];
    int field;
    void setNextStateChangeAtTick(int v);
};
void GameLogic::setNextStateChangeAtTick(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_setNextStateChangeAtTick (0x473080)
