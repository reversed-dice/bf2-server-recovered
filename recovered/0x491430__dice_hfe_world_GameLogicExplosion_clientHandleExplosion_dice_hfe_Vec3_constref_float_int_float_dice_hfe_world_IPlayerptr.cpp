// FUNCTION: BF2 0x491430
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe {

struct Vec3 {
    Vec3() {}
    Vec3(float ax, float ay, float az) : x(ax), y(ay), z(az) {}
    float x, y, z;
};

namespace world {

extern unsigned int CID_DestroyableWindowsBundleTemplate;
extern unsigned int CID_SoldierTemplate;

class ITemplate {
public:
    virtual void t0();
    virtual void t1();
    virtual void t2();
    virtual void t3();
    virtual unsigned int getClassID();
};

class ObjectFlagPredicator {
public:
    ObjectFlagPredicator(unsigned int flags);
    virtual void _d1() {}
    virtual void _d2() {}
    virtual void _d3() {}
    virtual void _d4() {}
    virtual void _d5() {}
    virtual void _d6() {}
    virtual void _d7() {}
    virtual void* getObj() { return 0; }
    virtual void _d10() {}
    virtual void _d11() {}
    virtual void _d12() {}
    virtual void _d13() {}
    virtual void _d14() {}
    virtual void _d15() {}
    virtual void _d16() {}
    virtual void _d17() {}
    virtual void _d18() {}
    virtual void _d19() {}
    virtual void _d20() {}
    virtual void _d21() {}
    virtual void _d22() {}
    virtual void _d23() {}
    virtual void _d24() {}
    virtual unsigned char checkFlag() { return 0; }

    unsigned int m_flags;
};

namespace {

class FlagIgnoreWaterPredicator : public ObjectFlagPredicator {
public:
    FlagIgnoreWaterPredicator(unsigned int flags) : ObjectFlagPredicator(flags) {}
    virtual unsigned char predicateSurface(int) { return 0; }
};

}

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
    virtual Vec3 const& getAbsolutePosition();

    char _pad0[0x20];
    ITemplate* m_template;
    char _pad1[0x48];
    IObject* m_78;
};

class IPlayer {
public:
    virtual void p0();
};

class IArmorGLComp {
public:
    virtual void a0();
};

class ObjectManager {
public:
    virtual void m00();
    virtual void m01();
    virtual void m02();
    virtual void m03();
    virtual void m04();
    virtual void m05();
    virtual void m06();
    virtual void m07();
    virtual void m08();
    virtual void m09();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void getObjectsFromGrid(Vec3 const& pos, float radius, std::vector<IObject*>& out, ObjectFlagPredicator* pred);
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual bool traceLine(IObject** hit, Vec3* hitPos, Vec3* hitNormal, float* dist,
                           Vec3 const& from, Vec3 const& to, ObjectFlagPredicator* pred,
                           int a, int b, int c, int d, int e);
};

extern ObjectManager* objectManager;

class DestroyableWindowsBundle {
public:
    void updateStates(unsigned int state);
};

IObject* getRootParent(IObject const* o);
bool isObjectWithinCone(IObject* o, IObject* other);

class GameLogicExplosion {
public:
    static void handleExplosion(Vec3 const& pos, float radius, int a3, float a4, IPlayer* a5,
                                IArmorGLComp* a6, int a7, IObject* a8, IObject* a9, float a10,
                                IObject* a11, IObject* a12, float a13, bool b14, bool b15);
    static void handleExplosionForceOnObject(IObject* obj, Vec3 const& pos, Vec3 const& a,
                                             Vec3 const& b, float f1, float f2,
                                             IArmorGLComp* armor, float f3, IObject* p,
                                             float f4, float f5, bool flag);
    static void clientHandleExplosion(Vec3 const& pos, float radius, int a3, float a4,
                                      IPlayer* a5, IArmorGLComp* a6, int a7, IObject* a8,
                                      IObject* a9, float a10, IObject* a11, IObject* a12,
                                      float a13, bool b14, bool b15);
};

void GameLogicExplosion::clientHandleExplosion(Vec3 const& pos, float radius, int a3, float a4,
                                               IPlayer* a5, IArmorGLComp* a6, int a7, IObject* a8,
                                               IObject* a9, float a10, IObject* a11, IObject* a12,
                                               float a13, bool b14, bool b15)
{
    handleExplosion(pos, radius, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, b14, b15);

    static std::vector<IObject*> objects;
    ObjectFlagPredicator pred(0x1000000);
    objectManager->getObjectsFromGrid(pos, radius, objects, &pred);
    float invRadius = 1.0f / radius;

    for (std::vector<IObject*>::iterator it = objects.begin(); it != objects.end(); ++it) {
        IObject* object = *it;
        if (object != 0 && object->m_template != 0 &&
            object->m_template->getClassID() == CID_DestroyableWindowsBundleTemplate) {
            ((DestroyableWindowsBundle*)object)->updateStates(0);
        }
        if (object->m_template->getClassID() == CID_SoldierTemplate &&
            isObjectWithinCone(object, a11) && object->m_78 != 0) {
            FlagIgnoreWaterPredicator pred2(0x100);
            Vec3 hitPos(0.0f, 0.0f, 0.0f);
            Vec3 hitNormal(0.0f, 0.0f, 0.0f);
            IObject* hitObject = 0;
            float hitDist;
            bool hit = objectManager->traceLine(&hitObject, &hitPos, &hitNormal, &hitDist, pos,
                                                object->getAbsolutePosition(), &pred2,
                                                1, 0, 1, 1, 0);
            if (!hit || getRootParent(hitObject) != object) {
                hitPos.x = 9999.0f;
                hitPos.y = 9999.0f;
                hitPos.z = 9999.0f;
            }
            handleExplosionForceOnObject(object, pos, object->getAbsolutePosition(), hitPos,
                                         invRadius, radius, a6, a10, a11, a13, 1.0f, false);
        }
    }
}

} } }
