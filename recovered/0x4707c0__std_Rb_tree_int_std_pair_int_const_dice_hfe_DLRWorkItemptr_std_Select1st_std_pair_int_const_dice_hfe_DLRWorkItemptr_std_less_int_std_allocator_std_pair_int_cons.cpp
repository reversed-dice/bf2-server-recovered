// FUNCTION: BF2 0x4707c0
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<int, std::pair<int const, dice::hfe::DLRWorkItem*>, std::_Select1st<std::pair<int const, dice::hfe::DLRWorkItem*> >, std::less<int>, std::allocator<std::pair<int const, dice::hfe::DLRWorkItem*> > >

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

namespace dice { namespace hfe { struct DLRWorkItem ; } }

template class std::_Rb_tree<int, std::pair<int const, dice::hfe::DLRWorkItem*>, std::_Select1st<std::pair<int const, dice::hfe::DLRWorkItem*> >, std::less<int>, std::allocator<std::pair<int const, dice::hfe::DLRWorkItem*> > >;
