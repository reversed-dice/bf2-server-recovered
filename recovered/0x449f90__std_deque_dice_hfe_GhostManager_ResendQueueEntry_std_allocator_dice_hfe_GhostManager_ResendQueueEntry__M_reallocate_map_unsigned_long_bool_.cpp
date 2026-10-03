// FUNCTION: BF2 0x449f90
// BF2_FLAGS: -fno-strict-aliasing
// std::deque<dice::hfe::GhostManager::ResendQueueEntry, std::allocator<dice::hfe::GhostManager::ResendQueueEntry> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace GhostManager { struct ResendQueueEntry { void* p; ~ResendQueueEntry(); }; } } }

template class std::deque<dice::hfe::GhostManager::ResendQueueEntry, std::allocator<dice::hfe::GhostManager::ResendQueueEntry> >;
