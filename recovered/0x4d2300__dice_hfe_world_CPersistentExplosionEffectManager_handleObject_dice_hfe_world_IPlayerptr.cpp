// FUNCTION: BF2 0x4d2300
#include <list>

namespace dice { namespace hfe { namespace world {

class IPlayer {};

class IEffect {
public:
    virtual void v0();
    virtual void handlePlayer(IPlayer* p);
};

class CPersistentExplosionEffectManager {
public:
    std::list<IEffect*> m_effects;

    void handleObject(IPlayer* player);
};

void CPersistentExplosionEffectManager::handleObject(IPlayer* player) {
    for (std::list<IEffect*>::iterator it = m_effects.begin(); it != m_effects.end(); ++it) {
        (*it)->handlePlayer(player);
    }
}

} } }
