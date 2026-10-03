// FUNCTION: BF2 0x4949d0
class dice_hfe_Player {
public:
    unsigned char getAutoReload_const() const;
};

unsigned char dice_hfe_Player::getAutoReload_const() const {
    return *(unsigned char*)((char*)this + 0x450);
}
