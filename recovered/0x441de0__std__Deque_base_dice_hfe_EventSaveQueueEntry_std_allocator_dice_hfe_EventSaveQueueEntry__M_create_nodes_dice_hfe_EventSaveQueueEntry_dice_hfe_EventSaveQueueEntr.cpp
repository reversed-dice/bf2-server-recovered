// FUNCTION: BF2 0x441de0
// std::_Deque_base<dice::hfe::EventSaveQueueEntry, std::allocator<dice::hfe::EventSaveQueueEntry> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { struct EventSaveQueueEntry { float x, y, z; }; } }

template class std::_Deque_base<dice::hfe::EventSaveQueueEntry, std::allocator<dice::hfe::EventSaveQueueEntry> >;
