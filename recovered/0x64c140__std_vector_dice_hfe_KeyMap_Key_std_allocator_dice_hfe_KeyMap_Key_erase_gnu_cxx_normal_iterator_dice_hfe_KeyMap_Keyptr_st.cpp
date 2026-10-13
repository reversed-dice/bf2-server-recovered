// FUNCTION: BF2 0x64c140
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::KeyMap::Key, std::allocator<dice::hfe::KeyMap::Key> >

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

namespace dice { namespace hfe { namespace KeyMap {

struct Key {
        std::string m_key;
        std::string m_value;
    };

} } }

template class std::vector<dice::hfe::KeyMap::Key, std::allocator<dice::hfe::KeyMap::Key> >;
