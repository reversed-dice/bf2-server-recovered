// FUNCTION: BF2 0x722a00
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
// std::vector<dice::hfe::Vec3>::operator=: the libstdc++ 4.0 template over
// the Vec3 the corpus already proved (copy and assignment through set()).
#include <vector>

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

} }

template class std::vector<dice::hfe::Vec3>;
