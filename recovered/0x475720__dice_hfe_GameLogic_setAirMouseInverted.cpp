// FUNCTION: BF2 0x475720
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x420];
    bool field;
    void setAirMouseInverted(bool v);
};
void GameLogic::setAirMouseInverted(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_setAirMouseInverted (0x475720)
