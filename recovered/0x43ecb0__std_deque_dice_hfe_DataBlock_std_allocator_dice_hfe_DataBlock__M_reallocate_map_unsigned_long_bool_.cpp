// FUNCTION: BF2 0x43ecb0
// BF2_FLAGS: -fno-strict-aliasing
// std::deque<dice::hfe::DataBlock*, std::allocator<dice::hfe::DataBlock*> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { struct DataBlock; } }

template class std::deque<dice::hfe::DataBlock*, std::allocator<dice::hfe::DataBlock*> >;
