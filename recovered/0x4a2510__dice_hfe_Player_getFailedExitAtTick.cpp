// FUNCTION: BF2 0x4a2510
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x174];
    int field;
    int getFailedExitAtTick() const;
};
int Player::getFailedExitAtTick() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getFailedExitAtTick (0x4a2510)
