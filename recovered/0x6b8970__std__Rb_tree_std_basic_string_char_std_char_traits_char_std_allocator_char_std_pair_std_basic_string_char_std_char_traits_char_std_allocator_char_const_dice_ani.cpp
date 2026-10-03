// FUNCTION: BF2 0x6b8970
// BF2_FLAGS: -fno-strict-aliasing
// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::anim::BoneAnimation*>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::anim::BoneAnimation*> >, dice::hfe::NoCaseStringCompare, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::anim::BoneAnimation*> > >

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

namespace dice { namespace anim { struct BoneAnimation ; } }
namespace dice { namespace hfe { struct NoCaseStringCompare { bool operator()(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) const; }; } }

template class std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::anim::BoneAnimation*>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::anim::BoneAnimation*> >, dice::hfe::NoCaseStringCompare, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::anim::BoneAnimation*> > >;
