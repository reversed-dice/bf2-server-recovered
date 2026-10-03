// FUNCTION: BF2 0x4a2500
class dice_hfe_Player {
public:
    void setFailedExitAtTick_unsigned_int(unsigned int);
};

void dice_hfe_Player::setFailedExitAtTick_unsigned_int(unsigned int value) {
    *(unsigned int*)((char*)this + 0x174) = value;
}
