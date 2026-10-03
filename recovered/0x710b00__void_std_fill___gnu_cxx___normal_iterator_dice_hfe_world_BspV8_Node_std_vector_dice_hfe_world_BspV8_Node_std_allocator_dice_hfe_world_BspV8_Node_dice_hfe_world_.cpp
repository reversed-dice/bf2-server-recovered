// FUNCTION: BF2 0x710b00
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// void std::fill<__gnu_cxx::__normal_iterator<dice::hfe::world::BspV8::Node*, std::vector<dice::hfe::world::BspV

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

template void std::fill<__gnu_cxx::__normal_iterator<dice::hfe::world::BspV8::Node*, std::vector<dice::hfe::world::BspV8::Node, std::allocator<dice::hfe::world::BspV8::Node> > >, dice::hfe::world::BspV8::Node>(__gnu_cxx::__normal_iterator<dice::hfe::world::BspV8::Node*, std::vector<dice::hfe::world::BspV8::Node, std::allocator<dice::hfe::world::BspV8::Node> > >, __gnu_cxx::__normal_iterator<dice::hfe::world::BspV8::Node*, std::vector<dice::hfe::world::BspV8::Node, std::allocator<dice::hfe::world::BspV8::Node> > >, dice::hfe::world::BspV8::Node const&);
