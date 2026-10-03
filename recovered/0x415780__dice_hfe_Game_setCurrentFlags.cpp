// FUNCTION: BF2 0x415780
namespace dice { namespace hfe {
class Game {
public:
    char _pad[0x70];
    int field;
    void setCurrentFlags(int v);
};
void Game::setCurrentFlags(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Game_setCurrentFlags (0x415780)
