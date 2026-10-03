// FUNCTION: BF2 0x4a28f0
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x400];
    int field;
    void setVotingStatus(int v);
};
void Player::setVotingStatus(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setVotingStatus (0x4a28f0)
