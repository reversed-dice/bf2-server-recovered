// FUNCTION: BF2 0x67f6a0
#include <list>

namespace dice {
namespace hfe {

class Player {
public:
    void update(float dt);
};

namespace world {
class IPlayer;
}

Player* getPlayer(world::IPlayer* player);

namespace world {

class PlayerManager {
public:
    virtual ~PlayerManager();
    char pad[0x18 - 8];
    std::list<IPlayer*> m_players;

    virtual void updatePlayers(float dt);
};

void PlayerManager::updatePlayers(float dt) {
    for (std::list<IPlayer*>::iterator it = m_players.begin(); it != m_players.end(); ++it) {
        Player* p = getPlayer(*it);
        p->update(dt);
    }
}

}
}
}
