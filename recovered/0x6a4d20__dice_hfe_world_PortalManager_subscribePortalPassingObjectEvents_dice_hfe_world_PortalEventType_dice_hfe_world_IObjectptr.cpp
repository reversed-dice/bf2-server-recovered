// FUNCTION: BF2 0x6a4d20
#include <map>

namespace dice { namespace hfe { namespace world {
class IObject;
class IPortalEventCallback;
enum PortalEventType { };
class PortalPassing {
public:
    void subscribeEvents(PortalEventType type, IPortalEventCallback* cb);
};
struct PassingObjectData {
    char _pad[0x10];
    PortalPassing* m_passing;
};
class PortalManager {
public:
    bool subscribePortalPassingObjectEvents(PortalEventType type, IObject* obj, IPortalEventCallback* cb);
    char _pad[0x10];
    std::map<IObject*, PassingObjectData*> m_map;
};
}}}

bool dice::hfe::world::PortalManager::subscribePortalPassingObjectEvents(PortalEventType type, IObject* obj, IPortalEventCallback* cb)
{
    using namespace dice::hfe::world;
    PassingObjectData* data = m_map[obj];
    if (data == 0)
        return false;
    data->m_passing->subscribeEvents(type, cb);
    return true;
}
