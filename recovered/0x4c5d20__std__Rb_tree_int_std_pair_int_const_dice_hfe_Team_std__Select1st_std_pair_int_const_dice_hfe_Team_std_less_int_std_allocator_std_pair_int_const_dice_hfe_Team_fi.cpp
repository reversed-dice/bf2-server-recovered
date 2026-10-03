// FUNCTION: BF2 0x4c5d20
// std::_Rb_tree<int, std::pair<int const, dice::hfe::Team>, std::_Select1st<std::pair<int const, dice::hfe::Team> >, std::less<int>, std::allocator<std::pair<int const, dice::hfe::Team> > >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { struct Team { void* p; ~Team(); }; } }

template class std::_Rb_tree<int, std::pair<int const, dice::hfe::Team>, std::_Select1st<std::pair<int const, dice::hfe::Team> >, std::less<int>, std::allocator<std::pair<int const, dice::hfe::Team> > >;
