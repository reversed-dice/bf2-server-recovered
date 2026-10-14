// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6f24d0
#include <cmath>
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
namespace world {
class PhysicsNode {
public:
    unsigned char _pad[0xac];
    Vec3 m_val;
    void setPositionalFriction(const Vec3& v);
};
void PhysicsNode::setPositionalFriction(const Vec3& v) {
    Vec3* d = &m_val;
    int c = *(int*)&v.z;
    int b = *(int*)&v.y;
    int a = *(int*)&v.x;
    *(int*)&m_val.x = a;
    *(int*)&d->y = b;
    *(int*)&d->z = c;
    if (fabsf(m_val.x) < 1.0e-6f) m_val.x = 0.0f;
    if (fabsf(m_val.y) < 1.0e-6f) m_val.y = 0.0f;
    if (fabsf(m_val.z) < 1.0e-6f) m_val.z = 0.0f;
}
} } }
