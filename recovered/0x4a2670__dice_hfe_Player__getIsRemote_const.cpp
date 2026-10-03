// FUNCTION: BF2 0x4a2670
class dice_hfe_Player {
public:
    unsigned char getIsRemote_const() const;
};

unsigned char dice_hfe_Player::getIsRemote_const() const {
    return *(unsigned char*)((char*)this + 0x1e5);
}
