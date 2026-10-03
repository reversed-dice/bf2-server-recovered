// FUNCTION: BF2 0x4a2600
class dice_hfe_Player {
public:
    unsigned char getSprintState_const() const;
};

unsigned char dice_hfe_Player::getSprintState_const() const {
    return *(unsigned char*)((char*)this + 0x1e3);
}
