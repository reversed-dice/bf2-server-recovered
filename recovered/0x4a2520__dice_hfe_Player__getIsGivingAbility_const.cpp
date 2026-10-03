// FUNCTION: BF2 0x4a2520
class dice_hfe_Player {
public:
    unsigned char getIsGivingAbility_const() const;
};

unsigned char dice_hfe_Player::getIsGivingAbility_const() const {
    return *(unsigned char*)((char*)this + 0x178);
}
