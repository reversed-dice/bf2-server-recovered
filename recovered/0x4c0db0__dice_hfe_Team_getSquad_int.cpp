// FUNCTION: BF2 0x4c0db0
#include <map>
namespace dice { namespace hfe {

class Squad;

class Team {
public:
    Squad* getSquad(int id);
    char _pad0[0x8];
    std::map<unsigned char, Squad*> m_squads;
};

Squad* Team::getSquad(int id)
{
    std::map<unsigned char, Squad*>::iterator it = m_squads.find(id);
    if (it == m_squads.end())
        return 0;
    return it->second;
}

} }
