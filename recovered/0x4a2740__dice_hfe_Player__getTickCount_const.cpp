// FUNCTION: BF2 0x4a2740
class dice_hfe_Player {
public:
    int getTickCount_const() const;
};

int dice_hfe_Player::getTickCount_const() const {
    return *(int*)((char*)this + 0x2dc);
}
