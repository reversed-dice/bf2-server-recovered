// FUNCTION: BF2 0x415770
namespace dice { namespace hfe {
class Game {
public:
    char _pad[0x68];
    int field;
    int getCurrentFlags() const;
};
int Game::getCurrentFlags() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Game_getCurrentFlags (0x415770)
