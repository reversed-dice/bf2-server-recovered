// FUNCTION: BF2 0x4a2260
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0xd4];
    int field;
    int getId() const;
};
int Player::getId() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getId (0x4a2260)
