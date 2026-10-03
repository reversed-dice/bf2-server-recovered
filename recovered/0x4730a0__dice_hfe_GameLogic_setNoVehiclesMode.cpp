// FUNCTION: BF2 0x4730a0
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x488];
    bool field;
    void setNoVehiclesMode(bool v);
};
void GameLogic::setNoVehiclesMode(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_setNoVehiclesMode (0x4730a0)
