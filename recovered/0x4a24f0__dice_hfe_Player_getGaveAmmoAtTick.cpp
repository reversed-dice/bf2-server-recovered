// FUNCTION: BF2 0x4a24f0
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x170];
    int field;
    int getGaveAmmoAtTick() const;
};
int Player::getGaveAmmoAtTick() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getGaveAmmoAtTick (0x4a24f0)
