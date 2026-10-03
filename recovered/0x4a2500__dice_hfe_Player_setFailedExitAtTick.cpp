// FUNCTION: BF2 0x4a2500
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x174];
    int field;
    void setFailedExitAtTick(int v);
};
void Player::setFailedExitAtTick(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setFailedExitAtTick (0x4a2500)
