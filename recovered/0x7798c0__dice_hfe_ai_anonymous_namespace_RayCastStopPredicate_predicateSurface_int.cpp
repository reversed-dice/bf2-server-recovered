// FUNCTION: BF2 0x7798c0
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
};

namespace world {

class IObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual Vec3 const& getAbsolutePosition() const;
};

class Material {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual bool getIsSeeThrough() const;
};

class MaterialManager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual Material* getMaterial(unsigned int id);
};

extern MaterialManager* materialManager;

}

namespace ai {

class ObjectPredicator {
public:
    virtual void predicate(world::IObject*);
    virtual void getFlags() const;
    virtual void performCulling(world::IObject*);
    virtual bool predicateSurface(int);
};

class RayCastStopPredicate : public ObjectPredicator {
public:
    char pad8[8];
    char m_flag10;
    char pad11[7];
    world::IObject* m_obj;   // +0x18
    float m_best;            // +0x20
    dice::hfe::Vec3 m_pos;              // +0x24
    bool predicateSurface(int id);
};

bool RayCastStopPredicate::predicateSurface(int id)
{
    world::Material* m = world::materialManager->getMaterial((unsigned int)id);
    if (m_flag10 == 0 || !m->getIsSeeThrough())
        return true;
    world::IObject* o = m_obj;
    dice::hfe::Vec3 const& p = o->getAbsolutePosition();
    dice::hfe::Vec3 const& pos = m_pos;
    float dx = p.x - pos.x;
    float dy = p.y - pos.y;
    float dz = p.z - pos.z;
    float d = dx * dx + dy * dy + dz * dz;
    if (m_best > d)
        m_best = d;
    return false;
}

} }
}
