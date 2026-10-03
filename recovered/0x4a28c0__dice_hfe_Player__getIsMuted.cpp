// FUNCTION: BF2 0x4a28c0
class dice_hfe_Player {
public:
    unsigned char getIsMuted();
};

unsigned char dice_hfe_Player::getIsMuted() {
    return *(unsigned char*)((char*)this + 0x3ec);
}
