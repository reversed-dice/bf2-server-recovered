// FUNCTION: BF2 0x4b5030
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x74];
    int field;
    int getSoldierRevive() const;
};
int ScoreManager::getSoldierRevive() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_getSoldierRevive (0x4b5030)
