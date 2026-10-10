// FUNCTION: BF2 0x465fb0
#include <vector>
#include <algorithm>

namespace dice { namespace hfe {
class ServerConnection;
struct ScopeTimeSort {
    bool operator()(ServerConnection* a, ServerConnection* b) const;
};
}}

void rdSortConnectionsDyt(std::vector<dice::hfe::ServerConnection*>& v, unsigned int n) {
    dice::hfe::ScopeTimeSort cmp;
    std::sort(v.begin(), v.end(), cmp);
    std::partial_sort(v.begin(), v.begin() + n, v.end(), cmp);
}
