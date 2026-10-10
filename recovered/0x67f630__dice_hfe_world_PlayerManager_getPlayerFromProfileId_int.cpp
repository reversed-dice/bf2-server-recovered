// FUNCTION: BF2 0x67f630
#include <list>

namespace dice { namespace hfe { namespace world {

class IPlayer;

class PlayerManager {
public:
    char m_pad[0x18];
    std::list<IPlayer*> m_players;      // +0x18

    IPlayer* getPlayerFromProfileId(int profileId);
};

IPlayer* PlayerManager::getPlayerFromProfileId(int profileId)
{
    for (std::list<IPlayer*>::iterator it = m_players.begin(); it != m_players.end(); ++it)
    {
        IPlayer* p = *it;
        int prof = ((int (*)(void*))(*(void***)p)[171])(p);
        if (prof == profileId)
            return p;
    }
    return 0;
}

}}}
