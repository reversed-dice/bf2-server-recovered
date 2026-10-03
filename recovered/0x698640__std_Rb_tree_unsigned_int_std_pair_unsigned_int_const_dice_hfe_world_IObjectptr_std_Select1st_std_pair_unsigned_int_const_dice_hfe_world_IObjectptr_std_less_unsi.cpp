// FUNCTION: BF2 0x698640
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<unsigned int, std::pair<unsigned int const, dice::hfe::world::IObject*>, std::_Select1st<std::pair<unsigned int const, dice::hfe::world::IObject*> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, dice::hfe::world::IObject*> > >

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

template class std::_Rb_tree<unsigned int, std::pair<unsigned int const, dice::hfe::world::IObject*>, std::_Select1st<std::pair<unsigned int const, dice::hfe::world::IObject*> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, dice::hfe::world::IObject*> > >;
