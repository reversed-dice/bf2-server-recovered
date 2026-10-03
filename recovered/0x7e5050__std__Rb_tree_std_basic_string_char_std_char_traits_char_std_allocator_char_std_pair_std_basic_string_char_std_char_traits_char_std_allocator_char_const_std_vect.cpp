// FUNCTION: BF2 0x7e5050
// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<dice::hfe::io::IArchive*, std::allocator<dice::hfe::io::IArchive*> > >, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<dice::hfe::io::IArchive*, std::allocator<dice::hfe::io::IArchive*> > > >, dice::hfe::NoCaseStringCompare, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<dice::hfe::io::IArchive*, std::allocator<dice::hfe::io::IArchive*> > > > >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { struct NoCaseStringCompare { bool operator()(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const; }; } }
namespace dice { namespace hfe { namespace io { struct IArchive ; } } }

template class std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<dice::hfe::io::IArchive*, std::allocator<dice::hfe::io::IArchive*> > >, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<dice::hfe::io::IArchive*, std::allocator<dice::hfe::io::IArchive*> > > >, dice::hfe::NoCaseStringCompare, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<dice::hfe::io::IArchive*, std::allocator<dice::hfe::io::IArchive*> > > > >;
