// FUNCTION: BF2 0x6a4fd0
#include <list>

namespace dice { namespace hfe { namespace world {

class PortalManager {
public:
    struct PortalCollision {
        char pad0[0x30];
        float m_distance;
    };
    struct Other { void* p; };
};

namespace {

struct PortalCollisionPred {
    bool operator()(PortalManager::PortalCollision* a, PortalManager::PortalCollision* b) const {
        return a->m_distance > b->m_distance;
    }
};

}

void portalSortCollisions(std::list<PortalManager::PortalCollision*, std::allocator<PortalManager::PortalCollision*> >& l) {
    l.sort(PortalCollisionPred());
}

} } }
