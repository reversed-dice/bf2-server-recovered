// FUNCTION: BF2 0x6384f0
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; Vec3() : x(0), y(0), z(0) {}
    void zero() { x = 0; y = 0; z = 0; }
};
namespace world {

class PhysicsNode {
public:
    void reset(bool full);
    char _pad[0x25c];
};

class PhysicsSpring : public PhysicsNode {
public:
    Vec3 m_force;
    float m_268;
    float m_26c;
    float m_270;
    void reset();
};

void PhysicsSpring::reset()
{
    PhysicsNode::reset(true);
    m_force.zero();
    m_268 = 0.0f;
    m_26c = 0.0f;
    m_270 = 0.0f;
}

} } }
