// FUNCTION: BF2 0x4a26a0
class dice_hfe_Player {
public:
    int getSquadId_const() const;
};

int dice_hfe_Player::getSquadId_const() const {
    return *(int*)((char*)this + 0x130);
}
