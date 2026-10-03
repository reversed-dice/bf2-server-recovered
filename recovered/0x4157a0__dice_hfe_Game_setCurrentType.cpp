// FUNCTION: BF2 0x4157a0
namespace dice { namespace hfe {
class Game {
public:
    char _pad[0x6c];
    int field;
    void setCurrentType(int v);
};
void Game::setCurrentType(int v) { field = v; }
} }
// REVERSED_FUNCTION: dice_hfe_Game_setCurrentType (0x4157a0)
