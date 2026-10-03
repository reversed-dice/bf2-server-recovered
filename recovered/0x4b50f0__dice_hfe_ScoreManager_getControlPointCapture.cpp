// FUNCTION: BF2 0x4b50f0
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x8c];
    int field;
    int getControlPointCapture() const;
};
int ScoreManager::getControlPointCapture() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_getControlPointCapture (0x4b50f0)
