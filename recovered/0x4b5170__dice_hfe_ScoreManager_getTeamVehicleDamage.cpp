// FUNCTION: BF2 0x4b5170
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x9c];
    int field;
    int getTeamVehicleDamage() const;
};
int ScoreManager::getTeamVehicleDamage() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_getTeamVehicleDamage (0x4b5170)
