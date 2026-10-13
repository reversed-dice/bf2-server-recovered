// FUNCTION: BF2 0x6a3c70
#include <map>
#include <new>

namespace dice { namespace hfe { namespace world {

extern unsigned int IID_IPortalPassing;

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
};

class IBase {
public:
    virtual void v0();
    virtual void v1();
    virtual void release();
};

class PassingObjectData {
public:
    char pad[0x10];
    IBase* m_10;
};

class PortalManager {
public:
    void unRegisterPortalPassingObject(IObject* object);
    char pad[0x10];
    std::map<IObject*, PassingObjectData*> m_portalObjects;
};

void PortalManager::unRegisterPortalPassingObject(IObject* object) {
    std::map<IObject*, PassingObjectData*>::iterator it = m_portalObjects.find(object);
    if (it != m_portalObjects.end()) {
        object->setComponent(IID_IPortalPassing, 0);
        it->second->m_10->release();
        operator delete(it->second);
        m_portalObjects.erase(it);
    }
}

}}}
