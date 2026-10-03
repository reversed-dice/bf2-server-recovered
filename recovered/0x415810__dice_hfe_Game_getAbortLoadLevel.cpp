// FUNCTION: BF2 0x415810
namespace dice { namespace hfe {
class Game {
public:
    char _pad[0x74];
    bool field;
    int getAbortLoadLevel() const;
};
int Game::getAbortLoadLevel() const { return (int)field; }
} }
// REVERSED_FUNCTION: dice_hfe_Game_getAbortLoadLevel (0x415810)
