// FUNCTION: BF2 0x4b5270
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x58];
    int field;
    int getRef() const;
};
int ScoreManager::getRef() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_getRef (0x4b5270)
