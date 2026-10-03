// FUNCTION: BF2 0x6760c0
namespace dice { namespace hfe {
class PlayerUnlockInfo {
public:
    char _pad[0x64];
    bool field;
    void setRanked(bool v);
};
void PlayerUnlockInfo::setRanked(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_PlayerUnlockInfo_setRanked (0x6760c0)
