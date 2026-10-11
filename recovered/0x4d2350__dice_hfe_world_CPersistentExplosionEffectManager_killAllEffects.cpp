// FUNCTION: BF2 0x4d2350
// COMPILER: GCC 4.0
#include <list>

namespace dice {
namespace hfe {
namespace world {

class IExplosionEffect {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void stop();
};

class CPersistentExplosionEffectManager {
public:
    std::list<IExplosionEffect*> m_effects;

    void killAllEffects();
};

void CPersistentExplosionEffectManager::killAllEffects() {
    for (std::list<IExplosionEffect*>::iterator it = m_effects.begin(); it != m_effects.end(); ) {
        IExplosionEffect* eff = *it;
        if (eff) eff->stop();
        std::list<IExplosionEffect*>::iterator prev = it;
        --prev;
        m_effects.erase(it);
        it = prev;
        ++it;
    }
}

}
}
}
