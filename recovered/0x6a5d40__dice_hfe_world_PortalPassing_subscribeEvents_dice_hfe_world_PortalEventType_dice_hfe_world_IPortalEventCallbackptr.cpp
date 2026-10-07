// FUNCTION: BF2 0x6a5d40
// BF2_FLAGS: -fno-strict-aliasing
#include <set>

namespace dice { namespace hfe { namespace world {

enum PortalEventType {};
class IPortalEventCallback {};

class PortalPassing {
public:
    void subscribeEvents(PortalEventType type, IPortalEventCallback* cb);

    char pad[0x20];
    std::set<IPortalEventCallback*>** m_callbacks;      // 0x20
};

void PortalPassing::subscribeEvents(PortalEventType type, IPortalEventCallback* cb)
{
    m_callbacks[(unsigned int)type]->insert(cb);
}

} } }
