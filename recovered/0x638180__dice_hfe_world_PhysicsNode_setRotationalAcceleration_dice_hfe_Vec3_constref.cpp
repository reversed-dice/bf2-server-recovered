// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x638180
#include <cmath>
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
namespace world {
class PhysicsNode {
public:
    unsigned char _pad[0xac];
    Vec3 m_rotAccel;
    void setRotationalAcceleration(const Vec3& v);
};
void PhysicsNode::setRotationalAcceleration(const Vec3& v) {
    Vec3* d = &m_rotAccel;
    int c = *(int*)&v.z;
    int b = *(int*)&v.y;
    int a = *(int*)&v.x;
    *(int*)&m_rotAccel.x = a;
    *(int*)&d->y = b;
    *(int*)&d->z = c;
    if (fabsf(m_rotAccel.x) < 1.0e-6f) m_rotAccel.x = 0.0f;
    if (fabsf(m_rotAccel.y) < 1.0e-6f) m_rotAccel.y = 0.0f;
    if (fabsf(m_rotAccel.z) < 1.0e-6f) m_rotAccel.z = 0.0f;
}
} } }
