// FUNCTION: BF2 0x449c70
// void std::__uninitialized_fill_n_a<dice::hfe::GhostManager::GhostSaveBufferEntry*, unsigned long, dice::hfe::G

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

namespace dice { namespace hfe { namespace GhostManager { struct GhostSaveBufferEntry { void* p; ~GhostSaveBufferEntry(); }; } } }

template void std::__uninitialized_fill_n_a<dice::hfe::GhostManager::GhostSaveBufferEntry*, unsigned long, dice::hfe::GhostManager::GhostSaveBufferEntry, dice::hfe::GhostManager::GhostSaveBufferEntry>(dice::hfe::GhostManager::GhostSaveBufferEntry*, unsigned long, dice::hfe::GhostManager::GhostSaveBufferEntry const&, std::allocator<dice::hfe::GhostManager::GhostSaveBufferEntry>);
