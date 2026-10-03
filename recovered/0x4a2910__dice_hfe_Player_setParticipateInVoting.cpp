// FUNCTION: BF2 0x4a2910
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x404];
    bool field;
    void setParticipateInVoting(bool v);
};
void Player::setParticipateInVoting(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setParticipateInVoting (0x4a2910)
