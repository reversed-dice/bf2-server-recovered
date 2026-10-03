// FUNCTION: BF2 0x5f2f30
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<int, std::pair<int const, dice::hfe::Vec3>, std::_Select1st<std::pair<int const, dice::hfe::Vec3> >, std::less<int>, std::allocator<std::pair<int const, dice::hfe::Vec3> > >

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

namespace dice { namespace hfe { struct Vec3 { std::string s; }; } }

template class std::_Rb_tree<int, std::pair<int const, dice::hfe::Vec3>, std::_Select1st<std::pair<int const, dice::hfe::Vec3> >, std::less<int>, std::allocator<std::pair<int const, dice::hfe::Vec3> > >;
