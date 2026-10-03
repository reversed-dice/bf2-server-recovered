// FUNCTION: BF2 0x473090
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x488];
    bool field;
    int getNoVehiclesMode() const;
};
int GameLogic::getNoVehiclesMode() const { return (int)field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getNoVehiclesMode (0x473090)
