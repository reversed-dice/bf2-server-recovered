// FUNCTION: BF2 0x494830
class dice_hfe_Player {
public:
    unsigned char getIsCommander_const() const;
};

unsigned char dice_hfe_Player::getIsCommander_const() const {
    return *(unsigned char*)((char*)this + 0x134);
}
