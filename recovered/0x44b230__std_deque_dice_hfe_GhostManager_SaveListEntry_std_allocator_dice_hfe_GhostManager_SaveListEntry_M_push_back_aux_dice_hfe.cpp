// FUNCTION: BF2 0x44b230
#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace GhostManager {

struct SaveListEntry {
    void* p;
    unsigned short s;
    unsigned int a;
    unsigned int b;
};

} } }

template class std::deque<dice::hfe::GhostManager::SaveListEntry, std::allocator<dice::hfe::GhostManager::SaveListEntry> >;
