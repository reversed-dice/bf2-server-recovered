// FUNCTION: BF2 0x4a2300
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x104];
    int field;
    void setSpawnAtTick(int v);
};
void Player::setSpawnAtTick(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setSpawnAtTick (0x4a2300)
