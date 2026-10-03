// FUNCTION: BF2 0x4730d0
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x354];
    int field;
    int getDropVehicleDeviationMinRadius() const;
};
int GameLogic::getDropVehicleDeviationMinRadius() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getDropVehicleDeviationMinRadius (0x4730d0)
