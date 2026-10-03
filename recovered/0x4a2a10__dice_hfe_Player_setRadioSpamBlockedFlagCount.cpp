// FUNCTION: BF2 0x4a2a10
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x1b8];
    int field;
    void setRadioSpamBlockedFlagCount(int v);
};
void Player::setRadioSpamBlockedFlagCount(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setRadioSpamBlockedFlagCount (0x4a2a10)
