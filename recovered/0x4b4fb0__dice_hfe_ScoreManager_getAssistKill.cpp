// FUNCTION: BF2 0x4b4fb0
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x64];
    int field;
    int getAssistKill() const;
};
int ScoreManager::getAssistKill() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_getAssistKill (0x4b4fb0)
