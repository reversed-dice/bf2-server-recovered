// FUNCTION: BF2 0x638110
// BF2_FLAGS: -fno-strict-aliasing
#include <cmath>
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
namespace world {
class PointPhysicsNode {
public:
    unsigned char _pad[0x38];
    Vec3 m_speed;
    void setPositionalAcceleration(const Vec3& v);
};
void PointPhysicsNode::setPositionalAcceleration(const Vec3& v) {
    Vec3* d = &m_speed;
    int c = *(int*)&v.z;
    int b = *(int*)&v.y;
    int a = *(int*)&v.x;
    *(int*)&m_speed.x = a;
    *(int*)&d->y = b;
    *(int*)&d->z = c;
    if (fabsf(m_speed.x) < 1.0e-6f) m_speed.x = 0.0f;
    if (fabsf(m_speed.y) < 1.0e-6f) m_speed.y = 0.0f;
    if (fabsf(m_speed.z) < 1.0e-6f) m_speed.z = 0.0f;
}
} } }
