// FUNCTION: BF2 0x4a23c0
namespace dice {
namespace hfe {

class Game {
public:
    unsigned char getAbortLoadLevel() const;

private:
    char __pad[0xf4];
    unsigned char m_abortLoadLevel;
};

unsigned char Game::getAbortLoadLevel() const {
    return m_abortLoadLevel;
}

} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_Game_getAbortLoadLevel_const::dice_hfe_Game_getAbortLoadLevel_const (0x415810)