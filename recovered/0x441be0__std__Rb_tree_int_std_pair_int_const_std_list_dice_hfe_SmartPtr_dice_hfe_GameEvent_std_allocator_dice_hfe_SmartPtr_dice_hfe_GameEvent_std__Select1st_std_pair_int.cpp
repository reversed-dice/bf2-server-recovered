// FUNCTION: BF2 0x441be0
// std::_Rb_tree<int, std::pair<int const, std::list<dice::hfe::SmartPtr<dice::hfe::GameEvent>, std::allocator<dice::hfe::SmartPtr<dice::hfe::GameEvent> > >*>, std::_Select1st<std::pair<int const, std::list<dice::hfe::SmartPtr<dice::hfe::GameEvent>, std::allocator<dice::hfe::SmartPtr<dice::hfe::GameEvent> > >*> >, std::less<int>, std::allocator<std::pair<int const, std::list<dice::hfe::SmartPtr<dice::hfe::GameEvent>, std::allocator<dice::hfe::SmartPtr<dice::hfe::GameEvent> > >*> > >

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

namespace dice { namespace hfe { struct GameEvent { void* p; ~GameEvent(); }; } }
namespace dice { namespace hfe { template <class T0> struct SmartPtr { void* p; ~SmartPtr(); }; } }

template class std::_Rb_tree<int, std::pair<int const, std::list<dice::hfe::SmartPtr<dice::hfe::GameEvent>, std::allocator<dice::hfe::SmartPtr<dice::hfe::GameEvent> > >*>, std::_Select1st<std::pair<int const, std::list<dice::hfe::SmartPtr<dice::hfe::GameEvent>, std::allocator<dice::hfe::SmartPtr<dice::hfe::GameEvent> > >*> >, std::less<int>, std::allocator<std::pair<int const, std::list<dice::hfe::SmartPtr<dice::hfe::GameEvent>, std::allocator<dice::hfe::SmartPtr<dice::hfe::GameEvent> > >*> > >;
