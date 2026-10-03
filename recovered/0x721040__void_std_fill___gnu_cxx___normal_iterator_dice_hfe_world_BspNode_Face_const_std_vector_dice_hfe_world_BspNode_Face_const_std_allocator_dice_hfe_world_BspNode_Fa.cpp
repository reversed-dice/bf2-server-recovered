// FUNCTION: BF2 0x721040
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// void std::fill<__gnu_cxx::__normal_iterator<dice::hfe::world::BspNode::Face const**, std::vector<dice::hfe::wo

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

template void std::fill<__gnu_cxx::__normal_iterator<dice::hfe::world::BspNode::Face const**, std::vector<dice::hfe::world::BspNode::Face const*, std::allocator<dice::hfe::world::BspNode::Face const*> > >, dice::hfe::world::BspNode::Face const*>(__gnu_cxx::__normal_iterator<dice::hfe::world::BspNode::Face const**, std::vector<dice::hfe::world::BspNode::Face const*, std::allocator<dice::hfe::world::BspNode::Face const*> > >, __gnu_cxx::__normal_iterator<dice::hfe::world::BspNode::Face const**, std::vector<dice::hfe::world::BspNode::Face const*, std::allocator<dice::hfe::world::BspNode::Face const*> > >, dice::hfe::world::BspNode::Face const* const&);
