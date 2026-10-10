// FUNCTION: BF2 0x681810
#include <list>

namespace dice { namespace hfe { namespace world {

class IPlayer;

class PlayerManager {
public:
    char _pad0[0x18];
    std::list<IPlayer*> m_players;
    std::list<IPlayer*> m_result;
    std::list<IPlayer*>& getPlayers(int team);
};

std::list<IPlayer*>& PlayerManager::getPlayers(int team)
{
    std::list<IPlayer*>& res = m_result;
    res.resize(0);
    std::list<IPlayer*>::iterator it = m_players.begin();
    while (it != m_players.end()) {
        IPlayer* p = *it;
        if (((int (*)(void*))(*(void***)p)[0x3a])(p) == team)
            res.push_back(p);
        ++it;
    }
    return res;
}

} } }
