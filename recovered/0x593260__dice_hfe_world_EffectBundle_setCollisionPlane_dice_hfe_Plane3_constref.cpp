// FUNCTION: BF2 0x593260
#include <vector>

namespace dice { namespace hfe {

struct Vec3 { float x, y, z; };
struct Plane3 { Vec3 normal; float dist; };

namespace geom {

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
    virtual void setCollisionPlane(Plane3 const&); // slot 19 (+0x98)
};

}

namespace world {

class EffectBundle {
public:
    char _pad[0x268];
    std::vector<geom::IParticleSystemInstance*> m_instances; // +0x268 .. +0x280

    void setCollisionPlane(Plane3 const& plane);
};

void EffectBundle::setCollisionPlane(Plane3 const& plane)
{
    std::vector<geom::IParticleSystemInstance*>::iterator it = m_instances.begin();
    for (; it != m_instances.end(); ++it) {
        (*it)->setCollisionPlane(plane);
    }
}

} } }
