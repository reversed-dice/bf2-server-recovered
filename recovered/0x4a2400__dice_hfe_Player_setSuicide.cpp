// FUNCTION: BF2 0x4a2400
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0xf6];
    bool field;
    void setSuicide(bool v);
};
void Player::setSuicide(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setSuicide (0x4a2400)
