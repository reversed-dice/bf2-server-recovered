// FUNCTION: BF2 0x4a2850
class dice_hfe_Player {
public:
    int getCurrentFiringButton_const() const;
};

int dice_hfe_Player::getCurrentFiringButton_const() const {
    return *(int*)((char*)this + 0x284);
}
