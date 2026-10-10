// FUNCTION: BF2 0x6dc8d0
namespace dice { namespace hfe { namespace world {

class LatencyCompensation {
public:
    static char m_isEnabled;
};

class Manager14 {
public:
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3();
    virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7();
    virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11();
    virtual void a12(); virtual void a13(); virtual void a14();
};

class PhysicsNodeManager {
public:
    void postFrameUpdate();
};

struct Node {
    Node* next;
    Node* prev;
    void* obj;
};

void PhysicsNodeManager::postFrameUpdate() {
    char enabled = LatencyCompensation::m_isEnabled;
    Node* p = *(Node**)((char*)this + 0x10);
    Node* head = (Node*)((char*)this + 0x10);
    while (p != head) {
        void* obj = p->obj;
        void* r = ((void* (*)(void*))(*(void***)obj)[0x58/8])(obj);
        if ((*(char*)((char*)r + 8) & 1) == 0) {
            if (enabled) { ((void (*)(void*))(*(void***)obj)[0x288/8])(obj); }
            ((void (*)(void*))(*(void***)obj)[0x308/8])(obj);
        }
        p = p->next;
    }
    ((Manager14*)*(void**)0x010ade50)->a14();
}

} } }
