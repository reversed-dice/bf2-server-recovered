// FUNCTION: BF2 0x6a3ab0
namespace dice { namespace hfe { namespace world {

extern unsigned int IID_ISector;

class IPortalEventCallback;

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
    virtual void* slot27();
    virtual void* slot28();
    virtual void* slot29();
    virtual void* slot30();
    virtual void* slot31();
};

class Sector {
public:
    void unSubscribeEvents(int type, IPortalEventCallback* cb);
};

class PortalManager {
public:
    bool unSubscribeSectorEvents(int type, IObject* object, IPortalEventCallback* callback);
};

bool PortalManager::unSubscribeSectorEvents(int type, IObject* object, IPortalEventCallback* callback) {
    Sector* sector = (Sector*)object->queryComponent(IID_ISector, IID_ISector);
    if (sector == 0) {
        return false;
    }
    sector->unSubscribeEvents(type, callback);
    return true;
}
}}}
