// FUNCTION: BF2 0x4a2310
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x104];
    int field;
    int getSpawnAtTick() const;
};
int Player::getSpawnAtTick() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getSpawnAtTick (0x4a2310)
