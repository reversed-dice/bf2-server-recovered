// FUNCTION: BF2 0x4a2840
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x284];
    int field;
    void setCurrentFiringButton(int v);
};
void Player::setCurrentFiringButton(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setCurrentFiringButton (0x4a2840)
