// FUNCTION: BF2 0x4b5150
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x98];
    int field;
    int getTeamDamage() const;
};
int ScoreManager::getTeamDamage() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_getTeamDamage (0x4b5150)
