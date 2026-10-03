// FUNCTION: BF2 0x43ef10
// BF2_FLAGS: -fno-strict-aliasing
// std::_Deque_base<dice::hfe::DataBlock*, std::allocator<dice::hfe::DataBlock*> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { struct DataBlock; } }

template class std::_Deque_base<dice::hfe::DataBlock*, std::allocator<dice::hfe::DataBlock*> >;
