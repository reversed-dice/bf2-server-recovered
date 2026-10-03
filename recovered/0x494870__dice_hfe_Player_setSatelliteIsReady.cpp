// FUNCTION: BF2 0x494870
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x137];
    bool field;
    void setSatelliteIsReady(bool v);
};
void Player::setSatelliteIsReady(bool v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_setSatelliteIsReady (0x494870)
