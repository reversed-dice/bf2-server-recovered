// FUNCTION: BF2 0x743550
// BF2_FLAGS: -fno-strict-aliasing
// std::_Rb_tree<unsigned int, pair<unsigned int const, ThreadInfo>, ...>
// Node size 0x38: header(32) + pair(24)
// Pair: key(4) + pad(4) + ThreadInfo(16)
// ThreadInfo: int a(4) + int b(4) + string(8) = 16

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace Profiler {
struct ThreadInfo {
    int a;
    int b;
    std::string s;
};
} } }

typedef std::map<unsigned int, dice::hfe::Profiler::ThreadInfo> ThreadInfoMap;

template class std::_Rb_tree<
    ThreadInfoMap::key_type,
    ThreadInfoMap::value_type,
    std::_Select1st<ThreadInfoMap::value_type>,
    ThreadInfoMap::key_compare,
    ThreadInfoMap::allocator_type
>;
