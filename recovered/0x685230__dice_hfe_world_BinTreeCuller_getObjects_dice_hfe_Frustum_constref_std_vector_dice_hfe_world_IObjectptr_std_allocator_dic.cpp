// FUNCTION: BF2 0x685230
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
namespace dice { namespace hfe {

struct Vec3 { float x, y, z; };

class Frustum
{
public:
    Frustum& operator=(Frustum const&);
    bool inside(Vec3 const&, float, bool&) const;
    char m_data[0x1e8];
};

namespace world {

struct IObject;
class ObjectPredicator;
struct Node;

class BinTreeCuller
{
public:
    char pad0[0x10];
    Node* m_root;                      // 0x10
    ObjectPredicator* m_predicator;    // 0x18
    Vec3 m_origin;                     // 0x20
    char pad2c[0x30];
    float m_radius;                    // 0x5c
    Frustum m_area;                    // 0x60
    std::vector<IObject*>* m_result;   // 0x248
    std::vector<IObject*>* m_result2;  // 0x250

    void getObjects(Frustum const& frustum, std::vector<IObject*>& out, std::vector<IObject*>& out2, ObjectPredicator* pred);
    void getObjectsByFrustum(Node* node);
    void getObjectsByFrustumNonPred(Node* node);
};

void BinTreeCuller::getObjects(Frustum const& frustum, std::vector<IObject*>& out, std::vector<IObject*>& out2, ObjectPredicator* pred)
{
    if (!m_root)
        return;

    m_predicator = pred;

    m_area = frustum;

    float* s = (float*)((char*)&m_area + 0x1b4);
    float* d = (float*)&m_origin;
    float z = s[2];
    float y = s[1];
    float x = s[0];
    d[0] = x;
    d[1] = y;
    d[2] = z;

    m_radius = *(float*)((char*)&m_area + 0x1c0);

    m_result = &out;
    m_result2 = &out2;

    if (pred)
        getObjectsByFrustum(m_root);
    else
        getObjectsByFrustumNonPred(m_root);
}

} } }
