// FUNCTION: BF2 0x4a2700
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x148];
    bool field;
    void setIsInsideCP(bool v);
};
void Player::setIsInsideCP(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setIsInsideCP (0x4a2700)
