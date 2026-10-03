// FUNCTION: BF2 0x4a2a00
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x1b4];
    int field;
    int getRadioSpamFlagCount() const;
};
int Player::getRadioSpamFlagCount() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getRadioSpamFlagCount (0x4a2a00)
