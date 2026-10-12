// FUNCTION: BF2 0x562380
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() : x(0), y(0), z(0) {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

namespace world {

class TriggerableTarget {
public:
    char _pad[0x25c];
    int m_mode; // 0x25c
    char _pad2[0x290 - 0x260];
    Vec3 m_pointB; // 0x290
    Vec3 m_pointA; // 0x29c

    Vec3 getFinishPoint();
};

Vec3 TriggerableTarget::getFinishPoint()
{
    Vec3 result;
    if (m_mode == 0)
        result = m_pointA;
    else
        result = m_pointB;
    return result;
}

} } }
