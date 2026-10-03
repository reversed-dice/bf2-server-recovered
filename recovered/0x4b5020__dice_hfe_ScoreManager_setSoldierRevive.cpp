// FUNCTION: BF2 0x4b5020
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x74];
    int field;
    void setSoldierRevive(int v);
};
void ScoreManager::setSoldierRevive(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_setSoldierRevive (0x4b5020)
