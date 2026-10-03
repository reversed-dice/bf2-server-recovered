// FUNCTION: BF2 0x4949e0
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x450];
    bool field;
    void setAutoReload(bool v);
};
void Player::setAutoReload(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setAutoReload (0x4949e0)
