// FUNCTION: BF2 0x680fb0
#include <list>
namespace dice { namespace hfe { namespace world {

class IPlayer;
typedef int (*IntFn)(void*);
typedef bool (*BoolFn)(void*);

class PlayerManager {
public:
    std::list<IPlayer*>& getPlayersInSquad(int team, int squad);
private:
    char _pad00[0x18];
    std::list<IPlayer*> m_players;
    std::list<IPlayer*> m_teamSquadLeaders;
};

std::list<IPlayer*>& PlayerManager::getPlayersInSquad(int team, int squad)
{
    m_teamSquadLeaders.resize(0, 0);
    for (std::list<IPlayer*>::iterator it = m_players.begin(); it != m_players.end(); ++it) {
        IPlayer* p = *it;
        if (((IntFn)(*(void***)p)[58])(p) == team
            && ((IntFn)(*(void***)p)[67])(p) == squad
            && !((BoolFn)(*(void***)p)[69])(p))
            m_teamSquadLeaders.push_back(p);
    }
    return m_teamSquadLeaders;
}
}}}
