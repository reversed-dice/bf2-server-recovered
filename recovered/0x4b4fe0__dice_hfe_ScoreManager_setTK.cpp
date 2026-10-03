// FUNCTION: BF2 0x4b4fe0
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x6c];
    int field;
    void setTK(int v);
};
void ScoreManager::setTK(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_setTK (0x4b4fe0)
