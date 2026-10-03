// FUNCTION: BF2 0x472ff0
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x40c];
    bool field;
    int isVoipClientRunning() const;
};
int GameLogic::isVoipClientRunning() const { return (int)field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_isVoipClientRunning (0x472ff0)
