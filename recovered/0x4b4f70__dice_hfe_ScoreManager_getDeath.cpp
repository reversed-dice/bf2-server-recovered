// FUNCTION: BF2 0x4b4f70
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x5c];
    int field;
    int getDeath() const;
};
int ScoreManager::getDeath() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_getDeath (0x4b4f70)
