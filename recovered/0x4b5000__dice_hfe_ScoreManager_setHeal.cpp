// FUNCTION: BF2 0x4b5000
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x70];
    int field;
    void setHeal(int v);
};
void ScoreManager::setHeal(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_setHeal (0x4b5000)
