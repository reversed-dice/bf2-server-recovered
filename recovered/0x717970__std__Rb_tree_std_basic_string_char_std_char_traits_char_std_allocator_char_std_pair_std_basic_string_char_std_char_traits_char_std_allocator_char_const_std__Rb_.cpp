// FUNCTION: BF2 0x717970
// BF2_FLAGS: -fno-strict-aliasing
// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::_Rb_tree_iterator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<dice::hfe::world::CollisionMeshTemplate*, std::allocator<dice::hfe::world::CollisionMeshTemplate*> > > > >, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::_Rb_tree_iterator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<dice::hfe::world::CollisionMeshTemplate*, std::allocator<dice::hfe::world::CollisionMeshTemplate*> > > > > >, dice::hfe::NoCaseStringCompare, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::_Rb_tree_iterator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<dice::hfe::world::CollisionMeshTemplate*, std::allocator<dice::hfe::world::CollisionMeshTemplate*> > > > > > >

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

namespace dice { namespace hfe { struct NoCaseStringCompare { bool operator()(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const; }; } }
namespace dice { namespace hfe { namespace world { struct CollisionMeshTemplate ; } } }

template class std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::_Rb_tree_iterator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<dice::hfe::world::CollisionMeshTemplate*, std::allocator<dice::hfe::world::CollisionMeshTemplate*> > > > >, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::_Rb_tree_iterator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<dice::hfe::world::CollisionMeshTemplate*, std::allocator<dice::hfe::world::CollisionMeshTemplate*> > > > > >, dice::hfe::NoCaseStringCompare, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::_Rb_tree_iterator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<dice::hfe::world::CollisionMeshTemplate*, std::allocator<dice::hfe::world::CollisionMeshTemplate*> > > > > > >;
