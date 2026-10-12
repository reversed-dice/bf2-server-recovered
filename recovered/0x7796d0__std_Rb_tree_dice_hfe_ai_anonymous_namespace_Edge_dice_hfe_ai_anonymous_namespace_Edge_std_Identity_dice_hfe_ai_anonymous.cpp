// FUNCTION: BF2 0x7796d0
#include <map>
#include <set>
#include <vector>
#include <deque>
#include <list>
#include <string>
#include <algorithm>
#include <utility>

namespace dice { namespace hfe { namespace ai { namespace {

struct Edge
{
    int f0;
    int f1;
    int f2;

    Edge(Edge const& o)
    {
        f0 = o.f0;
        f1 = o.f1;
        f2 = o.f2;
    }
};

inline bool operator<(Edge const& a, Edge const& b)
{
    if (a.f0 != b.f0)
        return a.f0 < b.f0;
    return a.f1 < b.f1;
}

template class std::_Rb_tree<Edge, Edge, std::_Identity<Edge>, std::less<Edge>, std::allocator<Edge> >;

} } } }
