// FUNCTION: BF2 0x48dac0
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<dice::hfe::world::IPlayer*, std::pair<dice::hfe::world::IPlayer* const, int>, std::_Select1st<std::pair<dice::hfe::world::IPlayer* const, int> >, std::less<dice::hfe::world::IPlayer*>, std::allocator<std::pair<dice::hfe::world::IPlayer* const, int> > >

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

namespace dice { namespace hfe { namespace world { struct IPlayer ; } } }

template class std::_Rb_tree<dice::hfe::world::IPlayer*, std::pair<dice::hfe::world::IPlayer* const, int>, std::_Select1st<std::pair<dice::hfe::world::IPlayer* const, int> >, std::less<dice::hfe::world::IPlayer*>, std::allocator<std::pair<dice::hfe::world::IPlayer* const, int> > >;
