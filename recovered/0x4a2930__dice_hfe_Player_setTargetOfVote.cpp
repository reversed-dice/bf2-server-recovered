// FUNCTION: BF2 0x4a2930
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x405];
    bool field;
    void setTargetOfVote(bool v);
};
void Player::setTargetOfVote(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setTargetOfVote (0x4a2930)
