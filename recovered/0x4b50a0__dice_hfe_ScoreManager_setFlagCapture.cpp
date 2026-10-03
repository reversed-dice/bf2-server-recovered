// FUNCTION: BF2 0x4b50a0
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x84];
    int field;
    void setFlagCapture(int v);
};
void ScoreManager::setFlagCapture(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_setFlagCapture (0x4b50a0)
