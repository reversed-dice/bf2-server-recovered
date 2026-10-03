// FUNCTION: BF2 0x4948b0
class dice_hfe_Player {
public:
    void setUAVIsReady_bool(unsigned char);
};

void dice_hfe_Player::setUAVIsReady_bool(unsigned char value) {
    *(unsigned char*)((char*)this + 0x136) = value;
}
