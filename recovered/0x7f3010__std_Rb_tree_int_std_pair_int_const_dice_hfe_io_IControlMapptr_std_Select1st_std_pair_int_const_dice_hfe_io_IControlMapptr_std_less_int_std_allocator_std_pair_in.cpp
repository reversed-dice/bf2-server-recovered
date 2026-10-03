// FUNCTION: BF2 0x7f3010
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<int, std::pair<int const, dice::hfe::io::IControlMap*>, std::_Select1st<std::pair<int const, dice::hfe::io::IControlMap*> >, std::less<int>, std::allocator<std::pair<int const, dice::hfe::io::IControlMap*> > >

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

namespace dice { namespace hfe { namespace io { struct IControlMap ; } } }

template class std::_Rb_tree<int, std::pair<int const, dice::hfe::io::IControlMap*>, std::_Select1st<std::pair<int const, dice::hfe::io::IControlMap*> >, std::less<int>, std::allocator<std::pair<int const, dice::hfe::io::IControlMap*> > >;
