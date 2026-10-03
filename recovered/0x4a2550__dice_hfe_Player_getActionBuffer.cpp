// FUNCTION: BF2 0x4a2550
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x1d0];
    void* field;
    void* getActionBuffer() const;
};
void* Player::getActionBuffer() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getActionBuffer (0x4a2550)
