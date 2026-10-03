// FUNCTION: BF2 0x4a2910
class dice_hfe_Player {
public:
    void setParticipateInVoting_bool(unsigned char);
};

void dice_hfe_Player::setParticipateInVoting_bool(unsigned char value) {
    *(unsigned char*)((char*)this + 0x404) = value;
}
