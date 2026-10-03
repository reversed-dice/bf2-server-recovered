// FUNCTION: BF2 0x4a2660
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x1e5];
    bool field;
    void setIsRemote(bool v);
};
void Player::setIsRemote(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setIsRemote (0x4a2660)
