// FUNCTION: BF2 0x655290
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::IPlayerAwards::Award, std::allocator<dice::hfe::IPlayerAwards::Award> >

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

namespace dice { namespace hfe { namespace IPlayerAwards {

struct Award {
        int a0;
        int a1;
        std::string s0;
        std::string s1;
        int a2;
        int a3;
        long p0;
        long p1;
        std::string s2;
    };

} } }

template class std::vector<dice::hfe::IPlayerAwards::Award, std::allocator<dice::hfe::IPlayerAwards::Award> >;
