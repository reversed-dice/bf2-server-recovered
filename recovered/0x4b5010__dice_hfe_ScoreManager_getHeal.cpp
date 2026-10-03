// FUNCTION: BF2 0x4b5010
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x70];
    int field;
    int getHeal() const;
};
int ScoreManager::getHeal() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_getHeal (0x4b5010)
