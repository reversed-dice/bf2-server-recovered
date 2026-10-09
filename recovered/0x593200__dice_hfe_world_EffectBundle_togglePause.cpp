// FUNCTION: BF2 0x593200
#include <vector>

namespace dice { namespace hfe { namespace geom {

class IParticleSystemInstance {
public:
    virtual void v00();
    virtual void v08();
    virtual void v10();
    virtual void v18();
    virtual void v20();
    virtual void v28();
    virtual void v30();
    virtual void togglePause(bool paused); // slot 7 (+0x38)
};

}

namespace world {

class EffectBundle {
public:
    char _pad[0x260];
    bool m_paused; // +0x260
    char _pad261[7];
    std::vector<geom::IParticleSystemInstance*> m_instances; // +0x268 .. +0x280

    void togglePause();
};

void EffectBundle::togglePause()
{
    m_paused = !m_paused;
    std::vector<geom::IParticleSystemInstance*>::iterator it = m_instances.begin();
    for (; it != m_instances.end(); ++it) {
        (*it)->togglePause(m_paused);
    }
}

} } }
