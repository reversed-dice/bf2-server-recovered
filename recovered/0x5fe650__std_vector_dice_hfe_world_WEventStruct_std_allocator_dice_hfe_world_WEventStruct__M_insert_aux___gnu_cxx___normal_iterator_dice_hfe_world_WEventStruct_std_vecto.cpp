// FUNCTION: BF2 0x5fe650
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// std::vector<dice::hfe::world::WEventStruct, std::allocator<dice::hfe::world::WEventStruct> >

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

namespace dice { namespace hfe { namespace world { struct WEventStruct { float x, y, z, w; }; } } }

template class std::vector<dice::hfe::world::WEventStruct, std::allocator<dice::hfe::world::WEventStruct> >;
