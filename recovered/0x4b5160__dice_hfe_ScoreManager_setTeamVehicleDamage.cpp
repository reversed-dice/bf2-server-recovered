// FUNCTION: BF2 0x4b5160
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x9c];
    int field;
    void setTeamVehicleDamage(int v);
};
void ScoreManager::setTeamVehicleDamage(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_setTeamVehicleDamage (0x4b5160)
