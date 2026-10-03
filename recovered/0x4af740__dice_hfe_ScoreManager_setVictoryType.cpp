// FUNCTION: BF2 0x4af740
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0xb5];
    bool field;
    void setVictoryType(bool v);
};
void ScoreManager::setVictoryType(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_setVictoryType (0x4af740)
