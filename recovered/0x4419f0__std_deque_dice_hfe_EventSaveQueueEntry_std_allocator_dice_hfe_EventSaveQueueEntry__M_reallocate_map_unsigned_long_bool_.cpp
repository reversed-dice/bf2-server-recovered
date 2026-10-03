// FUNCTION: BF2 0x4419f0
// BF2_FLAGS: -fno-strict-aliasing
// std::deque<dice::hfe::EventSaveQueueEntry, std::allocator<dice::hfe::EventSaveQueueEntry> >

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

namespace dice { namespace hfe { struct EventSaveQueueEntry { float x, y, z; }; } }

template class std::deque<dice::hfe::EventSaveQueueEntry, std::allocator<dice::hfe::EventSaveQueueEntry> >;
