// FUNCTION: BF2 0x4b50b0
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x84];
    int field;
    int getFlagCapture() const;
};
int ScoreManager::getFlagCapture() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_getFlagCapture (0x4b50b0)
