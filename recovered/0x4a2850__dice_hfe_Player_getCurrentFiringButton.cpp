// FUNCTION: BF2 0x4a2850
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x284];
    int field;
    int getCurrentFiringButton() const;
};
int Player::getCurrentFiringButton() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getCurrentFiringButton (0x4a2850)
