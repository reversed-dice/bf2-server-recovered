// FUNCTION: BF2 0x6a0730
// std::_Rb_tree<unsigned int, std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::world::IObjectTemplateComponent> >, std::_Select1st<std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::world::IObjectTemplateComponent> > >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::world::IObjectTemplateComponent> > > >

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

namespace dice { namespace hfe { template <class T0> struct SmartPtr { void* p; ~SmartPtr(); }; } }
namespace dice { namespace hfe { namespace world { struct IObjectTemplateComponent { void* p; ~IObjectTemplateComponent(); }; } } }

template class std::_Rb_tree<unsigned int, std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::world::IObjectTemplateComponent> >, std::_Select1st<std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::world::IObjectTemplateComponent> > >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::world::IObjectTemplateComponent> > > >;
