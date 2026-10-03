// FUNCTION: BF2 0x415800
namespace dice {
namespace hfe {

enum TargetChannel
{
};

class Game {
public:
    void setCurrentChannel(TargetChannel channel);
    TargetChannel getCurrentChannel();

private:
    char __pad[0x48];
    TargetChannel m_currentChannel;

    // Note: virtual could exist; if so adjust padding to 0x60
    // Based on getter at 0x415750 using [rdi+0x48] with no vtable deref
};

void Game::setCurrentChannel(TargetChannel channel)
{
    m_currentChannel = channel;
}

} // namespace hfe
} // namespace dice
// REVERSED_FUNCTION: dice_hfe_Game_setCurrentChannel_dice_hfe_TargetChannel::dice_hfe_Game_setCurrentChannel_dice_hfe_TargetChannel (0x415760)