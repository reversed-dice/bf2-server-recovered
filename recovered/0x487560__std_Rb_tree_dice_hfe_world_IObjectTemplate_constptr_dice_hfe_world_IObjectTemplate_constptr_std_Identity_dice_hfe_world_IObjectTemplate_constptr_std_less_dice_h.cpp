// FUNCTION: BF2 0x487560
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<dice::hfe::world::IObjectTemplate const*, dice::hfe::world::IObjectTemplate const*, std::_Identity<dice::hfe::world::IObjectTemplate const*>, std::less<dice::hfe::world::IObjectTemplate const*>, std::allocator<dice::hfe::world::IObjectTemplate const*> >

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

namespace dice { namespace hfe { namespace world { struct IObjectTemplate { std::string s; }; } } }

template class std::_Rb_tree<dice::hfe::world::IObjectTemplate const*, dice::hfe::world::IObjectTemplate const*, std::_Identity<dice::hfe::world::IObjectTemplate const*>, std::less<dice::hfe::world::IObjectTemplate const*>, std::allocator<dice::hfe::world::IObjectTemplate const*> >;
