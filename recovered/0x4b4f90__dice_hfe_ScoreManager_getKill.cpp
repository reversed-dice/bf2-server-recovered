// FUNCTION: BF2 0x4b4f90
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x60];
    int field;
    int getKill() const;
};
int ScoreManager::getKill() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_getKill (0x4b4f90)
