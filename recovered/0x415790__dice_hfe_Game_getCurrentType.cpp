// FUNCTION: BF2 0x415790
namespace dice { namespace hfe {
class Game {
public:
    char _pad[0x6c];
    int field;
    int getCurrentType() const;
};
int Game::getCurrentType() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Game_getCurrentType (0x415790)
