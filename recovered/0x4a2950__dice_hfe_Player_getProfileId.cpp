// FUNCTION: BF2 0x4a2950
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x408];
    int field;
    int getProfileId() const;
};
int Player::getProfileId() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getProfileId (0x4a2950)
