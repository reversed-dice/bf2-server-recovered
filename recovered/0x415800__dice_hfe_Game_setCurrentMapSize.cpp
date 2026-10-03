// FUNCTION: BF2 0x415800
namespace dice { namespace hfe {
class Game {
public:
    char _pad[0x48];
    int field;
    void setCurrentMapSize(int v);
};
void Game::setCurrentMapSize(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Game_setCurrentMapSize (0x415800)
