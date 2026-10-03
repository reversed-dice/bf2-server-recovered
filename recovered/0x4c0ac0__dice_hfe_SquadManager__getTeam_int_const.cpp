// FUNCTION: BF2 0x4c0ac0
#include <map>

namespace dice { namespace hfe {

class Team {
    long long m_dummy;
};

class SquadManager {
    char _pad[0x10];
public:
    std::map<int, Team> m_teams;

    const Team* getTeam(int squadIndex) const;
};

const Team* SquadManager::getTeam(int squadIndex) const {
    std::map<int, Team>::const_iterator it = m_teams.find(squadIndex);
    if (it == m_teams.end()) return 0;
    return &it->second;
}

} }
// REVERSED_FUNCTION: dice::hfe::SquadManager::getTeam_int(0x4c0ac0)