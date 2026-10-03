// FUNCTION: BF2 0x4a25e0
class dice_hfe_Player {
public:
    unsigned char getFlareFiringState_const() const;
};

unsigned char dice_hfe_Player::getFlareFiringState_const() const {
    return *(unsigned char*)((char*)this + 0x1e2);
}
