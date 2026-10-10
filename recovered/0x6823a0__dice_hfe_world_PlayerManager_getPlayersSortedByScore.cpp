// FUNCTION: BF2 0x6823a0
#include <list>

namespace dice { namespace hfe { namespace world {

class IPlayer;

class PlayerManager {
public:
    char m_pad[0x18];
    std::list<IPlayer*> m_players;
    IPlayer* sortByScore(std::list<IPlayer*>&);
    IPlayer* getPlayersSortedByScore();
};

IPlayer* PlayerManager::getPlayersSortedByScore()
{
    std::list<IPlayer*> l(m_players);
    return sortByScore(l);
}

}}}
