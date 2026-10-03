// FUNCTION: BF2 0x4b4fd0
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x68];
    int field;
    int getInDirectKill() const;
};
int ScoreManager::getInDirectKill() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_getInDirectKill (0x4b4fd0)
