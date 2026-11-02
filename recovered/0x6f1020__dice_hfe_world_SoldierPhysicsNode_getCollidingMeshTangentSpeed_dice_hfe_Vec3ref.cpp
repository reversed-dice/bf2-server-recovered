// TRICK: 75
// FUNCTION: BF2 0x6f1020
namespace dice {
namespace hfe {

struct Vec3 {
    float x, y, z;
};

namespace world {

class SoldierPhysicsNode {
public:
    virtual void v0();
    char pad_08[0xb4];
    Vec3 m_meshTangentSpeed; // 0xbc
    int m_meshCollidingCount; // 0xc8

    void getCollidingMeshTangentSpeed(Vec3& out);
};

void SoldierPhysicsNode::getCollidingMeshTangentSpeed(Vec3& out) {
    if (m_meshCollidingCount > 0) {
        --m_meshCollidingCount;
        Vec3* v = &m_meshTangentSpeed;
        float z = v->z;
        float y = v->y;
        float x = v->x;
        out.x = x;
        out.y = y;
        out.z = z;
    } else {
        out.x = 0.0f;
        out.y = 0.0f;
        out.z = 0.0f;
    }
}

} // namespace world
} // namespace hfe
} // namespace dice
