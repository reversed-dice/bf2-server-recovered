// FUNCTION: BF2 0x4a2700
class dice_hfe_Player {
public:
    void setIsInsideCP_bool(unsigned char);
};

void dice_hfe_Player::setIsInsideCP_bool(unsigned char value) {
    *(unsigned char*)((char*)this + 0x148) = value;
}
