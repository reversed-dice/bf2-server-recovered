// FUNCTION: BF2 0x6b88b0
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::anim::BoneAnimation*>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::anim::BoneAnimation*> >, dice::hfe::NoCaseStringCompare, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::anim::BoneAnimation*> > >

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

namespace dice { namespace anim { struct BoneAnimation ; } }
namespace dice { namespace hfe { struct NoCaseStringCompare { bool operator()(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const& a, std::basic_string<char, std::char_traits<char>, std::allocator<char> > const& b) const { return strcasecmp(a.c_str(), b.c_str()) < 0; } }; } }

template class std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::anim::BoneAnimation*>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::anim::BoneAnimation*> >, dice::hfe::NoCaseStringCompare, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::anim::BoneAnimation*> > >;
