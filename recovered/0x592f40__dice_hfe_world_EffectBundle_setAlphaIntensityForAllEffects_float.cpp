// FUNCTION: BF2 0x592f40
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
    virtual void v38();
    virtual void v40();
    virtual void v48();
    virtual void v50();
    virtual void v58();
    virtual void v60();
    virtual void v68();
    virtual void v70();
    virtual void v78();
    virtual void v80();
    virtual void v88();
    virtual void v90();
    virtual void v98();
    virtual void va0();
    virtual void va8();
    virtual void vb0();
    virtual void setAlphaIntensity(float); // slot 23 (+0xb8)
};

}

namespace world {

class EffectBundle {
public:
    char _pad[0x268];
    std::vector<geom::IParticleSystemInstance*> m_instances; // +0x268 .. +0x280

    void setAlphaIntensityForAllEffects(float val);
};

void EffectBundle::setAlphaIntensityForAllEffects(float val)
{
    std::vector<geom::IParticleSystemInstance*>::iterator it = m_instances.begin();
    for (; it != m_instances.end(); ++it) {
        (*it)->setAlphaIntensity(val);
    }
}

} } }
