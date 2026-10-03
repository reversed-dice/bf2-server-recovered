// FUNCTION: BF2 0x6559f0
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<unsigned long, std::pair<unsigned long const, dice::hfe::IPlayerAwards::Award>, std::_Select1st<std::pair<unsigned long const, dice::hfe::IPlayerAwards::Award> >, std::less<unsigned long>, std::allocator<std::pair<unsigned long const, dice::hfe::IPlayerAwards::Award> > >

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

namespace dice { namespace hfe { namespace IPlayerAwards { struct Award { std::string s; }; } } }

template class std::_Rb_tree<unsigned long, std::pair<unsigned long const, dice::hfe::IPlayerAwards::Award>, std::_Select1st<std::pair<unsigned long const, dice::hfe::IPlayerAwards::Award> >, std::less<unsigned long>, std::allocator<std::pair<unsigned long const, dice::hfe::IPlayerAwards::Award> > >;
