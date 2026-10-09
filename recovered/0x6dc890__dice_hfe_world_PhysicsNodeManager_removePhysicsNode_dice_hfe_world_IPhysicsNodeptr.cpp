// FUNCTION: BF2 0x6dc890
namespace dice { namespace hfe { namespace world {

class IPhysicsNode {
public:
    char pad0[8];
    void* m_it;
};

class ListBase {
public:
    void* erase(void* it);
};

class PhysicsNodeManager {
public:
    void removePhysicsNode(IPhysicsNode* n);
    char pad0[0x10];
    ListBase m_list;
};

void PhysicsNodeManager::removePhysicsNode(IPhysicsNode* n) {
    if (n == 0) return;
    void* it = n->m_it;
    if (it != (void*)&m_list) {
        m_list.erase(it);
        n->m_it = (void*)&m_list;
    }
}

} } }
