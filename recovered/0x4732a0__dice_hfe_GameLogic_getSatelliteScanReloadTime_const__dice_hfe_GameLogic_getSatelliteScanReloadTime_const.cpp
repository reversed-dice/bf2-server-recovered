// FUNCTION: BF2 0x4732a0
namespace dice { namespace hfe {

class GameLogic {
public:
    float getSatelliteScanReloadTime() const;
};

float GameLogic::getSatelliteScanReloadTime() const {
    return *(reinterpret_cast<const float*>(reinterpret_cast<const char*>(this) + 0x460));
}

} } // namespace dice::hfe
// REVERSED_FUNCTION: dice_hfe_GameLogic_getSatelliteScanReloadTime_const (0x4732a0)