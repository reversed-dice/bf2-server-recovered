// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x637f50
#include <cmath>
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
namespace world {
class PhysicsNode {
public:
    unsigned char _pad[0xdc];
    Vec3 m_rotSpeed;
    void setRotationalFriction(const Vec3& v);
};
void PhysicsNode::setRotationalFriction(const Vec3& v) {
    Vec3* d = &m_rotSpeed;
    int c = *(int*)&v.z;
    int b = *(int*)&v.y;
    int a = *(int*)&v.x;
    *(int*)&m_rotSpeed.x = a;
    *(int*)&d->y = b;
    *(int*)&d->z = c;
    if (fabsf(m_rotSpeed.x) < 1.0e-6f) m_rotSpeed.x = 0.0f;
    if (fabsf(m_rotSpeed.y) < 1.0e-6f) m_rotSpeed.y = 0.0f;
    if (fabsf(m_rotSpeed.z) < 1.0e-6f) m_rotSpeed.z = 0.0f;
}
} } }
