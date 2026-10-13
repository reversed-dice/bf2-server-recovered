// FUNCTION: BF2 0x7de900
// BF2_FLAGS: -fno-strict-aliasing
// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<dice::hfe::io::FileChangeManager::File, std::allocator<dice::hfe::io::FileChangeManager::File> > >, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<dice::hfe::io::FileChangeManager::File, std::allocator<dice::hfe::io::FileChangeManager::File> > > >, dice::hfe::NoCaseStringCompare, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<dice::hfe::io::FileChangeManager::File, std::allocator<dice::hfe::io::FileChangeManager::File> > > > >

#include <strings.h>
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

namespace dice { namespace hfe { struct NoCaseStringCompare { bool operator()(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const& a, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const& b) const { return strcasecmp(a.c_str(), b.c_str()) < 0; } }; } }
namespace dice { namespace hfe { namespace io { namespace FileChangeManager { struct File { void* m_a; std::string s; void* m_b; void* m_c; }; } } } }

template class std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<dice::hfe::io::FileChangeManager::File, std::allocator<dice::hfe::io::FileChangeManager::File> > >, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<dice::hfe::io::FileChangeManager::File, std::allocator<dice::hfe::io::FileChangeManager::File> > > >, dice::hfe::NoCaseStringCompare, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<dice::hfe::io::FileChangeManager::File, std::allocator<dice::hfe::io::FileChangeManager::File> > > > >;
// bench nonce 1666524031791046181865552272
