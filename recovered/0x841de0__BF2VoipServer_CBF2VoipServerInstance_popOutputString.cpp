// FUNCTION: BF2 0x841de0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <deque>

namespace BF2VoipServer {

class CBF2VoipServerInstance {
public:
    std::string popOutputString();
private:
    char pad0[0x880];
    std::string m_name;
    std::deque<std::string> m_hist;
};

}

std::string BF2VoipServer::CBF2VoipServerInstance::popOutputString()
{
    if (m_hist.size() == 0)
        return "";
    std::string str;
    str = m_hist.front();
    m_hist.pop_front();
    return str;
}
