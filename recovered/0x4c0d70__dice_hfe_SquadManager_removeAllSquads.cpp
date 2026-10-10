// FUNCTION: BF2 0x4c0d70
#include <map>
namespace dice { namespace hfe {
class Team { public: void removeAllSquads(); };
class SquadManager {
public:
    virtual ~SquadManager();
    char _pad[8];
    std::map<long, Team> m_teams;
    void removeAllSquads();
};
void SquadManager::removeAllSquads() {
    for (std::map<long, Team>::iterator it = m_teams.begin(); it != m_teams.end(); ++it)
        it->second.removeAllSquads();
}
} }
