// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6845b0
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
namespace world {

class CullerObject {
public:
    virtual void getCuller();
    virtual CullerObject* getCullerObject();
    virtual void destroyObject();
    virtual void updateObject(Vec3 const&, float);
    char _pad8[0x20];
    Vec3 m_pos;
    float m_radius;
};

class BinTreeCuller {
public:
    struct Node;
    CullerObject* updateObject(CullerObject* obj, Vec3 const& pos, float radius);
    void removeNode(Node* node);
    void insertNode(Node* node);
    char _pad0[0x10];
    Node* m_root;
    char _pad18[0xe48];
    bool m_0xe60;
};

CullerObject* BinTreeCuller::updateObject(CullerObject* obj, Vec3 const& pos, float radius)
{
    if (m_0xe60)
        return 0;
    removeNode((Node*)obj);
    float* d = (float*)&obj->m_pos;
    float bz = pos.z;
    float by = pos.y;
    float bx = pos.x;
    d[0] = bx; d[1] = by; d[2] = bz;
    obj->m_radius = radius;
    insertNode((Node*)obj);
    return obj->getCullerObject();
}

} } }
