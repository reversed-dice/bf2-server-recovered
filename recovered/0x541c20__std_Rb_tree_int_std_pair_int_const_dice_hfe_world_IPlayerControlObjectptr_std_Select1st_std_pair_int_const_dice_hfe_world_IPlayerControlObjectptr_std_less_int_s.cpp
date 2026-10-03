// FUNCTION: BF2 0x541c20
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<int, std::pair<int const, dice::hfe::world::IPlayerControlObject*>, std::_Select1st<std::pair<int const, dice::hfe::world::IPlayerControlObject*> >, std::less<int>, std::allocator<std::pair<int const, dice::hfe::world::IPlayerControlObject*> > >

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

namespace dice { namespace hfe { namespace world { struct IPlayerControlObject ; } } }

template class std::_Rb_tree<int, std::pair<int const, dice::hfe::world::IPlayerControlObject*>, std::_Select1st<std::pair<int const, dice::hfe::world::IPlayerControlObject*> >, std::less<int>, std::allocator<std::pair<int const, dice::hfe::world::IPlayerControlObject*> > >;
