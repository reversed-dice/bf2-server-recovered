// FUNCTION: BF2 0x4949e0
class dice_hfe_Player {
public:
    void setAutoReload_bool(unsigned char);
};

void dice_hfe_Player::setAutoReload_bool(unsigned char value) {
    *(unsigned char*)((char*)this + 0x450) = value;
}
