// FUNCTION: BF2 0x44c420
#include <vector>
#include <queue>
namespace dice { namespace hfe {

class GhostObject;

struct GhostLessComp {
    bool operator()(const GhostObject* a, const GhostObject* b) const;
};

class GhostPriorityQueue : public std::priority_queue<GhostObject*, std::vector<GhostObject*>, GhostLessComp> {
public:
    GhostPriorityQueue();
};

GhostPriorityQueue::GhostPriorityQueue()
{
}

} }
