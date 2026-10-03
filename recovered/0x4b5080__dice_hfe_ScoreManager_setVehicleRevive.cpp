// FUNCTION: BF2 0x4b5080
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x7c];
    int field;
    void setVehicleRevive(int v);
};
void ScoreManager::setVehicleRevive(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_setVehicleRevive (0x4b5080)
