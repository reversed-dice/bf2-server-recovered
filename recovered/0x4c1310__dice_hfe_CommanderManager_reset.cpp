// FUNCTION: BF2 0x4c1310
// BF2_FLAGS: -fno-strict-aliasing
#include <map>
#include <set>
namespace dice { namespace hfe {

class Team;

class Squad {
public:
    void reset(bool full);
};

class CommanderManager {
public:
    void setCommander(int playerId, Team* team);
    void reset();
    char _pad[0x8];
    int m_commander;
    int m_candidate;
    std::set<int> m_applicants;
};

class Team {
public:
    void reset();
    void* m_vtbl;
    std::map<int, Squad*> m_squads;
    CommanderManager m_commanderManager;
};

class SquadManager {
public:
    virtual ~SquadManager();
    void reset();
    char _pad[0x8];
    std::map<int, Team> m_teams;
};

void CommanderManager::reset()
{
    m_commander = -1;
    m_candidate = -1;
    m_applicants.clear();
}

void Team::reset()
{
    m_commanderManager.setCommander(-1, this);
    m_commanderManager.reset();
    for (std::map<int, Squad*>::iterator it = m_squads.begin(); it != m_squads.end(); ++it)
        if (it->second)
            it->second->reset(false);
}

void SquadManager::reset()
{
    for (std::map<int, Team>::iterator it = m_teams.begin(); it != m_teams.end(); ++it)
        it->second.reset();
}

} }
