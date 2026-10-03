// FUNCTION: BF2 0x475700
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x3a1];
    bool field;
    void setEnableVoHelp(bool v);
};
void GameLogic::setEnableVoHelp(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_setEnableVoHelp (0x475700)
