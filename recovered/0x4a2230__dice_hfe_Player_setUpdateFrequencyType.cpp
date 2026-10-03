// FUNCTION: BF2 0x4a2230
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0xd8];
    int field;
    void setUpdateFrequencyType(int v);
};
void Player::setUpdateFrequencyType(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setUpdateFrequencyType (0x4a2230)
