// FUNCTION: BF2 0x7cb8b0
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<unsigned short, std::pair<unsigned short const, dice::hfe::world::IObject*>, std::_Select1st<std::pair<unsigned short const, dice::hfe::world::IObject*> >, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, dice::hfe::world::IObject*> > >

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

namespace dice { namespace hfe { namespace world { struct IObject ; } } }

template class std::_Rb_tree<unsigned short, std::pair<unsigned short const, dice::hfe::world::IObject*>, std::_Select1st<std::pair<unsigned short const, dice::hfe::world::IObject*> >, std::less<unsigned short>, std::allocator<std::pair<unsigned short const, dice::hfe::world::IObject*> > >;
