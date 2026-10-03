// FUNCTION: BF2 0x4b5130
namespace dice { namespace hfe {
class ScoreManager {
public:
    char _pad[0x94];
    int field;
    int getDriverPassenger() const;
};
int ScoreManager::getDriverPassenger() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_ScoreManager_getDriverPassenger (0x4b5130)
