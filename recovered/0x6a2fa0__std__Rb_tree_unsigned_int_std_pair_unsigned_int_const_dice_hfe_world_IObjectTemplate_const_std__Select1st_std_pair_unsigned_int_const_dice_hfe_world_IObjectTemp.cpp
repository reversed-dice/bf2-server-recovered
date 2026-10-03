// FUNCTION: BF2 0x6a2fa0
// std::_Rb_tree<unsigned int, std::pair<unsigned int const, dice::hfe::world::IObjectTemplate const*>, std::_Select1st<std::pair<unsigned int const, dice::hfe::world::IObjectTemplate const*> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, dice::hfe::world::IObjectTemplate const*> > >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace world { struct IObjectTemplate { void* p; ~IObjectTemplate(); }; } } }

template class std::_Rb_tree<unsigned int, std::pair<unsigned int const, dice::hfe::world::IObjectTemplate const*>, std::_Select1st<std::pair<unsigned int const, dice::hfe::world::IObjectTemplate const*> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, dice::hfe::world::IObjectTemplate const*> > >;
