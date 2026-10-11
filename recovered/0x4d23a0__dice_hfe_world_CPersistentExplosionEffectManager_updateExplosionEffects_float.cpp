// FUNCTION: BF2 0x4d23a0
#include <list>

namespace dice {
namespace hfe {
namespace world {

class IExplosionEffect {
public:
    virtual void v0();
    virtual void v1();
    virtual bool update(float dt);
    virtual void v3();
    virtual void stop();
};

class CPersistentExplosionEffectManager {
public:
    std::list<IExplosionEffect*> m_effects;

    void updateExplosionEffects(float dt);
};

void CPersistentExplosionEffectManager::updateExplosionEffects(float dt) {
    for (std::list<IExplosionEffect*>::iterator it = m_effects.begin(); it != m_effects.end(); ) {
        if (!(*it)->update(dt)) {
            if (*it) (*it)->stop();
            std::list<IExplosionEffect*>::iterator prev = it;
            --prev;
            m_effects.erase(it);
            it = prev;
        }
        ++it;
    }
}

}
}
}
