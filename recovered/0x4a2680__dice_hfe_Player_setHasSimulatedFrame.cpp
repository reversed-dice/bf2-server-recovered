// FUNCTION: BF2 0x4a2680
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x1e6];
    bool field;
    void setHasSimulatedFrame(bool v);
};
void Player::setHasSimulatedFrame(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setHasSimulatedFrame (0x4a2680)
