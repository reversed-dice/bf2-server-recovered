// FUNCTION: BF2 0x470560
// BF2_FLAGS: -fno-strict-aliasing
// std::deque<dice::hfe::DLRWorkItem*, std::allocator<dice::hfe::DLRWorkItem*> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { struct DLRWorkItem; } }

template class std::deque<dice::hfe::DLRWorkItem*, std::allocator<dice::hfe::DLRWorkItem*> >;
