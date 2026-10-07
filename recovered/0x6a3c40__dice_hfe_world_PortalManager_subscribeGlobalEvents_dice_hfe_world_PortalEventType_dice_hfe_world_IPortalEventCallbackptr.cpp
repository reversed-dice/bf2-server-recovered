// FUNCTION: BF2 0x6a3c40
// BF2_FLAGS: -fno-strict-aliasing
#include <set>

namespace dice {
namespace hfe {
namespace world {

enum PortalEventType {};

class IPortalEventCallback {};

class PortalManager {
public:
    char pad[0x70];
    std::set<IPortalEventCallback*>** m_callbacks;

    void subscribeGlobalEvents(PortalEventType type, IPortalEventCallback* cb);
};

void PortalManager::subscribeGlobalEvents(PortalEventType type, IPortalEventCallback* cb)
{
    m_callbacks[(unsigned int)type]->insert(cb);
}

} // namespace world
} // namespace hfe
} // namespace dice
