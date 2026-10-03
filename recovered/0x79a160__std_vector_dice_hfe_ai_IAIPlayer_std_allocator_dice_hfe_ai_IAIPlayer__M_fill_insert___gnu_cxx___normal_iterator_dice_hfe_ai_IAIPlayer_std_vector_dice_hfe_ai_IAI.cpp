// FUNCTION: BF2 0x79a160
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::ai::IAIPlayer*, std::allocator<dice::hfe::ai::IAIPlayer*> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace ai { struct IAIPlayer; } } }

template class std::vector<dice::hfe::ai::IAIPlayer*, std::allocator<dice::hfe::ai::IAIPlayer*> >;
