// FUNCTION: BF2 0x4b5070
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x80];
    int field;
    int getAmmo() const;
};
int ScoreManager::getAmmo() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_getAmmo (0x4b5070)
