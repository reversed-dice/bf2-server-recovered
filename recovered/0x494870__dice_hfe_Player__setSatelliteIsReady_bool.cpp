// FUNCTION: BF2 0x494870
class dice_hfe_Player {
public:
    void setSatelliteIsReady_bool(unsigned char);
};

void dice_hfe_Player::setSatelliteIsReady_bool(unsigned char value) {
    *(unsigned char*)((char*)this + 0x137) = value;
}
