// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x684ee0
#include <vector>
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
namespace world {

class IObject;
class ObjectPredicator;

class BinTreeCuller {
public:
    struct Node;
    void getObjects(const Vec3& origin, float radius, std::vector<IObject*>& out, ObjectPredicator* pred);
    void getObjectsByOriginAndRadius(Node* node);
    char _pad0[0x10];
    Node* m_root;
    ObjectPredicator* m_predicator;
    Vec3 m_origin;
    char _pad2c[0x30];
    float m_radius;
    char _pad60[0x1e8];
    std::vector<IObject*>* m_result;
};

void BinTreeCuller::getObjects(const Vec3& origin, float radius, std::vector<IObject*>& out, ObjectPredicator* pred)
{
    if (!m_root)
        return;
    m_predicator = pred;
    float* d = (float*)&m_origin;
    float bz = origin.z;
    float by = origin.y;
    float bx = origin.x;
    d[0] = bx; d[1] = by; d[2] = bz;
    m_radius = radius;
    m_result = &out;
    getObjectsByOriginAndRadius(m_root);
}

} } }
