// FUNCTION: BF2 0x4b7a40
namespace dice { namespace hfe {

class GameLogic {
public:
    float getExtraUAVVehicleFlightHeight() const;

private:
    unsigned char m_pad[0x1c];
    float m_extraUAVVehicleFlightHeight;
};

float GameLogic::getExtraUAVVehicleFlightHeight() const {
    return m_extraUAVVehicleFlightHeight;
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getExtraUAVVehicleFlightHeight_const (0x473130)