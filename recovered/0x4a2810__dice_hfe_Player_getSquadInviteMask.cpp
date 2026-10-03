// FUNCTION: BF2 0x4a2810
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x160];
    int field;
    int getSquadInviteMask() const;
};
int Player::getSquadInviteMask() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getSquadInviteMask (0x4a2810)
