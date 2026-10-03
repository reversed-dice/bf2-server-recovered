// FUNCTION: BF2 0x4a26f0
class dice_hfe_Player {
public:
    unsigned char getIsSquadLeader_const() const;
};

unsigned char dice_hfe_Player::getIsSquadLeader_const() const {
    return *(unsigned char*)((char*)this + 0x135);
}
