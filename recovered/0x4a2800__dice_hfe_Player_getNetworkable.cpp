// FUNCTION: BF2 0x4a2800
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x308];
    void* field;
    void* getNetworkable() const;
};
void* Player::getNetworkable() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getNetworkable (0x4a2800)
