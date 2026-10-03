// FUNCTION: BF2 0x4a2790
class dice_hfe_Player {
public:
    unsigned char getIsConnected_const() const;
};

unsigned char dice_hfe_Player::getIsConnected_const() const {
    return *(unsigned char*)((char*)this + 0x200);
}
