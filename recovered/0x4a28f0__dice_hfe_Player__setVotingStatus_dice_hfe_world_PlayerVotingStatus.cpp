// FUNCTION: BF2 0x4a28f0
class dice_hfe_Player {
public:
    void setVotingStatus_dice_hfe_world_PlayerVotingStatus(unsigned int);
};

void dice_hfe_Player::setVotingStatus_dice_hfe_world_PlayerVotingStatus(unsigned int value) {
    *(unsigned int*)((char*)this + 0x400) = value;
}
