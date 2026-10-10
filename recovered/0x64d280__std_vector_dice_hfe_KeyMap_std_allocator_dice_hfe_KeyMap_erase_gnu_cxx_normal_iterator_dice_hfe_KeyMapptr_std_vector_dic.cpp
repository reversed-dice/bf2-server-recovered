// FUNCTION: BF2 0x64d280
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::KeyMap, std::allocator<dice::hfe::KeyMap> >

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

struct KeyValue {
    std::string m_key;
    std::string m_value;
};

} }

namespace dice { namespace hfe {

class KeyMap {
public:
    std::vector<KeyValue> m_entries;

    ~KeyMap();
};

} }

template class std::vector<dice::hfe::KeyMap, std::allocator<dice::hfe::KeyMap> >;
