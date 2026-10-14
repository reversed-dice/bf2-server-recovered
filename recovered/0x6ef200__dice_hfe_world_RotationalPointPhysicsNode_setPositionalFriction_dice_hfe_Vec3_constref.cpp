// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6ef200
#include <cmath>
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
namespace world {
class RotationalPointPhysicsNode {
public:
    unsigned char _pad[0xc4];
    Vec3 m_posFriction;
    void setPositionalFriction(const Vec3& v);
};
void RotationalPointPhysicsNode::setPositionalFriction(const Vec3& v) {
    Vec3* d = &m_posFriction;
    int c = *(int*)&v.z;
    int b = *(int*)&v.y;
    int a = *(int*)&v.x;
    *(int*)&m_posFriction.x = a;
    *(int*)&d->y = b;
    *(int*)&d->z = c;
    if (fabsf(m_posFriction.x) < 1.0e-6f) m_posFriction.x = 0.0f;
    if (fabsf(m_posFriction.y) < 1.0e-6f) m_posFriction.y = 0.0f;
    if (fabsf(m_posFriction.z) < 1.0e-6f) m_posFriction.z = 0.0f;
}
} } }
