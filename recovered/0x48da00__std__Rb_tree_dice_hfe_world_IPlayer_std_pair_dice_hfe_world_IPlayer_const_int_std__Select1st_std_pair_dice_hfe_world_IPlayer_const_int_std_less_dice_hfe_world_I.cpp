// FUNCTION: BF2 0x48da00
// std::_Rb_tree<dice::hfe::world::IPlayer*, std::pair<dice::hfe::world::IPlayer* const, int>, std::_Select1st<std::pair<dice::hfe::world::IPlayer* const, int> >, std::less<dice::hfe::world::IPlayer*>, std::allocator<std::pair<dice::hfe::world::IPlayer* const, int> > >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace world { struct IPlayer; } } }

template class std::_Rb_tree<dice::hfe::world::IPlayer*, std::pair<dice::hfe::world::IPlayer* const, int>, std::_Select1st<std::pair<dice::hfe::world::IPlayer* const, int> >, std::less<dice::hfe::world::IPlayer*>, std::allocator<std::pair<dice::hfe::world::IPlayer* const, int> > >;
