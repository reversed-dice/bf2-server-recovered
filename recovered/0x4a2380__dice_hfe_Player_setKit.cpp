// FUNCTION: BF2 0x4a2380
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x78];
    int field;
    void setKit(int v);
};
void Player::setKit(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setKit (0x4a2380)
