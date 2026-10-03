// FUNCTION: BF2 0x4157f0
namespace dice { namespace hfe {
class Game {
public:
    char _pad[0x48];
    int field;
    int getCurrentMapSize() const;
};
int Game::getCurrentMapSize() const { return field; }
} }
// REVERSED_FUNCTION: dice_hfe_Game_getCurrentMapSize (0x4157f0)
