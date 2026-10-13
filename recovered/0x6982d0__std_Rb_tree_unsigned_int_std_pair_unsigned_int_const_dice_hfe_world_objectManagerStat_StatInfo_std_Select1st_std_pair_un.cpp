// FUNCTION: BF2 0x6982d0
// std::_Rb_tree<unsigned int, std::pair<unsigned int const, dice::hfe::world::objectManagerStat::StatInfo>, std::_Select1st<std::pair<unsigned int const, dice::hfe::world::objectManagerStat::StatInfo> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, dice::hfe::world::objectManagerStat::StatInfo> > >

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

namespace dice { namespace hfe { namespace world { namespace objectManagerStat { struct StatInfo { float x, y, z, w; double a, b; }; } } } }

template class std::_Rb_tree<unsigned int, std::pair<unsigned int const, dice::hfe::world::objectManagerStat::StatInfo>, std::_Select1st<std::pair<unsigned int const, dice::hfe::world::objectManagerStat::StatInfo> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, dice::hfe::world::objectManagerStat::StatInfo> > >;
