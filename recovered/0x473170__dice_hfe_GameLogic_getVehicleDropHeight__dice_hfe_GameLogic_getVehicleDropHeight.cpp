// FUNCTION: BF2 0x473170
namespace dice { namespace hfe {

class GameLogic {
public:
    float getVehicleDropHeight() const;
};

float GameLogic::getVehicleDropHeight() const {
    return *reinterpret_cast<const float*>(reinterpret_cast<const char*>(this) + 0x3ac);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getVehicleDropHeight (0x473170)