// FUNCTION: BF2 0x4a24d0
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x16c];
    int field;
    int getHealRepairedAtTick() const;
};
int Player::getHealRepairedAtTick() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getHealRepairedAtTick (0x4a24d0)
