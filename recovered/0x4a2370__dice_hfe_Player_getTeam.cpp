// FUNCTION: BF2 0x4a2370
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0xf8];
    int field;
    int getTeam() const;
};
int Player::getTeam() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getTeam (0x4a2370)
