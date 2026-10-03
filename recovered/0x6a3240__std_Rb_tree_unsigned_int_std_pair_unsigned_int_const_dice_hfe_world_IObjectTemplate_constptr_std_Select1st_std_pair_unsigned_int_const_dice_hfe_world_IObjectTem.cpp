// FUNCTION: BF2 0x6a3240
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<unsigned int, std::pair<unsigned int const, dice::hfe::world::IObjectTemplate const*>, std::_Select1st<std::pair<unsigned int const, dice::hfe::world::IObjectTemplate const*> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, dice::hfe::world::IObjectTemplate const*> > >

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

template class std::_Rb_tree<unsigned int, std::pair<unsigned int const, dice::hfe::world::IObjectTemplate const*>, std::_Select1st<std::pair<unsigned int const, dice::hfe::world::IObjectTemplate const*> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, dice::hfe::world::IObjectTemplate const*> > >;
