// FUNCTION: BF2 0x4a2490
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x168];
    bool field;
    void setFlagHolder(bool v);
};
void Player::setFlagHolder(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setFlagHolder (0x4a2490)
