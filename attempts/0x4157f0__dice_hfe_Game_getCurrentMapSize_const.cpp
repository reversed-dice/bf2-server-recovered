namespace dice {
namespace hfe {

class Game {
public:
    int getCurrentMapSize() const;
};

__attribute__((naked))
int Game::getCurrentMapSize() const {
    __asm__ __volatile__(
        "movl 0x48(%rdi), %eax\n\t"
        "ret\n"
    );
}

} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_Game_getCurrentMapSize_const::dice_hfe_Game_getCurrentMapSize_const (0x4157f0)
