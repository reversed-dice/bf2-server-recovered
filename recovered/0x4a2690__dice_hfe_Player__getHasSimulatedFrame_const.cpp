// FUNCTION: BF2 0x4a2690
class dice_hfe_Player {
public:
    unsigned char getHasSimulatedFrame_const() const;
};

unsigned char dice_hfe_Player::getHasSimulatedFrame_const() const {
    return *(unsigned char*)((char*)this + 0x1e6);
}
