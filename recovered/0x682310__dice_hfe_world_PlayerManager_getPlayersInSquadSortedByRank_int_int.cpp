// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x682310
#include <list>

namespace dice { namespace hfe { namespace world {

class IPlayer;

class PlayerManager {
public:
    char m_pad[0x18];
    std::list<IPlayer*> m_players;      // +0x18

    IPlayer* sortByRank(std::list<IPlayer*>&);
    IPlayer* getPlayersInSquadSortedByRank(int team, int squad);
};

IPlayer* PlayerManager::getPlayersInSquadSortedByRank(int team, int squad)
{
    std::list<IPlayer*>* src =
        ((std::list<IPlayer*>* (*)(void*, int, int))(*(void***)this)[21])(this, team, squad);
    std::list<IPlayer*> l(*src);
    return sortByRank(l);
}

}}}
