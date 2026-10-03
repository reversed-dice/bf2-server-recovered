// FUNCTION: BF2 0x4a2ba0
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x68];
    int field;
    int getRef() const;
};
int Player::getRef() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getRef (0x4a2ba0)
