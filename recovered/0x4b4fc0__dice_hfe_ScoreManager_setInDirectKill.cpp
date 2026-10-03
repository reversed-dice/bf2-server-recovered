// FUNCTION: BF2 0x4b4fc0
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x68];
    int field;
    void setInDirectKill(int v);
};
void ScoreManager::setInDirectKill(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_setInDirectKill (0x4b4fc0)
