// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6a40a0
#include <map>
#include <set>
#include <vector>

namespace dice { namespace hfe { namespace world {

class IObject;
class IPortalEventCallback;

class IPortalManager {
public:
    virtual ~IPortalManager() {}
    char _pad[0x8];
};

class PortalManager : public IPortalManager {
public:
    struct PassingObjectData;
    typedef std::map<IObject*, PassingObjectData*> ObjectMap;
    typedef std::set<IObject*> ObjectSet;
    typedef std::set<IPortalEventCallback*> CallbackSet;

    ObjectMap m_10;                 // 0x10
    ObjectSet m_40;                 // 0x40
    std::vector<CallbackSet*> m_70; // 0x70
    virtual ~PortalManager();
};

PortalManager::~PortalManager()
{
    ObjectMap::iterator e = m_10.end();
    for (ObjectMap::iterator it = m_10.begin(); e != it; ++it)
        if (it->second) delete it->second;
    for (std::vector<CallbackSet*>::iterator it = m_70.begin(); it != m_70.end(); ++it)
        delete *it;
}
} } }
