// FUNCTION: BF2 0x4c5f90
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<unsigned char, std::pair<unsigned char const, dice::hfe::Squad*>, std::_Select1st<std::pair<unsigned char const, dice::hfe::Squad*> >, std::less<unsigned char>, std::allocator<std::pair<unsigned char const, dice::hfe::Squad*> > >

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

namespace dice { namespace hfe { struct Squad ; } }

template class std::_Rb_tree<unsigned char, std::pair<unsigned char const, dice::hfe::Squad*>, std::_Select1st<std::pair<unsigned char const, dice::hfe::Squad*> >, std::less<unsigned char>, std::allocator<std::pair<unsigned char const, dice::hfe::Squad*> > >;
