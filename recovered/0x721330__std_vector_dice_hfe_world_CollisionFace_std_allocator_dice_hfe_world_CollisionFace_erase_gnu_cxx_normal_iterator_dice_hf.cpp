// FUNCTION: BF2 0x721330
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>

namespace dice { namespace hfe { namespace world {
struct CollisionFace {
    unsigned short m_v0, m_v1, m_v2, m_v3;
    ~CollisionFace() { }
    CollisionFace& operator=(CollisionFace const& __o) {
        m_v0 = __o.m_v0; m_v1 = __o.m_v1; m_v2 = __o.m_v2; m_v3 = __o.m_v3;
        return *this;
    }
};
}}}

template class std::vector<dice::hfe::world::CollisionFace>;
