// FUNCTION: BF2 0x4a2220
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0xd8];
    int field;
    int getUpdateFrequencyType() const;
};
int Player::getUpdateFrequencyType() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getUpdateFrequencyType (0x4a2220)
