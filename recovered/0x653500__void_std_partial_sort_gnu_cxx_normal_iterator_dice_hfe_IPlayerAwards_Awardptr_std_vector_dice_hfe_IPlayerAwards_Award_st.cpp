// FUNCTION: BF2 0x653500
// BF2_FLAGS: -fno-strict-aliasing
// void std::partial_sort<__gnu_cxx::__normal_iterator<dice::hfe::IPlayerAwards::Award*, std::vector<dice::hfe::I

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

struct DescendingDateSort {
    bool operator()(IPlayerAwards::Award const& lhs, IPlayerAwards::Award const& rhs) const
    { return lhs.p0 < rhs.p0; }
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

template void std::partial_sort<__gnu_cxx::__normal_iterator<dice::hfe::IPlayerAwards::Award*, std::vector<dice::hfe::IPlayerAwards::Award, std::allocator<dice::hfe::IPlayerAwards::Award> > >, dice::hfe::DescendingDateSort>(__gnu_cxx::__normal_iterator<dice::hfe::IPlayerAwards::Award*, std::vector<dice::hfe::IPlayerAwards::Award, std::allocator<dice::hfe::IPlayerAwards::Award> > >, __gnu_cxx::__normal_iterator<dice::hfe::IPlayerAwards::Award*, std::vector<dice::hfe::IPlayerAwards::Award, std::allocator<dice::hfe::IPlayerAwards::Award> > >, __gnu_cxx::__normal_iterator<dice::hfe::IPlayerAwards::Award*, std::vector<dice::hfe::IPlayerAwards::Award, std::allocator<dice::hfe::IPlayerAwards::Award> > >, dice::hfe::DescendingDateSort);
