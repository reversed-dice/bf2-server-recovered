// FUNCTION: BF2 0x4b4f60
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x5c];
    int field;
    void setDeath(int v);
};
void ScoreManager::setDeath(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_setDeath (0x4b4f60)
