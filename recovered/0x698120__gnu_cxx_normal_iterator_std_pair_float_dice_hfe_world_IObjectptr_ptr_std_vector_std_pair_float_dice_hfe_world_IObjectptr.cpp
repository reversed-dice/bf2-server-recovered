// FUNCTION: BF2 0x698120
// BF2_FLAGS: -fno-strict-aliasing
#include <algorithm>
#include <utility>
#include <vector>

namespace dice {
namespace hfe {
namespace world {

class IObject;

namespace {

struct DistanceSortPredicate
{
    bool operator()(std::pair<float, dice::hfe::world::IObject*> const& a,
                    std::pair<float, dice::hfe::world::IObject*> const& b) const
    {
        return a.first < b.first;
    }
};

} // namespace

} // namespace world
} // namespace hfe
} // namespace dice

void sortByDistance(std::vector<std::pair<float, dice::hfe::world::IObject*> >& objs)
{
    std::sort(objs.begin(), objs.end(), dice::hfe::world::DistanceSortPredicate());
}

void heapByDistance(std::vector<std::pair<float, dice::hfe::world::IObject*> >& objs)
{
    std::make_heap(objs.begin(), objs.end(), dice::hfe::world::DistanceSortPredicate());
    std::sort_heap(objs.begin(), objs.end(), dice::hfe::world::DistanceSortPredicate());
}
