// FUNCTION: BF2 0x793c50
// std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::hfe::ai::WeaponTemplateManager::MgrTemplate*>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::hfe::ai::WeaponTemplateManager::MgrTemplate*> >, dice::hfe::NoCaseStringCompare, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::hfe::ai::WeaponTemplateManager::MgrTemplate*> > >

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
namespace dice { namespace hfe { namespace ai { namespace WeaponTemplateManager { struct MgrTemplate ; } } } }

template class std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::hfe::ai::WeaponTemplateManager::MgrTemplate*>, std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::hfe::ai::WeaponTemplateManager::MgrTemplate*> >, dice::hfe::NoCaseStringCompare, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, dice::hfe::ai::WeaponTemplateManager::MgrTemplate*> > >;
