// FUNCTION: BF2 0x4732b0
namespace dice { namespace hfe {

class GameLogic {
public:
    float getSatelliteScanVisibleTime() const;
};

float GameLogic::getSatelliteScanVisibleTime() const {
    // offset 0x464
    return *reinterpret_cast<const float*>(reinterpret_cast<const char*>(this) + 0x464);
}

} }
// REVERSED_FUNCTION: dice_hfe_GameLogic_getSatelliteScanVisibleTime_const (0x4732b0)