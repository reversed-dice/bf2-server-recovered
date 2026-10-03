// FUNCTION: BF2 0x4731a0
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x3c0];
    int field;
    void setFeslEnvironment(int v);
};
void GameLogic::setFeslEnvironment(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_setFeslEnvironment (0x4731a0)
