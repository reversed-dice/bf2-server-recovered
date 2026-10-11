// FUNCTION: BF2 0x485340
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>
#include <utility>

namespace dice { namespace hfe {

class NoCaseStringCompare {
public:
    bool operator()(std::string const& a, std::string const& b) const;
};

typedef std::map<std::string, int, NoCaseStringCompare> TeamNameMapA;
typedef std::map<int, std::string> TeamNameMapB;

class GameLogic {
public:
    char _pad0[0xb0];
    TeamNameMapA m_nameToId;
    TeamNameMapB m_idToName;

    void setTeamName(int id, std::string const& name);
};

void GameLogic::setTeamName(int id, std::string const& name) {
    std::pair<TeamNameMapA::iterator, bool> r1 =
        m_nameToId.insert(TeamNameMapA::value_type(std::make_pair(std::string(name), id)));
    if (!r1.second) {
        r1.first->second = id;
    }
    std::pair<TeamNameMapB::iterator, bool> r2 =
        m_idToName.insert(TeamNameMapB::value_type(std::make_pair(id, std::string(name))));
    if (!r2.second) {
        r2.first->second = name;
    }
}

} }
