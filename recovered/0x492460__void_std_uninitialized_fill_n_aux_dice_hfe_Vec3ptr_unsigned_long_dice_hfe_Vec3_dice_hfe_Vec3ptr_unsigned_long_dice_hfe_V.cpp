// FUNCTION: BF2 0x492460
// libstdc++ 4.0 instantiation over dice::hfe::Vec3: the binary fixes Vec3's
// copy semantics (user-declared empty destructor, member-wise copy loading
// x, z, y before storing), the template does the rest.
#include <vector>

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    Vec3() {}
    Vec3(const Vec3& o)
    {
        float a = o.x, c = o.z, b = o.y;
        x = a;
        y = b;
        z = c;
    }
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
