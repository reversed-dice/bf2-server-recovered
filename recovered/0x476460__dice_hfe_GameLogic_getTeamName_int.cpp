// FUNCTION: BF2 0x476460
// BF2_FLAGS: -fno-if-conversion -fno-if-conversion2
#include <map>
#include <string>

namespace dice { namespace hfe {

class GameLogic {
public:
    char _pad[0xe0 - 8];
    std::map<int, std::string> m_teamNames;  // +0xe0
    virtual std::string const& getTeamName(int team);
};

std::string const& GameLogic::getTeamName(int team) {
    std::map<int, std::string>::iterator it = m_teamNames.find(team);
    if (it == m_teamNames.end()) {
        static std::string ret;
        return ret;
    }
    return it->second;
}

} }
