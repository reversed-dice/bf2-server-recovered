// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x684b80
// dice::hfe::world::BinTreeCuller::getAllObjectsNonPred(Node*)
#include <vector>
namespace dice { namespace hfe { namespace world {

struct IObject {};

struct Node {
    char pad_0[0x10];
    Node* left;        // 0x10
    Node* right;       // 0x18
    char pad_2[0x18];
    IObject* obj;      // 0x38
};

class BinTreeCuller {
public:
    char pad_0[0x248];
    std::vector<IObject*>* m_objects;   // 0x248
    void getAllObjectsNonPred(Node* n);
};

void BinTreeCuller::getAllObjectsNonPred(Node* n) {
    while (n->left != 0) {
        getAllObjectsNonPred(n->left);
        n = n->right;
    }
    m_objects->push_back(n->obj);
}

} } }
