// FUNCTION: BF2 0x684bf0
// BF2_FLAGS: -fno-strict-aliasing
#include <vector>
namespace dice { namespace hfe { namespace world {

struct IObject;

struct Node {
    char pad0[0x10];
    Node* m_10;
    Node* m_18;
    char pad20[0x18];
    IObject* m_38;
};

class ObjectPredicator {
public:
    virtual bool accepts(IObject*) const;
};

class BinTreeCuller {
public:
    char pad0[0x18];
    ObjectPredicator* m_pred;
    char pad1[0x228];
    std::vector<IObject*>* m_objects;
    void getAllObjects(Node* node);
};

void BinTreeCuller::getAllObjects(Node* node)
{
    if (node->m_10) {
        getAllObjects(node->m_10);
        getAllObjects(node->m_18);
        return;
    }
    IObject* o = node->m_38;
    ObjectPredicator* p = m_pred;
    if (!p || p->accepts(o)) m_objects->push_back(o);
}

} } }
