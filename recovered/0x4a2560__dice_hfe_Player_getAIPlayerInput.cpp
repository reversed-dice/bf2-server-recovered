// FUNCTION: BF2 0x4a2560
namespace dice { namespace hfe {
class Player {
public:
    char _pad[0x1d8];
    void* field;
    void* getAIPlayerInput() const;
};
void* Player::getAIPlayerInput() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Player_getAIPlayerInput (0x4a2560)
