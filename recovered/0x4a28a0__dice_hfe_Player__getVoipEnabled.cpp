// FUNCTION: BF2 0x4a28a0
class dice_hfe_Player {
public:
    unsigned char getVoipEnabled();
};

unsigned char dice_hfe_Player::getVoipEnabled() {
    return *(unsigned char*)((char*)this + 0x3e8);
}
