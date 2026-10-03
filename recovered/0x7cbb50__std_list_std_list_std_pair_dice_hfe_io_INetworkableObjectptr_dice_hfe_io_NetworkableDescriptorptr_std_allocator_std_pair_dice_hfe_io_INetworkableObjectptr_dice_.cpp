// FUNCTION: BF2 0x7cbb50
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// std::list<std::list<std::pair<dice::hfe::io::INetworkableObject*, dice::hfe::io::NetworkableDescriptor*>, std::allocator<std::pair<dice::hfe::io::INetworkableObject*, dice::hfe::io::NetworkableDescriptor*> > >, std::allocator<std::list<std::pair<dice::hfe::io::INetworkableObject*, dice::hfe::io::NetworkableDescriptor*>, std::allocator<std::pair<dice::hfe::io::INetworkableObject*, dice::hfe::io::NetworkableDescriptor*> > > > >

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

namespace dice { namespace hfe { namespace io { struct INetworkableObject ; } } }
namespace dice { namespace hfe { namespace io { struct NetworkableDescriptor ; } } }

template class std::list<std::list<std::pair<dice::hfe::io::INetworkableObject*, dice::hfe::io::NetworkableDescriptor*>, std::allocator<std::pair<dice::hfe::io::INetworkableObject*, dice::hfe::io::NetworkableDescriptor*> > >, std::allocator<std::list<std::pair<dice::hfe::io::INetworkableObject*, dice::hfe::io::NetworkableDescriptor*>, std::allocator<std::pair<dice::hfe::io::INetworkableObject*, dice::hfe::io::NetworkableDescriptor*> > > > >;
