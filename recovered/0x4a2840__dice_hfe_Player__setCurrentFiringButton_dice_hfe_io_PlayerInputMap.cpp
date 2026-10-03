// FUNCTION: BF2 0x4a2840
class dice_hfe_Player {
public:
    void setCurrentFiringButton_dice_hfe_io_PlayerInputMap(unsigned int);
};

void dice_hfe_Player::setCurrentFiringButton_dice_hfe_io_PlayerInputMap(unsigned int value) {
    *(unsigned int*)((char*)this + 0x284) = value;
}
