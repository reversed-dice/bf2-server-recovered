// FUNCTION: BF2 0x4497c0
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
#include <algorithm>

namespace dice { namespace hfe {
class GhostObject { public: char _pad0[0x50]; float m_time; };
struct GhostLessComp {
    bool operator()(GhostObject* a, GhostObject* b) const
    { return a->m_time < b->m_time; }
};
struct PrioInfo { float x, y; };
struct GhostPrioLessComp {
    bool operator()(const PrioInfo& a, const PrioInfo& b) const
    { return a.y < b.y; }
};
}}

void rdGhostHeapDyt(std::vector<dice::hfe::GhostObject*>& v, unsigned int n) {
    dice::hfe::GhostLessComp cmp;
    std::partial_sort(v.begin(), v.begin() + n, v.end(), cmp);
}

void rdPrioHeapDyt(std::vector<dice::hfe::PrioInfo>& v, unsigned int n) {
    dice::hfe::GhostPrioLessComp cmp;
    std::partial_sort(v.begin(), v.begin() + n, v.end(), cmp);
}
