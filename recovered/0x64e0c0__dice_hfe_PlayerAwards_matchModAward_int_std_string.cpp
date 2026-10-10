// FUNCTION: BF2 0x64e0c0
#include <string>
#include <map>

namespace dice { namespace hfe {

int compareIgnoreCase(char const*, char const*);

struct Award {
    int a0;
    int a1;
    std::string s0;
    std::string s1;
    int a2;
    int a3;
    long long p0;
    long long p1;
    std::string s2;
};

class PlayerAwards {
public:
    char pad0[0x50];
    std::map<int, Award> m_awards;

    bool matchModAward(int id, std::string name);
};

bool PlayerAwards::matchModAward(int id, std::string name)
{
    for (std::map<int, Award>::const_iterator it = m_awards.begin(); it != m_awards.end(); ++it) {
        std::pair<int const, Award> const& p = *it;
        if (p.second.a2 == id && compareIgnoreCase(p.second.s2.c_str(), name.c_str()) == 0)
            return true;
    }
    return false;
}

} }
