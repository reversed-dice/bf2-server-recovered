// FUNCTION: BF2 0x4b5140
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x98];
    int field;
    void setTeamDamage(int v);
};
void ScoreManager::setTeamDamage(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_setTeamDamage (0x4b5140)
