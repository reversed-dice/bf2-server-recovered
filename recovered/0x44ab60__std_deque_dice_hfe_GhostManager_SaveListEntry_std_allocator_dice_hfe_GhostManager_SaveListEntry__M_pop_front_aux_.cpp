// FUNCTION: BF2 0x44ab60
// std::deque<dice::hfe::GhostManager::SaveListEntry, std::allocator<dice::hfe::GhostManager::SaveListEntry> >

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace GhostManager { struct SaveListEntry { float x, y, z; }; } } }

template class std::deque<dice::hfe::GhostManager::SaveListEntry, std::allocator<dice::hfe::GhostManager::SaveListEntry> >;
