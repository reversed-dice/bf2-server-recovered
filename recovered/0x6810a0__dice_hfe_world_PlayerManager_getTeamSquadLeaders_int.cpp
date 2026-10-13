// FUNCTION: BF2 0x6810a0
#include <list>
namespace dice { namespace hfe { namespace world {

class IPlayer;
typedef bool (*AliveFn)(void*);
typedef int (*TeamFn)(void*);

class PlayerManager {
public:
    std::list<IPlayer*>& getTeamSquadLeaders(int team);
private:
    char _pad00[0x18];
    std::list<IPlayer*> m_players;
    std::list<IPlayer*> m_teamSquadLeaders;
};

std::list<IPlayer*>& PlayerManager::getTeamSquadLeaders(int team)
{
    m_teamSquadLeaders.resize(0, 0);
    for (std::list<IPlayer*>::iterator it = m_players.begin(); it != m_players.end(); ++it) {
        IPlayer* p = *it;
        if (((AliveFn)(*(void***)p)[79])(p) && ((TeamFn)(*(void***)p)[58])(p) == team)
            m_teamSquadLeaders.push_back(p);
    }
    return m_teamSquadLeaders;
}
}}}
