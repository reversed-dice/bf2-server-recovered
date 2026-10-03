// FUNCTION: BF2 0x44afe0
// std::_Deque_base<dice::hfe::GhostManager::SaveListEntry, std::allocator<dice::hfe::GhostManager::SaveListEntry> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace GhostManager { struct SaveListEntry { void* p; ~SaveListEntry(); }; } } }

template class std::_Deque_base<dice::hfe::GhostManager::SaveListEntry, std::allocator<dice::hfe::GhostManager::SaveListEntry> >;
