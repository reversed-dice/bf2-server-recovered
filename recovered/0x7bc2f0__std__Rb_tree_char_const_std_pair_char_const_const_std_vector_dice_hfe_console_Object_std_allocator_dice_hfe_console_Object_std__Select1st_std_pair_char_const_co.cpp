// FUNCTION: BF2 0x7bc2f0
// std::_Rb_tree<char const*, std::pair<char const* const, std::vector<dice::hfe::console::Object*, std::allocator<dice::hfe::console::Object*> > >, std::_Select1st<std::pair<char const* const, std::vector<dice::hfe::console::Object*, std::allocator<dice::hfe::console::Object*> > > >, dice::hfe::NoCaseCharPtrCompare, std::allocator<std::pair<char const* const, std::vector<dice::hfe::console::Object*, std::allocator<dice::hfe::console::Object*> > > > >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { struct NoCaseCharPtrCompare { bool operator()(char const* const&, char const* const&) const; }; } }
namespace dice { namespace hfe { namespace console { struct Object ; } } }

template class std::_Rb_tree<char const*, std::pair<char const* const, std::vector<dice::hfe::console::Object*, std::allocator<dice::hfe::console::Object*> > >, std::_Select1st<std::pair<char const* const, std::vector<dice::hfe::console::Object*, std::allocator<dice::hfe::console::Object*> > > >, dice::hfe::NoCaseCharPtrCompare, std::allocator<std::pair<char const* const, std::vector<dice::hfe::console::Object*, std::allocator<dice::hfe::console::Object*> > > > >;
