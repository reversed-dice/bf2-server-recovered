// FUNCTION: BF2 0x441e20
// BF2_FLAGS: -fno-strict-aliasing
// std::_Deque_base<dice::hfe::EventSaveQueueEntry, std::allocator<dice::hfe::EventSaveQueueEntry> >

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

namespace dice { namespace hfe {

struct EventSaveQueueEntry {
    char _pad[0x18];
};

} }

template class std::_Deque_base<dice::hfe::EventSaveQueueEntry, std::allocator<dice::hfe::EventSaveQueueEntry> >;
