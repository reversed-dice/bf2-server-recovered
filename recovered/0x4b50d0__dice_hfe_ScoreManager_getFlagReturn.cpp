// FUNCTION: BF2 0x4b50d0
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x88];
    int field;
    int getFlagReturn() const;
};
int ScoreManager::getFlagReturn() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_getFlagReturn (0x4b50d0)
