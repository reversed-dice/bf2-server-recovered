// FUNCTION: BF2 0x650130
// BF2_FLAGS: -fno-strict-aliasing
// std::_Rb_tree<unsigned long, std::pair<unsigned long const, dice::hfe::IPlayerAwards::Award>, std::_Select1st<std::pair<unsigned long const, dice::hfe::IPlayerAwards::Award> >, std::less<unsigned long>, std::allocator<std::pair<unsigned long const, dice::hfe::IPlayerAwards::Award> > >

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

template class std::_Rb_tree<unsigned long, std::pair<unsigned long const, dice::hfe::IPlayerAwards::Award>, std::_Select1st<std::pair<unsigned long const, dice::hfe::IPlayerAwards::Award> >, std::less<unsigned long>, std::allocator<std::pair<unsigned long const, dice::hfe::IPlayerAwards::Award> > >;
