// FUNCTION: BF2 0x69ee10
#include <cmath>

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    Vec3() {}
    Vec3(const Vec3& o) : x(o.x), y(o.y), z(o.z) {}

    float length() const {
        return sqrtf(x * x + y * y + z * z);
    }
};

namespace world {

class WindManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14();
    virtual Vec3 getWind(Vec3 const&) const;

    virtual float getWindSpeed(Vec3 const&) const;
};

float WindManager::getWindSpeed(Vec3 const& pos) const
{
    return getWind(pos).length();
}

} } }
