// FUNCTION: BF2 0x4c55e0
#include <map>
namespace dice { namespace hfe {

class Team {
public:
    void reset();
    void* m_first;
    char _data[0x38];
};

class SquadManager {
public:
    virtual ~SquadManager();
    void reset();
    char _pad[0x8];
    std::map<int, Team> m_teams;
};

void SquadManager::reset()
{
    for (std::map<int, Team>::iterator it = m_teams.begin(); it != m_teams.end(); ++it)
        it->second.reset();
}

} }
