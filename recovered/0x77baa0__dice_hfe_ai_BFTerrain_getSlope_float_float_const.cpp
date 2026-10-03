// FUNCTION: BF2 0x77baa0
// BF2_FLAGS: -fno-strict-aliasing
#include <math.h>
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; Vec3() : x(0), y(0), z(0) {} };
namespace ai {

class ITerrain {
public:
#define V(n) virtual void _v##n();
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8) V(9) V(10) V(11) V(12) V(13) V(14) V(15)
    V(16) V(17) V(18) V(19) V(20) V(21) V(22) V(23) V(24) V(25) V(26) V(27) V(28) V(29) V(30)
#undef V
    virtual float getNormal(float x, float z, Vec3& normal);
};

class BFTerrain {
public:
    float getSlope(float x, float z) const;
    void* m_owner;
    ITerrain* m_terrain;
};

float BFTerrain::getSlope(float x, float z) const
{
    Vec3 n;
    m_terrain->getNormal(x, z, n);
    float y = n.y;
    if (y < -1.0f)
        y = -1.0f;
    else if (y > 1.0f)
        y = 1.0f;
    return acosf(y);
}

} } }
