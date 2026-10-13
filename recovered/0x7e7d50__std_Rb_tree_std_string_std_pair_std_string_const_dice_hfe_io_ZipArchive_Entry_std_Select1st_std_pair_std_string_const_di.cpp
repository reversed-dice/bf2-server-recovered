// FUNCTION: BF2 0x7e7d50
// BF2_FLAGS: -fno-strict-aliasing
// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::hfe::io::ZipArchive::Entry>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::hfe::io::ZipArchive::Entry> >, std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::hfe::io::ZipArchive::Entry> > >

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

namespace dice { namespace hfe { namespace io { namespace ZipArchive { struct Entry { unsigned long long m[19]; }; } } } }

template class std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::hfe::io::ZipArchive::Entry>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::hfe::io::ZipArchive::Entry> >, std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::hfe::io::ZipArchive::Entry> > >;
