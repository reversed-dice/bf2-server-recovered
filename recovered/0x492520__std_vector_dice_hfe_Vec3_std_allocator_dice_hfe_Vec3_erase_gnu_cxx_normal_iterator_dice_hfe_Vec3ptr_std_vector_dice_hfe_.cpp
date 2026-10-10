// FUNCTION: BF2 0x492520
// BF2_FLAGS: -fno-strict-aliasing
// std::vector<dice::hfe::Vec3>::erase(iterator, iterator): the libstdc++ 4.0
// template itself; what the binary fixes is Vec3 (user-declared empty
// destructor, member-wise assignment loading x, z, y before storing).
#include <vector>

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    ~Vec3() {}
    Vec3& operator=(const Vec3& o)
    {
        float a = o.x, c = o.z, b = o.y;
        x = a;
        y = b;
        z = c;
        return *this;
    }
};

} }

template class std::vector<dice::hfe::Vec3>;
