// FUNCTION: BF2 0x4a2530
class dice_hfe_Player {
public:
    unsigned char getIsRepairing_const() const;
};

unsigned char dice_hfe_Player::getIsRepairing_const() const {
    return *(unsigned char*)((char*)this + 0x179);
}
