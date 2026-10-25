// FUNCTION: BF2 0x6d8a30
namespace dice { namespace hfe { namespace world {

struct LatencyVec3 { float x, y, z; LatencyVec3() { x = 0; y = 0; z = 0; } };
struct LatencyQuat { float x, y, z, w; LatencyQuat() { w = 1.0f; x = 0; y = 0; z = 0; } };

class PhysicsNode {
public:
    void initLatencyCompensation();
private:
    char pad[0x130];
    void* m_130;
    void* m_138;
};

void PhysicsNode::initLatencyCompensation()
{
    int __perm_pad4 = 4; (void)__perm_pad4;
    m_130 = new LatencyVec3[16];
    m_138 = new LatencyQuat[16];
}

} } }
