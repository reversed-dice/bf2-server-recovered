// FUNCTION: BF2 0x4b4f80
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x60];
    int field;
    void setKill(int v);
};
void ScoreManager::setKill(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_setKill (0x4b4f80)
