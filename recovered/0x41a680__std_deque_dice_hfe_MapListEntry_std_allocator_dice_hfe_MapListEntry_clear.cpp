// FUNCTION: BF2 0x41a680
// BF2_FLAGS: -fno-strict-aliasing
// std::deque<dice::hfe::MapListEntry, std::allocator<dice::hfe::MapListEntry> >

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

struct MapListEntry {
    std::string m_a;            
    std::string m_b;            
    void* m_x;                  
};

} }

template class std::deque<dice::hfe::MapListEntry, std::allocator<dice::hfe::MapListEntry> >;
