// FUNCTION: BF2 0x841f40
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <deque>

namespace BF2VoipServer {

class CBF2VoipServerInstance {
public:
    bool pushOutputString(std::string const& str);
private:
    char pad0[0x880];
    std::string m_name;
    std::deque<std::string> m_hist;
};

}

bool BF2VoipServer::CBF2VoipServerInstance::pushOutputString(std::string const& str)
{
    if ((int)m_hist.size() > 0x7f)
        return false;
    m_hist.push_back(str.c_str());
    return true;
}
