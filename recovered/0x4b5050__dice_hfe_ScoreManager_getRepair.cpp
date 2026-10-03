// FUNCTION: BF2 0x4b5050
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x78];
    int field;
    int getRepair() const;
};
int ScoreManager::getRepair() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_getRepair (0x4b5050)
