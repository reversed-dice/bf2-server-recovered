// FUNCTION: BF2 0x683ea0
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
namespace world {

class IObject;

class BinTreeCuller {
public:
    struct Node {
        char _pad0[0x10];
        Node* m_left;
        Node* m_right;
        Node* m_parent;
        Vec3 m_pos;
        float m_radius;
        IObject* m_obj;
    };
    void updateNodePosAndRadius(Node*);
    void removeNode(Node*);
    char _pad0[0x10];
    Node* m_root;
};

void BinTreeCuller::removeNode(Node* node)
{
    if (m_root == node) {
        m_root = 0;
        node->m_parent = 0;
        return;
    }
    Node* parent = node->m_parent;
    Node* child = parent->m_left;
    Node* gp = parent->m_parent;
    if (node == parent->m_left)
        child = parent->m_right;
    if (gp == 0) {
        m_root = child;
        child->m_parent = 0;
    } else {
        if (parent == gp->m_left)
            gp->m_left = child;
        else
            gp->m_right = child;
        child->m_parent = gp;
        updateNodePosAndRadius(gp);
    }
    delete parent;
    node->m_parent = 0;
}

} } }
