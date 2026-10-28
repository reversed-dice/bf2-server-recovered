// FUNCTION: BF2 0x6f5bf0
#include <string>
#include <ostream>

namespace dice { namespace hfe { namespace world {

class IObject;

class IObject {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(unsigned int iid);
    char _pad0[0x80];
    void* m_88;
    void* m_90;
};

class IResponsePhysics {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int);
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual unsigned int getClassID() const;
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
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual bool v48();
};

extern unsigned int CID_ResponsePhysics;
extern unsigned int CID_PointResponsePhysics;
extern unsigned int CID_RotationalPointResponsePhysics;
extern unsigned int CID_SoldierResponsePhysics;
extern unsigned int CID_StaticResponsePhysics;
extern unsigned int IID_IProjectileObject;

class SoldierResponsePhysics {
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
    virtual void checkObjectVsObject(IObject* a, IObject* b, float dt, bool flag);
    char _pad0[0x18];
    bool m_20;
};

} } }

namespace dice { namespace hfe {

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};

} }

extern "C" void checkSoldierVsSoldier(void*, void*, float, float);
extern "C" void checkSoldierVsMesh(void*, void*, void*, float, float, bool);
extern "C" void checkSoldierVsPoint(void*, void*, float);

namespace dice { namespace hfe { namespace world {

void SoldierResponsePhysics::checkObjectVsObject(IObject* a, IObject* b, float dt, bool flag)
{
    IResponsePhysics* node = (IResponsePhysics*)*(void**)((char*)b + 0x90);
    IResponsePhysics* proj;
    if (!node) return;

    unsigned int cid = node->getClassID();

    if (m_20) {
        if (cid == CID_SoldierResponsePhysics) {
            checkSoldierVsSoldier(a, b, dt, 1.0f);
            return;
        }
        if (cid == CID_PointResponsePhysics || cid == CID_RotationalPointResponsePhysics)
            goto vs_point;
        if (cid == CID_ResponsePhysics || cid == CID_StaticResponsePhysics) {
            checkSoldierVsMesh(this, a, b, dt, 1.0f, true);
            return;
        }
        dice::hfe::Debug(6, std::string("Physics/SoldierResponse.cpp"), 525, std::string("")).os
            << "Unknown response physics class";
        return;
    }

    if (cid != CID_PointResponsePhysics && cid != CID_RotationalPointResponsePhysics) return;
    if (!b) return;

    proj = (IResponsePhysics*)b->queryInterface(IID_IProjectileObject);
    if (!proj) return;
    if (!proj->v48()) return;

vs_point:
    checkSoldierVsPoint(a, b, dt);
}

} } }
// REVERSED_FUNCTION: dice_hfe_world_SoldierResponsePhysics_checkObjectVsObject_dice_hfe_world_IObjectptr_dice_hfe_world_IObjectptr_float_bool (0x6f5bf0)
