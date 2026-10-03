// FUNCTION: BF2 0x4a2470
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x110];
    int field;
    int getSpawnGroup() const;
};
int Player::getSpawnGroup() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getSpawnGroup (0x4a2470)
