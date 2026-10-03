// FUNCTION: BF2 0x44b310
// std::_Deque_base<dice::hfe::GhostManager::ResendQueueEntry, std::allocator<dice::hfe::GhostManager::ResendQueueEntry> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace GhostManager { struct ResendQueueEntry { void* p; ~ResendQueueEntry(); }; } } }

template class std::_Deque_base<dice::hfe::GhostManager::ResendQueueEntry, std::allocator<dice::hfe::GhostManager::ResendQueueEntry> >;
