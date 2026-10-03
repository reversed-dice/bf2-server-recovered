// FUNCTION: BF2 0x4b5100
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x90];
    int field;
    void setObjective(int v);
};
void ScoreManager::setObjective(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_setObjective (0x4b5100)
