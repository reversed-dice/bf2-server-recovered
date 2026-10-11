// FUNCTION: BF2 0x6850a0
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <vector>
namespace dice { namespace hfe { namespace world {

struct IObject;

struct Vec3 { float x; float y; float z; };

class Frustum {
public:
    bool inside(Vec3 const&, float, bool&) const;
};

class ObjectPredicator {
public:
    virtual bool accepts(IObject*) const;
};

struct Node {
    char pad0[0x10];
    Node* m_10;
    Node* m_18;
    char pad20[0x8];
    Vec3 m_pos;
    float m_radius;
    IObject* m_obj;
};

struct FrustumArea { char b[0x1e8]; };

class BinTreeCuller {
public:
    char pad0[0x18];
    ObjectPredicator* m_pred;
    char pad1[0x40];
    FrustumArea m_area;
    std::vector<IObject*>* m_objects;
    std::vector<IObject*>* m_objects2;
    void getAllObjects(Node* node);
    void getObjectsByFrustum(Node* node);
};

void BinTreeCuller::getObjectsByFrustum(Node* node)
{
    bool b;
    if (!reinterpret_cast<Frustum*>(&m_area)->inside(*(Vec3 const*)((char*)node + 0x28),
                                                     *(float*)((char*)node + 0x34), b))
        return;
    if (node->m_10) {
        if (b) {
            getAllObjects(node);
            return;
        }
        getObjectsByFrustum(node->m_10);
        getObjectsByFrustum(node->m_18);
        return;
    }
    ObjectPredicator* p = m_pred;
    IObject* o = node->m_obj;
    if (p && !p->accepts(o)) return;
    if (b) m_objects->push_back(node->m_obj);
    else m_objects2->push_back(node->m_obj);
}

} } }
