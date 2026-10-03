// FUNCTION: BF2 0x70a130
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::world::BspNode::Face*, std::allocator<dice::hfe::world::BspNode::Face*> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace world { namespace BspNode { struct Face; } } } }

template class std::vector<dice::hfe::world::BspNode::Face*, std::allocator<dice::hfe::world::BspNode::Face*> >;
