// FUNCTION: BF2 0x44a130
// std::deque<dice::hfe::GhostManager::ResendQueueEntry, std::allocator<dice::hfe::GhostManager::ResendQueueEntry> >

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

namespace dice { namespace hfe { namespace GhostManager { struct ResendQueueEntry { int x; short y; }; } } }

template class std::deque<dice::hfe::GhostManager::ResendQueueEntry, std::allocator<dice::hfe::GhostManager::ResendQueueEntry> >;
