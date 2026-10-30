// FUNCTION: BF2 0x67b6d0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// std::vector<dice::hfe::IModInfo::MapType, std::allocator<dice::hfe::IModInfo::MapType> >

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

namespace dice { namespace hfe { namespace IModInfo {

struct MapType {
        int s0;
        std::string s1;
        std::string s2;
        std::string s3;
        bool s4;
    };

} } }

template class std::vector<dice::hfe::IModInfo::MapType, std::allocator<dice::hfe::IModInfo::MapType> >;
