// FUNCTION: BF2 0x4a2900
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x400];
    int field;
    int getVotingStatus() const;
};
int Player::getVotingStatus() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getVotingStatus (0x4a2900)
