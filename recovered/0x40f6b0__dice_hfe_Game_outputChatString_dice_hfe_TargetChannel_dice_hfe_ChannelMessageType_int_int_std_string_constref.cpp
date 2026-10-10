// FUNCTION: BF2 0x40f6b0
#include <string>

namespace dice {
namespace hfe {

std::wstring makeWide(const std::string& in);

enum TargetChannel {};
enum ChannelMessageType {};

class Game {
public:
    void outputChatString(TargetChannel, ChannelMessageType, int, int, const std::wstring& w);
    void outputChatString(TargetChannel, ChannelMessageType, int, int, const std::string& s);
};

void Game::outputChatString(TargetChannel tc, ChannelMessageType ct, int a, int b, const std::string& text) {
    std::wstring wide = makeWide(text);
    outputChatString(tc, ct, a, b, wide);
}

} }
