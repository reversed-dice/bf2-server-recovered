// FUNCTION: BF2 0x4b4fa0
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x64];
    int field;
    void setAssistKill(int v);
};
void ScoreManager::setAssistKill(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_setAssistKill (0x4b4fa0)
