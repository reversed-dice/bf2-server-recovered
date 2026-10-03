// FUNCTION: BF2 0x528850
// BF2_FLAGS: -fno-strict-aliasing
// std::_Rb_tree<dice::hfe::world::IObject*, std::pair<dice::hfe::world::IObject* const, std::vector<dice::hfe::world::IObject*, std::allocator<dice::hfe::world::IObject*> > >, std::_Select1st<std::pair<dice::hfe::world::IObject* const, std::vector<dice::hfe::world::IObject*, std::allocator<dice::hfe::world::IObject*> > > >, std::less<dice::hfe::world::IObject*>, std::allocator<std::pair<dice::hfe::world::IObject* const, std::vector<dice::hfe::world::IObject*, std::allocator<dice::hfe::world::IObject*> > > > >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace world { struct IObject; } } }

template class std::_Rb_tree<dice::hfe::world::IObject*, std::pair<dice::hfe::world::IObject* const, std::vector<dice::hfe::world::IObject*, std::allocator<dice::hfe::world::IObject*> > >, std::_Select1st<std::pair<dice::hfe::world::IObject* const, std::vector<dice::hfe::world::IObject*, std::allocator<dice::hfe::world::IObject*> > > >, std::less<dice::hfe::world::IObject*>, std::allocator<std::pair<dice::hfe::world::IObject* const, std::vector<dice::hfe::world::IObject*, std::allocator<dice::hfe::world::IObject*> > > > >;
