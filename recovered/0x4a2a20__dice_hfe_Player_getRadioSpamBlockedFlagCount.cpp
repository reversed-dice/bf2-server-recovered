// FUNCTION: BF2 0x4a2a20
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x1b8];
    int field;
    int getRadioSpamBlockedFlagCount() const;
};
int Player::getRadioSpamBlockedFlagCount() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getRadioSpamBlockedFlagCount (0x4a2a20)
