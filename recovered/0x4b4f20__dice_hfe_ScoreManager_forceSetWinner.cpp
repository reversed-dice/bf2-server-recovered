// FUNCTION: BF2 0x4b4f20
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0xb4];
    bool field;
    void forceSetWinner(bool v);
};
void ScoreManager::forceSetWinner(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_forceSetWinner (0x4b4f20)
