// FUNCTION: BF2 0x73d3e0
typedef void* (*Vfn)(void*, int, void*, float);
struct Node {
    void* vtbl;
    char pad[0x18];
    void* m_20;
    unsigned int m_id;
    char pad2[0x4];
    void* m_p;
};
struct EM {
    char pad0[0x8];
    int m_10;
    virtual void* slot4(int, void*, float);
    virtual void* postEvent73d3e0(int cat, unsigned int id, void* p, float dt);
};
extern "C" void dispatchEvent_73cf50(void*, void*);
void* EM::postEvent73d3e0(int cat, unsigned int id, void* p, float dt) {
    if (dt > 0.0f) {
        Vfn f = (Vfn)(*(void***)this)[4];
        Node* n = (Node*)::operator new(0x38);
        n->m_20 = 0;
        n->vtbl = (void*)0xb2d8b0;
        n->m_id = id;
        n->m_p = p;
        return f(this, cat, n, dt);
    }
    if (this->m_10 == 0) {
        *(int*)((char*)this + 0x90) = cat;
        *(unsigned int*)((char*)this + 0xb0) = id;
        *(void**)((char*)this + 0xb8) = p;
        dispatchEvent_73cf50(this, (char*)this + 0x88);
    } else {
        Vfn f = (Vfn)(*(void***)this)[4];
        Node* n = (Node*)::operator new(0x38);
        n->m_20 = 0;
        n->vtbl = (void*)0xb2d8b0;
        n->m_id = id;
        n->m_p = p;
        f(this, cat, n, 0.0f);
    }
    return 0;
}
