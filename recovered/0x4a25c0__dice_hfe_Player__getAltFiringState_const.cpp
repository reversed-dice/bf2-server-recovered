// FUNCTION: BF2 0x4a25c0
class dice_hfe_Player {
public:
    unsigned char getAltFiringState_const() const;
};

unsigned char dice_hfe_Player::getAltFiringState_const() const {
    return *(unsigned char*)((char*)this + 0x1e1);
}
