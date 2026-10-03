// FUNCTION: BF2 0x4b50e0
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x8c];
    int field;
    void setControlPointCapture(int v);
};
void ScoreManager::setControlPointCapture(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_setControlPointCapture (0x4b50e0)
