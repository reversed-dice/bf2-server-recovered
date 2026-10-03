// FUNCTION: BF2 0x4730c0
namespace dice { namespace hfe {
class GameLogic {
public:
    char _pad[0x350];
    int field;
    int getDropVehicleDeviationRadius() const;
};
int GameLogic::getDropVehicleDeviationRadius() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getDropVehicleDeviationRadius (0x4730c0)
