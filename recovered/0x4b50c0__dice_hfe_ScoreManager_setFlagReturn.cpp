// FUNCTION: BF2 0x4b50c0
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x88];
    int field;
    void setFlagReturn(int v);
};
void ScoreManager::setFlagReturn(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_setFlagReturn (0x4b50c0)
