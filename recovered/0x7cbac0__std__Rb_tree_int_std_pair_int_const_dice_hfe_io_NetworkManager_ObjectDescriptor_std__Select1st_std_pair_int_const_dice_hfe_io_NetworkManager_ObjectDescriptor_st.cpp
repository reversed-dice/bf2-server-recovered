// FUNCTION: BF2 0x7cbac0
// std::_Rb_tree<int, std::pair<int const, dice::hfe::io::NetworkManager::ObjectDescriptor>, std::_Select1st<std::pair<int const, dice::hfe::io::NetworkManager::ObjectDescriptor> >, std::less<int>, std::allocator<std::pair<int const, dice::hfe::io::NetworkManager::ObjectDescriptor> > >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace io { namespace NetworkManager { struct ObjectDescriptor { void* p; ~ObjectDescriptor(); }; } } } }

template class std::_Rb_tree<int, std::pair<int const, dice::hfe::io::NetworkManager::ObjectDescriptor>, std::_Select1st<std::pair<int const, dice::hfe::io::NetworkManager::ObjectDescriptor> >, std::less<int>, std::allocator<std::pair<int const, dice::hfe::io::NetworkManager::ObjectDescriptor> > >;
