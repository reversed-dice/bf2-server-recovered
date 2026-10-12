// FUNCTION: BF2 0x528270
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::world::KitVehicleMod, std::allocator<dice::hfe::world::KitVehicleMod> >

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

struct KitVehicleMod {
    std::string m_name;
    int m_mod;
};

} } }

template class std::vector<dice::hfe::world::KitVehicleMod, std::allocator<dice::hfe::world::KitVehicleMod> >;
