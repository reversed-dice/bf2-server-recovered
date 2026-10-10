// FUNCTION: BF2 0x698b60
#include <vector>
#include <utility>
#include <algorithm>

namespace dice { namespace hfe { namespace world {
class IObject;
namespace {
struct DistanceSortPredicate {
    bool operator()(const std::pair<float, IObject*>& a, const std::pair<float, IObject*>& b) const;
};

void rdDistSortDyt(std::vector<std::pair<float, IObject*> >& v, unsigned int n) {
    DistanceSortPredicate cmp;
    std::sort(v.begin(), v.end(), cmp);
    std::partial_sort(v.begin(), v.begin() + n, v.end(), cmp);
}
}
}}}
