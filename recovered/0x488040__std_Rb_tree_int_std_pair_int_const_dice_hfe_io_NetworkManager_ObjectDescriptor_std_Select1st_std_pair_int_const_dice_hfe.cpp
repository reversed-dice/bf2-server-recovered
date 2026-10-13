// FUNCTION: BF2 0x488040
// BF2_FLAGS: -fno-strict-aliasing
// std::_Rb_tree<int, std::pair<int const, dice::hfe::io::NetworkManager::ObjectDescriptor>, std::_Select1st<std::pair<int const, dice::hfe::io::NetworkManager::ObjectDescriptor> >, std::less<int>, std::allocator<std::pair<int const, dice::hfe::io::NetworkManager::ObjectDescriptor> > >

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

namespace dice { namespace hfe { namespace io { namespace NetworkManager {

struct Inner { char* p; char _pad[0x10]; ~Inner() { if (p) { delete p; } } };
struct Entry { int a; std::vector<Inner> v; };
struct ObjectDescriptor { std::vector<Entry> v; };

} } } }

template class std::_Rb_tree<int, std::pair<int const, dice::hfe::io::NetworkManager::ObjectDescriptor>, std::_Select1st<std::pair<int const, dice::hfe::io::NetworkManager::ObjectDescriptor> >, std::less<int>, std::allocator<std::pair<int const, dice::hfe::io::NetworkManager::ObjectDescriptor> > >;
