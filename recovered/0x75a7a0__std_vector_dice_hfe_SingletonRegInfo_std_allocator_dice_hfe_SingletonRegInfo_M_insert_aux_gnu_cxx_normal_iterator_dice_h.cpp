// FUNCTION: BF2 0x75a7a0
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::SingletonRegInfo, std::allocator<dice::hfe::SingletonRegInfo> >

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

struct SingletonRegInfo {
    std::string name;
    void* ptr;
    unsigned int iid;
    unsigned int cid;
    unsigned int value;
    SingletonRegInfo() {}
    explicit SingletonRegInfo(const std::string& n) : name(n) {}
};

} }

template class std::vector<dice::hfe::SingletonRegInfo, std::allocator<dice::hfe::SingletonRegInfo> >;
