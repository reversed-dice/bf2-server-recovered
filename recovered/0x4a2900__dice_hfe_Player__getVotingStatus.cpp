// FUNCTION: BF2 0x4a2900
class dice_hfe_Player {
public:
    int getVotingStatus();
};

int dice_hfe_Player::getVotingStatus() {
    return *(int*)((char*)this + 0x400);
}
