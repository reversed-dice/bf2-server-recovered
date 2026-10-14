// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6ef290
#include <cmath>
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
namespace world {
class RotationalPointPhysicsNode {
public:
    unsigned char _pad[0xd0];
    Vec3 m_rotFriction;
    void setRotationalFriction(const Vec3& v);
};
void RotationalPointPhysicsNode::setRotationalFriction(const Vec3& v) {
    Vec3* d = &m_rotFriction;
    int c = *(int*)&v.z;
    int b = *(int*)&v.y;
    int a = *(int*)&v.x;
    *(int*)&m_rotFriction.x = a;
    *(int*)&d->y = b;
    *(int*)&d->z = c;
    if (fabsf(m_rotFriction.x) < 1.0e-6f) m_rotFriction.x = 0.0f;
    if (fabsf(m_rotFriction.y) < 1.0e-6f) m_rotFriction.y = 0.0f;
    if (fabsf(m_rotFriction.z) < 1.0e-6f) m_rotFriction.z = 0.0f;
}
} } }
