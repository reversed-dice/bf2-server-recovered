// FUNCTION: BF2 0x68baa0
// BF2_FLAGS: -fcrossjumping
// std::_Rb_tree<unsigned int, std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::IBase> >, std::_Select1st<std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::IBase> > >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::IBase> > > >

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

namespace dice { namespace hfe { struct IBase { void* p; ~IBase(); }; } }
namespace dice { namespace hfe { template <class T0> struct SmartPtr { void* p; ~SmartPtr(); }; } }

template class std::_Rb_tree<unsigned int, std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::IBase> >, std::_Select1st<std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::IBase> > >, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, dice::hfe::SmartPtr<dice::hfe::IBase> > > >;
