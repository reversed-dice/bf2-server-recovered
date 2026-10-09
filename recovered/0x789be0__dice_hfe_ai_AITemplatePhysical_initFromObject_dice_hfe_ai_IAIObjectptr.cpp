// FUNCTION: BF2 0x789be0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice {
namespace hfe {

struct Vec3 {
    float x, y, z;
    Vec3() {}
    Vec3(float x_, float y_, float z_) {
        x = x_;
        z = z_;
        y = y_;
    }
};

inline Vec3 operator-(Vec3 const& a, Vec3 const& b) {
    return Vec3(a.x - b.x, a.y - b.y, a.z - b.z);
}

struct BoundingBox {
    Vec3 min;
    Vec3 max;
};

namespace world {

class IObjectTemplate {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual unsigned int getClassID();
};

class ArmorHelper {
public:
    virtual void v0();
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28();
    virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32();
    virtual float getFloat108();
    virtual float getFloat110();
};

class BoundsHelper {
public:
    virtual void v0();
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual float getRadius(int);
    virtual BoundingBox const* getBoundingBox(int);
};

class IPhysicsNode {
public:
    virtual void v0();
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28();
    virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32();
    virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36();
    virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40();
    virtual void v41(); virtual void v42(); virtual void v43(); virtual void v44();
    virtual void v45(); virtual void v46(); virtual void v47(); virtual void v48();
    virtual void v49(); virtual void v50(); virtual void v51(); virtual void v52();
    virtual void v53(); virtual void v54();
    virtual float slot1b8();
};

class IObject {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21();
    virtual void v22();
    virtual void* queryInterface(unsigned int, unsigned int);
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50();
    virtual bool slot198(int);

    char _pad[0x20];
    IObjectTemplate* m_template; // +0x28
    char _pad2[0x20];
    IObject* m_parentRef;        // +0x50
    char _pad3[0x20];
    ArmorHelper* m_armor;        // +0x78
    BoundsHelper* m_bounds;      // +0x80
};

extern const unsigned int IID_IPhysicsNode;
extern const unsigned int CID_DestroyableObjectTemplate;

} // namespace world

namespace ai {

class IAIGame {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25();
    virtual bool isSomething();
};

class CommonSingletonServer {
public:
    static IAIGame* m_iaiGame;
};

class IAIObject {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual world::IObject* getObject();
    virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12();
    virtual void v13(); virtual void v14(); virtual void v15(); virtual void v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28();
    virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32();
    virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36();
    virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40();
    virtual bool hasFeature(int);
};

using world::ArmorHelper;
using world::BoundsHelper;

class AITemplatePhysical {
public:
    virtual ~AITemplatePhysical();
    float m_f8;      // +0x8
    float m_fC;      // +0xc
    float m_f10;     // +0x10
    char _pad14[0x4];// +0x14
    float m_f18;     // +0x18
    char _pad1c[0x4];// +0x1c
    bool m_initialized; // +0x20
    unsigned char m_val21; // +0x21

    void initFromObject(IAIObject* aiObj);
};

static inline void sink(Vec3 const&) {}

void AITemplatePhysical::initFromObject(IAIObject* aiObj)
{
    if (m_initialized) return;
    if (CommonSingletonServer::m_iaiGame->isSomething()) return;

    world::IObject* obj = aiObj->getObject();
    ArmorHelper* arm = 0;
    for (; obj != 0; obj = obj->m_parentRef) {
        arm = obj->m_armor;
        if (arm) break;
    }

    if (!arm) {
        m_f8 = 1000000.0f;
    } else {
        if (!aiObj->hasFeature(0x19)) {
            m_f8 = arm->getFloat108();
        } else {
            m_f8 = arm->getFloat110();
        }
    }

    world::IPhysicsNode* node = (world::IPhysicsNode*)aiObj->getObject()->queryInterface(world::IID_IPhysicsNode, world::IID_IPhysicsNode);
    if (node) {
        m_fC = node->slot1b8();
    }

    if (aiObj->getObject()->slot198(1)) {
        BoundsHelper* b = (BoundsHelper*)aiObj->getObject()->m_bounds;
        BoundingBox const* bb = b->getBoundingBox(1);
        Vec3 s = bb->max - bb->min;
        volatile Vec3 size;
        size.x = s.x;
        size.z = s.z;
        size.y = s.y;
        m_f10 = 1.0f;
        m_f18 = b->getRadius(1);
    }

    if (aiObj->getObject()->m_template->getClassID() == world::CID_DestroyableObjectTemplate) {
        unsigned char val = *(unsigned char*)((char*)aiObj->getObject()->m_template + 0x200);
        m_initialized = true;
        m_val21 = val;
        return;
    }

    m_initialized = true;
}

} } }
