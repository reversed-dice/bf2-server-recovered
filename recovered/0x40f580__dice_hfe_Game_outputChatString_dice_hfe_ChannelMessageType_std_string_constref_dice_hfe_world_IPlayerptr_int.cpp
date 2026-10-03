// FUNCTION: BF2 0x40f580
#include <string>

namespace dice {
namespace hfe {
namespace world {

class IPlayer;

} // namespace world

enum ChannelMessageType
{
};

class Game {
public:
    void outputChatString(ChannelMessageType, const std::string&, world::IPlayer*, int);
};

void Game::outputChatString(ChannelMessageType, const std::string&, world::IPlayer*, int)
{
}

} // namespace hfe
} // namespace dice

// REVERSED_FUNCTION: dice_hfe_Game_outputChatString_dice_hfe_ChannelMessageType_std_string_constref_dice_hfe_world_IPlayerptr_int::dice_hfe_Game_outputChatString_dice_hfe_ChannelMessageType_std_string_constref_dice_hfe_world_IPlayerptr_int (0x40f580)
