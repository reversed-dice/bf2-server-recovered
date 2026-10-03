// FUNCTION: BF2 0x4a2810
class dice_hfe_Player {
public:
    int getSquadInviteMask_const() const;
};

int dice_hfe_Player::getSquadInviteMask_const() const {
    return *(int*)((char*)this + 0x160);
}
