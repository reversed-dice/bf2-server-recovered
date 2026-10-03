// FUNCTION: BF2 0x41a2f0
// std::_Deque_base<dice::hfe::MapListEntry, std::allocator<dice::hfe::MapListEntry> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { struct MapListEntry { void* p; ~MapListEntry(); }; } }

template class std::_Deque_base<dice::hfe::MapListEntry, std::allocator<dice::hfe::MapListEntry> >;
