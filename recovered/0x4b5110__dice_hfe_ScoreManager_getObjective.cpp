// FUNCTION: BF2 0x4b5110
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x90];
    int field;
    int getObjective() const;
};
int ScoreManager::getObjective() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_getObjective (0x4b5110)
