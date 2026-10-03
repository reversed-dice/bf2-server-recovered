// FUNCTION: BF2 0x466c90
// BF2_FLAGS: -fno-strict-aliasing
// std::_Rb_tree<int, pair<int const, DisconnectType>, ...>
// Node size 0x38 = 56 bytes: header(32) + pair(24)
// Pair: key(4) + pad(4) + DisconnectType(16)
// DisconnectType: int a(4) + int b(4) + string(8) = 16

#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe {
struct DisconnectType {
    int a;
    int b;
    std::string s;
};
} }

typedef std::map<int, dice::hfe::DisconnectType> DisconnectMap;

template class std::_Rb_tree<
    DisconnectMap::key_type,
    DisconnectMap::value_type,
    std::_Select1st<DisconnectMap::value_type>,
    DisconnectMap::key_compare,
    DisconnectMap::allocator_type
>;
