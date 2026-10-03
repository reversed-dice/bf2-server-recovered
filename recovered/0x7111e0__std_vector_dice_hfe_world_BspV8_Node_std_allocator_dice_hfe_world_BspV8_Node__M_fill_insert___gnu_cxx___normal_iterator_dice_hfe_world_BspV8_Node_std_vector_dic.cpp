// FUNCTION: BF2 0x7111e0
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::world::BspV8::Node, std::allocator<dice::hfe::world::BspV8::Node> >

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

namespace dice { namespace hfe { namespace world { namespace BspV8 { struct Node { float x, y, z, w; }; } } } }

template class std::vector<dice::hfe::world::BspV8::Node, std::allocator<dice::hfe::world::BspV8::Node> >;
