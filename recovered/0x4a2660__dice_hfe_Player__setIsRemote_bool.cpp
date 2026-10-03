// FUNCTION: BF2 0x4a2660
class dice_hfe_Player {
public:
    void setIsRemote_bool(unsigned char);
};

void dice_hfe_Player::setIsRemote_bool(unsigned char value) {
    *(unsigned char*)((char*)this + 0x1e5) = value;
}
