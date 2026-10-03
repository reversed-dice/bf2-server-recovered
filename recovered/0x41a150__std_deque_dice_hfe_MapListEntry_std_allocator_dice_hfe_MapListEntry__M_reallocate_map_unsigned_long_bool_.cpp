// FUNCTION: BF2 0x41a150
// BF2_FLAGS: -fno-strict-aliasing
// std::deque<dice::hfe::MapListEntry, std::allocator<dice::hfe::MapListEntry> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { struct MapListEntry { float x, y, z; }; } }

template class std::deque<dice::hfe::MapListEntry, std::allocator<dice::hfe::MapListEntry> >;
