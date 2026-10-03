// FUNCTION: BF2 0x527900
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<dice::hfe::world::IObject*, std::pair<dice::hfe::world::IObject* const, dice::hfe::world::IObject*>, std::_Select1st<std::pair<dice::hfe::world::IObject* const, dice::hfe::world::IObject*> >, std::less<dice::hfe::world::IObject*>, std::allocator<std::pair<dice::hfe::world::IObject* const, dice::hfe::world::IObject*> > >

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

namespace dice { namespace hfe { namespace world { struct IObject ; } } }

template class std::_Rb_tree<dice::hfe::world::IObject*, std::pair<dice::hfe::world::IObject* const, dice::hfe::world::IObject*>, std::_Select1st<std::pair<dice::hfe::world::IObject* const, dice::hfe::world::IObject*> >, std::less<dice::hfe::world::IObject*>, std::allocator<std::pair<dice::hfe::world::IObject* const, dice::hfe::world::IObject*> > >;
