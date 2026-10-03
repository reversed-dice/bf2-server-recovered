// FUNCTION: BF2 0x415750
namespace dice { namespace hfe {
class Game {
public:
    char _pad[0x68];
    int field;
    int getCurrentChannel() const;
};
int Game::getCurrentChannel() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Game_getCurrentChannel (0x415750)
