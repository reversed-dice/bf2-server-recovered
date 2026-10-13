// FUNCTION: BF2 0x465280
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
#include <algorithm>

namespace dice { namespace hfe {
class ServerConnection { public: char _pad0[0x2c]; float m_scopeTime; };
struct ScopeTimeSort {
    bool operator()(ServerConnection* a, ServerConnection* b) const
    { return a->m_scopeTime < b->m_scopeTime; }
};
}}

void rdSortConnections(std::vector<dice::hfe::ServerConnection*>& v, unsigned int n) {
    dice::hfe::ScopeTimeSort cmp;
    std::sort(v.begin(), v.end(), cmp);
    std::partial_sort(v.begin(), v.begin() + n, v.end(), cmp);
}
