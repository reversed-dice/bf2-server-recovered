// FUNCTION: BF2 0x4a2740
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x2dc];
    int field;
    int getTickCount() const;
};
int Player::getTickCount() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getTickCount (0x4a2740)
