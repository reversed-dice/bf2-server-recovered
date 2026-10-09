// FUNCTION: BF2 0x7870c0
namespace dice { namespace hfe { namespace world {
extern int IID_IPlayerControlObject;
} } }

namespace dice { namespace hfe { namespace ai {

class Object {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void* getObject();
    virtual bool isValid();
};

class Queryable {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(int iid);
    char _pad[0x48];
    Queryable* next;
};

class Manager {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual Queryable* getFirst();
};

class AIObjectUnit {
public:
    char _pad[8];
    Manager* manager;
    Object* getOccupier() const;
};

Object* AIObjectUnit::getOccupier() const {
    Object* occupier;
    for (Queryable* it = manager->getFirst(); it != 0; it = it->next) {
        occupier = (Object*)it->queryInterface(dice::hfe::world::IID_IPlayerControlObject);
        if (occupier != 0) goto found;
    }
    occupier = 0;
found:
    if (!occupier->isValid()) return 0;
    void* o = occupier->getObject();
    if (o == 0) return 0;
    return *(Object**)((char*)o + 0x68);
}

} } }
