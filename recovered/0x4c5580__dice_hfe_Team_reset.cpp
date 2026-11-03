// FUNCTION: BF2 0x4c5580
#include <map>

namespace dice { namespace hfe {

class Squad {
public:
    void reset(bool);
};

class Team;

class CommanderManager {
public:
    void setCommander(int, Team*);
    void reset();
};

class Team {
public:
    char pad[0x8];
    std::map<int, Squad*> m_squads;   // 0x8
    char pad2[0x48 - 0x38];
    CommanderManager m_commander;     // 0x48

    void reset();
};

void Team::reset()
{
    m_commander.setCommander(-1, this);
    m_commander.reset();
    for (std::map<int, Squad*>::iterator it = m_squads.begin(); it != m_squads.end(); it++) {
        if (it->second != 0)
            it->second->reset(false);
    }
}

}}
