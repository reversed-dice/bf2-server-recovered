// FUNCTION: BF2 0x4a2620
class dice_hfe_Player {
public:
    unsigned char getSprintStateLastTick_const() const;
};

unsigned char dice_hfe_Player::getSprintStateLastTick_const() const {
    return *(unsigned char*)((char*)this + 0x1e4);
}
