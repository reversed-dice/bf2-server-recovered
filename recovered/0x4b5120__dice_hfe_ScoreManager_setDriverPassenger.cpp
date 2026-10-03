// FUNCTION: BF2 0x4b5120
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x94];
    int field;
    void setDriverPassenger(int v);
};
void ScoreManager::setDriverPassenger(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_setDriverPassenger (0x4b5120)
