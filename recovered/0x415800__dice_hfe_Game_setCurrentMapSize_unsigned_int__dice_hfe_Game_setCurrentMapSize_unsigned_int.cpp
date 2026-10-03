// FUNCTION: BF2 0x415800
namespace dice {
namespace hfe {

class Game {
public:
    void setCurrentMapSize(unsigned int mapSize);
    unsigned int getCurrentMapSize() const;

private:
    char __pad[0x48];
    unsigned int m_currentMapSize;
};

void Game::setCurrentMapSize(unsigned int mapSize)
{
    m_currentMapSize = mapSize;
}

} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_Game_setCurrentMapSize_unsigned_int::dice_hfe_Game_setCurrentMapSize_unsigned_int (0x415800)