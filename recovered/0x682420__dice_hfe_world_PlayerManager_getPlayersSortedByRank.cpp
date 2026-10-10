// FUNCTION: BF2 0x682420
#include <list>

namespace dice { namespace hfe { namespace world {

class IPlayer;

class PlayerManager {
public:
    char m_pad[0x18];
    std::list<IPlayer*> m_players;
    IPlayer* sortByRank(std::list<IPlayer*>&);
    IPlayer* getPlayersSortedByRank();
};

IPlayer* PlayerManager::getPlayersSortedByRank()
{
    std::list<IPlayer*> l(m_players);
    return sortByRank(l);
}

}}}
