// FUNCTION: BF2 0x4a2960
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x408];
    int field;
    void setProfileId(int v);
};
void Player::setProfileId(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setProfileId (0x4a2960)
