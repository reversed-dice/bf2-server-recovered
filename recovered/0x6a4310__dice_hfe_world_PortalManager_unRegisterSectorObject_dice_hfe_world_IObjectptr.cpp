// FUNCTION: BF2 0x6a4310
// BF2_FLAGS: -fno-strict-aliasing
#include <set>

namespace dice { namespace hfe { namespace world {

extern unsigned int IID_ISector;

class IObject {
public:
    virtual void addRef();
    virtual int getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int);
    virtual void* getClassID();
    virtual void* dtorA();
    virtual void* dtorB();
    virtual void* getWeakPtr();
    virtual void* init();
    virtual void* disableCachedObject();
    virtual void* enableCachedObject();
    virtual void* getObjectCacheID();
    virtual void* setObjectCacheID(unsigned int);
    virtual void* destroy(bool);
    virtual void* forceDestroy();
    virtual void* isObjectDestroyed();
    virtual void* setObjectInDestroyList(bool);
    virtual void* getObjectInDestroyList();
    virtual void* setGridCullerObject(void*);
    virtual void* getGridCullerObject();
    virtual void* setLatencyCullerObject(void*);
    virtual void* getLatencyCullerObject();
    virtual void* setComponent(unsigned int, void*);
    virtual void* queryComponent(unsigned int, unsigned int);
    virtual void* slot24();
    virtual void* slot25();
    virtual void* slot26();
};

class Sector {
public:
    virtual void v0();
    virtual void v1();
    virtual void release();
};

class PortalManager {
public:
    void unRegisterSectorObject(IObject* object);
    char pad[0x40];
    std::set<IObject*> m_sectors;
};

void PortalManager::unRegisterSectorObject(IObject* object) {
    unsigned int iid = IID_ISector;
    Sector* sector = (Sector*)object->queryComponent(iid, iid);
    if (sector != 0) {
        object->setComponent(iid, 0);
        sector->release();
        m_sectors.erase(object);
    }
}

}}}
