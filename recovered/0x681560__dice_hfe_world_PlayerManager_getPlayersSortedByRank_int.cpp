// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x681560
#include <list>

namespace dice { namespace hfe { namespace world {

class IPlayer;

class PlayerManager {
public:
    char m_pad[0x18];
    std::list<IPlayer*> m_players;      // +0x18
    char m_pad2[0x8];
    std::list<IPlayer*> m_teamPlayers;  // +0x28

    IPlayer* sortByRank(std::list<IPlayer*>&);
    IPlayer* getPlayersSortedByRank(int rank);
};

IPlayer* PlayerManager::getPlayersSortedByRank(int rank)
{
    std::list<IPlayer*>* src =
        ((std::list<IPlayer*>* (*)(void*, int))(*(void***)this)[18])(this, rank);
    std::list<IPlayer*> l(*src);
    return sortByRank(l);
}

}}}
