// FUNCTION: BF2 0x67ffc0
#include <map>

namespace dice { namespace hfe { namespace world {

class IPlayer;

class PlayerManager {
public:
    char m_pad[0x90];
    std::map<int, IPlayer*> m_players;   // +0x90
    void removePlayerId(int id);
};

void PlayerManager::removePlayerId(int id)
{
    std::map<int, IPlayer*>::iterator it = m_players.find(id);
    if (it != m_players.end())
        m_players.erase(it);
}

}}}
