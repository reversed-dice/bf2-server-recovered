// FUNCTION: BF2 0x4a2540
namespace dice {
namespace hfe {

class Game {
public:
    unsigned char getAbortLoadLevel() const;

private:
    char __pad[0x17a];
    unsigned char m_abortLoadLevel;
};

unsigned char Game::getAbortLoadLevel() const {
    return m_abortLoadLevel;
}

} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_Game_getAbortLoadLevel_const::dice_hfe_Game_getAbortLoadLevel_const (0x415810)