// FUNCTION: BF2 0x475710
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x3a1];
    bool field;
    int getEnableVoHelp() const;
};
int GameLogic::getEnableVoHelp() const { return (int)field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getEnableVoHelp (0x475710)
