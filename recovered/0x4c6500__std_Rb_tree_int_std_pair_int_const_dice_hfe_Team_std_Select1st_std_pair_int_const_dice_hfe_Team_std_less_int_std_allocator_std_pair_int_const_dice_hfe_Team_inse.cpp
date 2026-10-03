// FUNCTION: BF2 0x4c6500
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<int, std::pair<int const, dice::hfe::Team>, std::_Select1st<std::pair<int const, dice::hfe::Team> >, std::less<int>, std::allocator<std::pair<int const, dice::hfe::Team> > >

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

namespace dice { namespace hfe { struct Team { std::string s; }; } }

template class std::_Rb_tree<int, std::pair<int const, dice::hfe::Team>, std::_Select1st<std::pair<int const, dice::hfe::Team> >, std::less<int>, std::allocator<std::pair<int const, dice::hfe::Team> > >;
