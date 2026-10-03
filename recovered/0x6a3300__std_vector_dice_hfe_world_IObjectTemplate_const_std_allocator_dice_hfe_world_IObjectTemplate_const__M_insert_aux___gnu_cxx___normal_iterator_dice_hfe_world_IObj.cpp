// FUNCTION: BF2 0x6a3300
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::world::IObjectTemplate const*, std::allocator<dice::hfe::world::IObjectTemplate const*> >

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

namespace dice { namespace hfe { namespace world { struct IObjectTemplate { void* p; ~IObjectTemplate(); }; } } }

template class std::vector<dice::hfe::world::IObjectTemplate const*, std::allocator<dice::hfe::world::IObjectTemplate const*> >;
