// FUNCTION: BF2 0x415760
namespace dice { namespace hfe {
class Game {
public:
    char _pad[0x68];
    int field;
    void setCurrentChannel(int v);
};
void Game::setCurrentChannel(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Game_setCurrentChannel (0x415760)
