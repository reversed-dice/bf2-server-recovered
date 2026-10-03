// FUNCTION: BF2 0x4a22c0
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0xab];
    bool field;
    void setCommanderCamOverhead(bool v);
};
void Player::setCommanderCamOverhead(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setCommanderCamOverhead (0x4a22c0)
