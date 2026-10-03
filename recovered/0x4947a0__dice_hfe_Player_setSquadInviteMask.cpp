// FUNCTION: BF2 0x4947a0
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x160];
    int field;
    void setSquadInviteMask(int v);
};
void Player::setSquadInviteMask(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setSquadInviteMask (0x4947a0)
