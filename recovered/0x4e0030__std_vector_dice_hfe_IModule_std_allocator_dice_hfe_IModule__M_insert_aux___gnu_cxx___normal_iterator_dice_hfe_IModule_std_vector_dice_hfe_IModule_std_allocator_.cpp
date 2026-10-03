// FUNCTION: BF2 0x4e0030
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::IModule*, std::allocator<dice::hfe::IModule*> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { struct IModule; } }

template class std::vector<dice::hfe::IModule*, std::allocator<dice::hfe::IModule*> >;
