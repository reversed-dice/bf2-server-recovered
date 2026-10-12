// FUNCTION: BF2 0x55e1c0
// BF2_FLAGS: -fno-strict-aliasing
#include <math.h>

namespace dice { namespace hfe {

struct Vec3 { float x, y, z; };

namespace world {

class IObject {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
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
    virtual Vec3 const& getPosition();   // slot 27 (0xd8)
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual float getExtent();           // slot 38 (0x130)
    virtual void after();
};

class SupplyObjectTemplate {
public:
    char _pad[0x1f4];
    float m_radius;
};

class SupplyObject : public IObject {
public:
    char _pad[0x230];
    SupplyObjectTemplate* m_238;
    long m_after;
    void reloadAmmo(IObject* obj);
    void heal(IObject* obj);
    void healAndReload(IObject* obj);
};

void SupplyObject::healAndReload(IObject* obj) {
    Vec3 const& p2 = obj->getPosition();
    Vec3 const& p1 = getPosition();
    float dx = p2.x - p1.x;
    float dy = p2.y - p1.y;
    float dz = p2.z - p1.z;
    float dist = sqrtf(dx * dx + dy * dy + dz * dz);
    float range = m_238->m_radius + obj->getExtent();
    if (dist > range) {
        return;
    }
    reloadAmmo(obj);
    heal(obj);
}

} } }
