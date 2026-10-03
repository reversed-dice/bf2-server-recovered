// FUNCTION: BF2 0x4947a0
class dice_hfe_Player {
public:
    void setSquadInviteMask_unsigned_int(unsigned int);
};

void dice_hfe_Player::setSquadInviteMask_unsigned_int(unsigned int value) {
    *(unsigned int*)((char*)this + 0x160) = value;
}
