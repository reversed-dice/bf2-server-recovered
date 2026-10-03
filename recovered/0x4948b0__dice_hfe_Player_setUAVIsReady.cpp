// FUNCTION: BF2 0x4948b0
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x136];
    bool field;
    void setUAVIsReady(bool v);
};
void Player::setUAVIsReady(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setUAVIsReady (0x4948b0)
