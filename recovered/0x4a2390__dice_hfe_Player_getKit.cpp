// FUNCTION: BF2 0x4a2390
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x78];
    int field;
    int getKit() const;
};
int Player::getKit() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getKit (0x4a2390)
