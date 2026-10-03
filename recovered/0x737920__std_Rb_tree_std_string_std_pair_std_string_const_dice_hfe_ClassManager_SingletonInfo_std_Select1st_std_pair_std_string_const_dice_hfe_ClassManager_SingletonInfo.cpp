// FUNCTION: BF2 0x737920
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::hfe::ClassManager::SingletonInfo>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::hfe::ClassManager::SingletonInfo> >, std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::hfe::ClassManager::SingletonInfo> > >

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

namespace dice { namespace hfe { namespace ClassManager { struct SingletonInfo { std::string s; }; } } }

template class std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::hfe::ClassManager::SingletonInfo>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::hfe::ClassManager::SingletonInfo> >, std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::hfe::ClassManager::SingletonInfo> > >;
