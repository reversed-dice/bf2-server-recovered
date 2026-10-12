// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6a3ea0
#include <map>
#include <set>
#include <vector>

namespace dice { namespace hfe {
class Vec3;
namespace world {

class IPortalEventCallback;
class IObject;
struct PassingObjectData;

class IPortalManager {
public:
    virtual ~IPortalManager() {}
    virtual void _v1();
    virtual void _v2();
    virtual void _v3();
    virtual void _v4();
};

class PortalManager : public IPortalManager {
public:
    virtual void addRef();
    virtual int getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual ~PortalManager();
    virtual void registerPortalPassingObject(IObject* o, Vec3 const& v);
    virtual void unRegisterPortalPassingObject(IObject* o);
    virtual void registerSectorObject(IObject* o);
    virtual void unRegisterSectorObject(IObject* o);
    virtual void subscribeGlobalEvents(int type, IPortalEventCallback* cb);
    virtual void unSubscribeGlobalEvents(int type, IPortalEventCallback* cb);
    virtual void subscribePortalPassingObjectEvents(int type, IObject* o, IPortalEventCallback* cb);
    virtual void unSubscribePortalPassingObjectEvents(int type, IObject* o, IPortalEventCallback* cb);
    virtual void subscribeSectorEvents(int type, IObject* o, IPortalEventCallback* cb);
    virtual void unSubscribeSectorEvents(int type, IObject* o, IPortalEventCallback* cb);
    virtual void update(float);
    virtual void renderStats();

    PortalManager();

private:
    int m_refCount;                                                  // 0x08
    std::map<IObject*, PassingObjectData*> m_passingObjects;          // 0x10
    std::set<IObject*> m_sectorObjects;                               // 0x40
    std::vector<std::set<IPortalEventCallback*>*> m_globalEventSets;  // 0x70
    bool m_0x88;                                                      // 0x88
    int m_0x8c;                                                       // 0x8c
};

PortalManager::PortalManager()
    : m_refCount(1),
      m_passingObjects(),
      m_sectorObjects(),
      m_globalEventSets(),
      m_0x88(0),
      m_0x8c(0) {
    for (int i = 2; i > 0; --i) {
        m_globalEventSets.push_back(new std::set<IPortalEventCallback*>());
    }
}

}}}

