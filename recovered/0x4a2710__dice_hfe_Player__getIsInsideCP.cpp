// FUNCTION: BF2 0x4a2710
class dice_hfe_Player {
public:
    unsigned char getIsInsideCP();
};

unsigned char dice_hfe_Player::getIsInsideCP() {
    return *(unsigned char*)((char*)this + 0x148);
}
