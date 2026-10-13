// FUNCTION: BF2 0x650ef0
// BF2_FLAGS: -fno-strict-aliasing
// __gnu_cxx::__normal_iterator<dice::hfe::IPlayerAwards::Award*, std::vector<dice::hfe::IPlayerAwards::Award, st

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

class IPlayerAwards {
public:
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
    struct AwardList {
        long x;
        int y;
        int pad;
        std::vector<Award> awards;
    };
};

} }

namespace dice { namespace hfe {

struct AscendingPrioritySort {
    bool operator()(IPlayerAwards::Award const& lhs, IPlayerAwards::Award const& rhs) const
    { return lhs.a1 > rhs.a1; }
};

} }
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

template __gnu_cxx::__normal_iterator<dice::hfe::IPlayerAwards::Award*, std::vector<dice::hfe::IPlayerAwards::Award, std::allocator<dice::hfe::IPlayerAwards::Award> > > std::__unguarded_partition<__gnu_cxx::__normal_iterator<dice::hfe::IPlayerAwards::Award*, std::vector<dice::hfe::IPlayerAwards::Award, std::allocator<dice::hfe::IPlayerAwards::Award> > >, dice::hfe::IPlayerAwards::Award, dice::hfe::AscendingPrioritySort>(__gnu_cxx::__normal_iterator<dice::hfe::IPlayerAwards::Award*, std::vector<dice::hfe::IPlayerAwards::Award, std::allocator<dice::hfe::IPlayerAwards::Award> > >, __gnu_cxx::__normal_iterator<dice::hfe::IPlayerAwards::Award*, std::vector<dice::hfe::IPlayerAwards::Award, std::allocator<dice::hfe::IPlayerAwards::Award> > >, dice::hfe::IPlayerAwards::Award, dice::hfe::AscendingPrioritySort);
