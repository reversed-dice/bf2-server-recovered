// FUNCTION: BF2 0x4a2450
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x11c];
    int field;
    int getInterpolationTime() const;
};
int Player::getInterpolationTime() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getInterpolationTime (0x4a2450)
