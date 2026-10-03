// FUNCTION: BF2 0x4948f0
class dice_hfe_Player {
public:
    unsigned char getOverheadCameraEnabled_const() const;
};

unsigned char dice_hfe_Player::getOverheadCameraEnabled_const() const {
    return *(unsigned char*)((char*)this + 0xa9);
}
