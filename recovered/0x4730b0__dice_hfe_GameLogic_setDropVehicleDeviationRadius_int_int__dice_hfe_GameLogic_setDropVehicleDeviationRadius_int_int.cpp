// FUNCTION: BF2 0x4730b0
namespace dice { namespace hfe {

class GameLogic {
public:
    void setDropVehicleDeviationRadius(unsigned int, unsigned int);

private:
    unsigned char _gap0[0x350];
    unsigned int m_dropVehicleDeviationRadius1; // offset 0x350
    unsigned int m_dropVehicleDeviationRadius2; // offset 0x354
};

void GameLogic::setDropVehicleDeviationRadius(unsigned int param_2, unsigned int param_3) {
    m_dropVehicleDeviationRadius2 = param_2;
    m_dropVehicleDeviationRadius1 = param_3;
}

} } // namespace dice::hfe
// REVERSED_FUNCTION: dice_hfe_GameLogic_setDropVehicleDeviationRadius_int_int (0x4730b0)