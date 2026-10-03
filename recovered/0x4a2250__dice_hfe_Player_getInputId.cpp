// FUNCTION: BF2 0x4a2250
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0xd0];
    int field;
    int getInputId() const;
};
int Player::getInputId() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getInputId (0x4a2250)
