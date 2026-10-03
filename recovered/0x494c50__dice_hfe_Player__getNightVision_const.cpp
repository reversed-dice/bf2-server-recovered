// FUNCTION: BF2 0x494c50
class dice_hfe_Player {
public:
    unsigned char getNightVision_const() const;
};

unsigned char dice_hfe_Player::getNightVision_const() const {
    return *(unsigned char*)((char*)this + 0x458);
}
