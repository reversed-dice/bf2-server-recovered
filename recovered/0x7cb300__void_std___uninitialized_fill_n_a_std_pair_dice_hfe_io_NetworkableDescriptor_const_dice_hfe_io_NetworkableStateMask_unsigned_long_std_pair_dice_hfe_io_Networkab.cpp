// FUNCTION: BF2 0x7cb300
// void std::__uninitialized_fill_n_a<std::pair<dice::hfe::io::NetworkableDescriptor const*, dice::hfe::io::Netwo

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

namespace dice { namespace hfe { namespace io { struct NetworkableDescriptor { void* p; ~NetworkableDescriptor(); }; } } }
namespace dice { namespace hfe { namespace io { struct NetworkableStateMask { void* p; ~NetworkableStateMask(); }; } } }

template void std::__uninitialized_fill_n_a<std::pair<dice::hfe::io::NetworkableDescriptor const*, dice::hfe::io::NetworkableStateMask>*, unsigned long, std::pair<dice::hfe::io::NetworkableDescriptor const*, dice::hfe::io::NetworkableStateMask>, std::pair<dice::hfe::io::NetworkableDescriptor const*, dice::hfe::io::NetworkableStateMask> >(std::pair<dice::hfe::io::NetworkableDescriptor const*, dice::hfe::io::NetworkableStateMask>*, unsigned long, std::pair<dice::hfe::io::NetworkableDescriptor const*, dice::hfe::io::NetworkableStateMask> const&, std::allocator<std::pair<dice::hfe::io::NetworkableDescriptor const*, dice::hfe::io::NetworkableStateMask> >);
