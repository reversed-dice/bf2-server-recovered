// FUNCTION: BF2 0x473160
namespace dice { namespace hfe {

class GameLogic {
public:
    void setVehicleDropHeight(float height);
private:
    unsigned char m_pad_0x000[0x3ac];
    float m_vehicleDropHeight;
};

void GameLogic::setVehicleDropHeight(float height) {
    m_vehicleDropHeight = height;
}

} } // namespace
// REVERSED_FUNCTION: dice_hfe_GameLogic_setVehicleDropHeight_float (0x473160)