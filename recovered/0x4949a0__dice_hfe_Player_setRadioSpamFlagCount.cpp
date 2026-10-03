// FUNCTION: BF2 0x4949a0
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x1b4];
    int field;
    void setRadioSpamFlagCount(int v);
};
void Player::setRadioSpamFlagCount(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setRadioSpamFlagCount (0x4949a0)
