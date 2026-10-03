// FUNCTION: BF2 0x4bb5b0
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<unsigned int, std::pair<unsigned int const, dice::hfe::ISpawnGroup*>, std::_Select1st<std::pair<unsigned int const, dice::hfe::ISpawnGroup*> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, dice::hfe::ISpawnGroup*> > >

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

namespace dice { namespace hfe { struct ISpawnGroup ; } }

template class std::_Rb_tree<unsigned int, std::pair<unsigned int const, dice::hfe::ISpawnGroup*>, std::_Select1st<std::pair<unsigned int const, dice::hfe::ISpawnGroup*> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, dice::hfe::ISpawnGroup*> > >;
