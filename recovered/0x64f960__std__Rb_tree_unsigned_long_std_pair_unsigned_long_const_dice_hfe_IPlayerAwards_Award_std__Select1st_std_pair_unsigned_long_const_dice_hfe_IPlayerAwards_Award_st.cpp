// FUNCTION: BF2 0x64f960
// std::_Rb_tree<unsigned long, std::pair<unsigned long const, dice::hfe::IPlayerAwards::Award>, std::_Select1st<std::pair<unsigned long const, dice::hfe::IPlayerAwards::Award> >, std::less<unsigned long>, std::allocator<std::pair<unsigned long const, dice::hfe::IPlayerAwards::Award> > >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace IPlayerAwards { struct Award { void* p; ~Award(); }; } } }

template class std::_Rb_tree<unsigned long, std::pair<unsigned long const, dice::hfe::IPlayerAwards::Award>, std::_Select1st<std::pair<unsigned long const, dice::hfe::IPlayerAwards::Award> >, std::less<unsigned long>, std::allocator<std::pair<unsigned long const, dice::hfe::IPlayerAwards::Award> > >;
