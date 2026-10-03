// FUNCTION: BF2 0x4a2680
class dice_hfe_Player {
public:
    void setHasSimulatedFrame_bool(unsigned char);
};

void dice_hfe_Player::setHasSimulatedFrame_bool(unsigned char value) {
    *(unsigned char*)((char*)this + 0x1e6) = value;
}
