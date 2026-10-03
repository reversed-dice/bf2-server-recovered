// FUNCTION: BF2 0x709fd0
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::world::BspNode::Face const*, std::allocator<dice::hfe::world::BspNode::Face const*> >

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

namespace dice { namespace hfe { namespace world { namespace BspNode { struct Face { void* p; ~Face(); }; } } } }

template class std::vector<dice::hfe::world::BspNode::Face const*, std::allocator<dice::hfe::world::BspNode::Face const*> >;
