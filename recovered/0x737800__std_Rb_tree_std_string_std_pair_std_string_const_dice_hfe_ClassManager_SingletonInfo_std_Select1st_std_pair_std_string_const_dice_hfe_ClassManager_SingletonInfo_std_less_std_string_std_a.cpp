// FUNCTION: BF2 0x737800
// BF2_FLAGS: -fno-strict-aliasing
#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe {

struct ClassManager {
    struct __attribute__((packed)) SingletonInfo {
        void* a;
        void* b;
        int c;
    };
};

}

typedef std::map<std::string, dice::hfe::ClassManager::SingletonInfo> SingletonMap;
}

template class std::_Rb_tree<
    dice::SingletonMap::key_type,
    dice::SingletonMap::value_type,
    std::_Select1st<dice::SingletonMap::value_type>,
    dice::SingletonMap::key_compare,
    dice::SingletonMap::allocator_type
>;
