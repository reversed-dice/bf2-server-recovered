// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x513e90
// std::vector<dice::hfe::world::SupplyGroup, std::allocator<dice::hfe::world::SupplyGroup> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>
#include <memory>
#include <numeric>
#include <functional>
#include <iterator>

namespace dice { namespace hfe { namespace world {
struct SupplyGroup {
    int id;
    unsigned char needed;
    SupplyGroup& operator=(SupplyGroup const& o) { id = o.id; needed = o.needed; return *this; }
};
} } }

template class std::vector<dice::hfe::world::SupplyGroup, std::allocator<dice::hfe::world::SupplyGroup> >;
