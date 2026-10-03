// FUNCTION: BF2 0x4a2440
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x118];
    int field;
    int getPing() const;
};
int Player::getPing() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getPing (0x4a2440)
