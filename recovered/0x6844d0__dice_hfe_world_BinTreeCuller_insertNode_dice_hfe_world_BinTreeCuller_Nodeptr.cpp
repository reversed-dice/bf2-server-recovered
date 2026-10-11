// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6844d0
namespace dice { namespace hfe {
struct Vec3 { float x, y, z; };
namespace world {

class IObject;

class BinTreeCuller {
public:
    struct Node {
        BinTreeCuller* m_owner;
        Node* m_left;
        Node* m_right;
        Node* m_parent;
        Vec3 m_pos;
        float m_radius;
        IObject* m_obj;
        Node() {}
        virtual void dummy();
    };
    void updateNodePosAndRadius(Node*);
    void insertNode(Node* node);
    void insertNode(Node* parent, Node* node);
    char _pad0[0x10];
    Node* m_root;
};

void BinTreeCuller::insertNode(Node* node)
{
    if (m_root == 0) {
        m_root = node;
        node->m_parent = 0;
        return;
    }
    if (m_root->m_left != 0) {
        insertNode(m_root, node);
        return;
    }
    Node* left = m_root;
    Node* n = new Node();
    float* p = (float*)&n->m_pos;
    p[0] = 0.0f;
    p[1] = 0.0f;
    p[2] = 0.0f;
    n->m_owner = this;
    m_root = n;
    m_root->m_parent = 0;
    m_root->m_left = left;
    left->m_parent = m_root;
    m_root->m_right = node;
    node->m_parent = m_root;
    updateNodePosAndRadius(m_root);
}

} } }
