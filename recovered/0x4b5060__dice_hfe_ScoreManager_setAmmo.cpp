// FUNCTION: BF2 0x4b5060
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x80];
    int field;
    void setAmmo(int v);
};
void ScoreManager::setAmmo(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_setAmmo (0x4b5060)
