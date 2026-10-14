// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x64eff0
#include <algorithm>
#include <map>
#include <string>
#include <vector>

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

struct AscendingPrioritySort {
    bool operator()(IPlayerAwards::Award const&, IPlayerAwards::Award const&) const;
};
struct AscendingDateSort {
    bool operator()(IPlayerAwards::Award const&, IPlayerAwards::Award const&) const;
};
struct DescendingDateSort {
    bool operator()(IPlayerAwards::Award const&, IPlayerAwards::Award const&) const;
};

class PlayerAwards {
public:
    char pad0[0x50];
    std::map<int, IPlayerAwards::Award> m_awards;
    IPlayerAwards::AwardList sortList(IPlayerAwards::AwardList const& list);
    IPlayerAwards::AwardList sortListDate(IPlayerAwards::AwardList const& list, bool asc);
    void getAllAwards(IPlayerAwards::AwardList& out);
};

void PlayerAwards::getAllAwards(IPlayerAwards::AwardList& out)
{
    out.awards.clear();
    for (std::map<int, IPlayerAwards::Award>::iterator it = m_awards.begin(); it != m_awards.end(); ++it)
        out.awards.push_back(it->second);
}

} }
