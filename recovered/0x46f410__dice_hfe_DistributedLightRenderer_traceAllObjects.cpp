// FUNCTION: BF2 0x46f410
#include <map>
#include <math.h>

namespace dice { namespace hfe {

namespace geom {
extern unsigned int IID_ILightSampleable;
}

namespace world {

class Vec3 {
public:
    float x, y, z;
    float length() const { return sqrtf(x * x + y * y + z * z); }
};

class IObject;

class ObjectManager {
public:
    virtual void dummy0();
    virtual void p001(); virtual void p002(); virtual void p003(); virtual void p004();
    virtual void p005(); virtual void p006(); virtual void p007(); virtual void p008();
    virtual void p009(); virtual void p010(); virtual void p011(); virtual void p012();
    virtual void p013(); virtual void p014(); virtual void p015(); virtual void p016();
    virtual void p017(); virtual void p018(); virtual void p019(); virtual void p020();
    virtual void p021(); virtual void p022(); virtual void p023(); virtual void p024();
    virtual void p025(); virtual void p026(); virtual void p027(); virtual void p028();
    virtual void p029(); virtual void p030(); virtual void p031(); virtual void p032();
    virtual void p033(); virtual void p034(); virtual void p035(); virtual void p036();
    virtual void p037(); virtual void p038(); virtual void p039(); virtual void p040();
    virtual void p041(); virtual void p042(); virtual void p043(); virtual void p044();
    virtual std::map<unsigned int, IObject*> const& getAllRegisteredObjects() const;
};

extern ObjectManager* objectManager;

class ILightSampleable {
public:
    virtual void _q0(); virtual void _q8(); virtual void _q10();
    virtual void* queryInterface(unsigned int iid);
};

class IObject {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void _v40(); virtual void _v48(); virtual void _v50(); virtual void _v58();
    virtual void _v60(); virtual void _v68(); virtual void _v70(); virtual void _v78();
    virtual void _v80(); virtual void _v88(); virtual void _v90(); virtual void _v98();
    virtual void _va0(); virtual void _va8(); virtual void _vb0(); virtual void _vb8();
    virtual void _vc0(); virtual void _vc8(); virtual void _vd0();
    virtual Vec3* getPosition();
    virtual void _ve0(); virtual void _ve8();

    unsigned int m_flags;   // +0x8
    char _pad0[0x70 - 0xc];
    ILightSampleable* m_70;  // +0x70
};

}

class DistributedLightRenderer {
public:
    void addObjectToJobQueue(world::IObject* o, unsigned int id);
    void traceAllObjects();
};

void DistributedLightRenderer::traceAllObjects()
{
    std::map<unsigned int, world::IObject*> objs = world::objectManager->getAllRegisteredObjects();
    for (std::map<unsigned int, world::IObject*>::iterator it = objs.begin(); it != objs.end(); ++it) {
        world::IObject* o = it->second;
        if ((o->m_flags & 8) == 0 && (o->m_flags & 0x200) != 0 && o->m_70 != 0) {
            world::Vec3* p = o->getPosition();
            float dist = sqrtf(p->x * p->x + p->y * p->y + p->z * p->z);
            if (!(dist > 10000.0f) && o->m_70 != 0 &&
                o->m_70->queryInterface(dice::hfe::geom::IID_ILightSampleable) != 0)
                addObjectToJobQueue(o, 0);
        }
    }
}

} }
