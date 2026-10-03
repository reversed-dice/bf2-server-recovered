// FUNCTION: BF2 0x4b5090
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x7c];
    int field;
    int getVehicleRevive() const;
};
int ScoreManager::getVehicleRevive() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_getVehicleRevive (0x4b5090)
