// FUNCTION: BF2 0x4a2460
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x110];
    int field;
    void setSpawnGroup(int v);
};
void Player::setSpawnGroup(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setSpawnGroup (0x4a2460)
