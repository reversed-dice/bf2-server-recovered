// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x685050
#include <vector>
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
namespace world {

class IObject;
class ObjectPredicator;

class BinTreeCuller {
public:
    struct Node;
    void getObjects(const Vec3& start, const Vec3& end, std::vector<IObject*>& out, ObjectPredicator* pred);
    void getObjectsInBoxByStartAndEndPos(Node* node);
    char _pad0[0x10];
    Node* m_root;
    ObjectPredicator* m_predicator;
    char _pad20[0xc];
    Vec3 m_start;
    Vec3 m_end;
    char _pad44[0x204];
    std::vector<IObject*>* m_result;
};

void BinTreeCuller::getObjects(const Vec3& start, const Vec3& end, std::vector<IObject*>& out, ObjectPredicator* pred)
{
    m_predicator = pred;
    float* d1 = (float*)&m_start;
    float bz1 = start.z;
    float by1 = start.y;
    float bx1 = start.x;
    d1[0] = bx1; d1[1] = by1; d1[2] = bz1;
    float* d2 = (float*)&m_end;
    float bz2 = end.z;
    float by2 = end.y;
    float bx2 = end.x;
    d2[0] = bx2; d2[1] = by2; d2[2] = bz2;
    m_result = &out;
    getObjectsInBoxByStartAndEndPos(m_root);
}

} } }
