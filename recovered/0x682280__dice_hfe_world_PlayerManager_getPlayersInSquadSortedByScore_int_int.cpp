// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x682280
#include <list>

namespace dice { namespace hfe { namespace world {

class IPlayer;

class PlayerManager {
public:
    char m_pad[0x18];
    std::list<IPlayer*> m_players;      // +0x18

    IPlayer* sortByScore(std::list<IPlayer*>&);
    IPlayer* getPlayersInSquadSortedByScore(int team, int squad);
};

IPlayer* PlayerManager::getPlayersInSquadSortedByScore(int team, int squad)
{
    std::list<IPlayer*>* src =
        ((std::list<IPlayer*>* (*)(void*, int, int))(*(void***)this)[21])(this, team, squad);
    std::list<IPlayer*> l(*src);
    return sortByScore(l);
}

}}}
