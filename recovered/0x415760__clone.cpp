// FUNCTION: BF2 0x415760
namespace dice {
namespace hfe {

class Game {
public:
    void setCurrentFlags(int flags);

private:
    char __pad[0x68];
    int m_currentFlags;
};

void Game::setCurrentFlags(int flags)
{
    m_currentFlags = flags;
}

} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_Game_setCurrentFlags_int::dice_hfe_Game_setCurrentFlags_int (0x415780)