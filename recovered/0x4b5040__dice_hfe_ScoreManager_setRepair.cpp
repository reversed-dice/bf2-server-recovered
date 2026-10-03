// FUNCTION: BF2 0x4b5040
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x78];
    int field;
    void setRepair(int v);
};
void ScoreManager::setRepair(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_setRepair (0x4b5040)
