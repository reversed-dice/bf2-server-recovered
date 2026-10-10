// FUNCTION: BF2 0x44b0e0
// BF2_FLAGS: -fno-strict-aliasing
// std::_Deque_base<dice::hfe::GhostManager::SaveListEntry, std::allocator<dice::hfe::GhostManager::SaveListEntry> >

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

namespace dice { namespace hfe { namespace GhostManager {

struct SaveListEntry { float x, y, z; float pad0, pad1, pad2; };

} } }

template class std::_Deque_base<dice::hfe::GhostManager::SaveListEntry, std::allocator<dice::hfe::GhostManager::SaveListEntry> >;
