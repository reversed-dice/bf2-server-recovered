// FUNCTION: BF2 0x4a2540
class dice_hfe_Player {
public:
    unsigned char getIsGivingReplenish_const() const;
};

unsigned char dice_hfe_Player::getIsGivingReplenish_const() const {
    return *(unsigned char*)((char*)this + 0x17a);
}
