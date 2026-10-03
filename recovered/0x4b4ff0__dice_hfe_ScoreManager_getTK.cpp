// FUNCTION: BF2 0x4b4ff0
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x6c];
    int field;
    int getTK() const;
};
int ScoreManager::getTK() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_getTK (0x4b4ff0)
