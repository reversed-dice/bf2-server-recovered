// FUNCTION: BF2 0x6dd230
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe {

struct Vec3 { float x, y, z; };

namespace world {

extern unsigned int CID_RopeLinkTemplate;

class ITemplate {
public:
    virtual void t0();
    virtual void t1();
    virtual void t2();
    virtual void t3();
    virtual unsigned int getClassID();
};

class IWakeable {
public:
    virtual void w0();
    virtual void w1();
    virtual void w2();
    virtual void w3();
    virtual void w4();
    virtual void w5();
    virtual void w6();
    virtual void w7();
    virtual void w8();
    virtual void w9();
    virtual void w10();
    virtual void w11();
    virtual void w12();
    virtual void w13();
    virtual void w14();
    virtual void w15();
    virtual void w16();
    virtual void w17();
    virtual void w18();
    virtual void w19();
    virtual void w20();
    virtual void w21();
    virtual void w22();
    virtual void w23();
    virtual void w24();
    virtual void w25();
    virtual void w26();
    virtual void w27();
    virtual void w28();
    virtual void w29();
    virtual void w30();
    virtual void w31();
    virtual void w32();
    virtual void w33();
    virtual void w34();
    virtual void w35();
    virtual void w36();
    virtual void w37();
    virtual void w38();
    virtual void w39();
    virtual void w40();
    virtual void w41();
    virtual void w42();
    virtual void w43();
    virtual void w44();
    virtual void w45();
    virtual void w46();
    virtual void w47();
    virtual void w48();
    virtual void w49();
    virtual void w50();
    virtual void w51();
    virtual void w52();
    virtual void w53();
    virtual void w54();
    virtual void w55();
    virtual void w56();
    virtual void w57();
    virtual void w58();
    virtual void w59();
    virtual void w60();
    virtual void w61();
    virtual void w62();
    virtual void w63();
    virtual void w64();
    virtual void w65();
    virtual void w66();
    virtual void w67();
    virtual void w68();
    virtual void w69();
    virtual void w70();
    virtual void w71();
    virtual void w72();
    virtual void w73();
    virtual void w74();
    virtual void w75();
    virtual void setAwake();
};

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
    char _pad_0x8[0x20];
    ITemplate* m_template;
    char _pad_0x30[0x20];
    IObject* m_50;
    char _pad_0x58[0x30];
    IWakeable* m_88;
};

class ObjectPredicator {
public:
    virtual bool predicate(IObject* o);
    virtual unsigned int getFlags() const;
    virtual bool performCulling(IObject* o);
    virtual void predicateSurface(int s);
};

class ObjectFlagPredicator : public ObjectPredicator {
public:
    ObjectFlagPredicator(unsigned int flags);
    unsigned int m_flags;
};

class ObjectManager {
public:
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void getObjectsFromGrid(Vec3 const& pos, float radius, std::vector<IObject*>& out, ObjectPredicator* pred);
};

extern ObjectManager* objectManager;

class RopeLink : public IObject {
public:
    void setAwake();
};


void wakeUpAllObjects(Vec3 const& pos, float radius, IObject const* except)
{
    static std::vector<IObject*> objectsToAwakeVector;
    IObject* zero = 0;
    if (objectsToAwakeVector.size() > 0)
        objectsToAwakeVector.erase(objectsToAwakeVector.begin(), objectsToAwakeVector.end());
    else
        objectsToAwakeVector.insert(objectsToAwakeVector.end(), (unsigned long)0, zero);
    ObjectFlagPredicator pred(0);
    objectManager->getObjectsFromGrid(pos, radius, objectsToAwakeVector, &pred);
    unsigned int count = (unsigned int)objectsToAwakeVector.size();
    for (unsigned int i = 0; i < count; ++i) {
        IObject* object = objectsToAwakeVector[i];
        if (object == except)
            continue;
        if (!object)
            continue;
        if (object->getAbsolutePosition().y > pos.y) {
            if (object->m_88)
                object->m_88->setAwake();
        }
    }
}

} } }
