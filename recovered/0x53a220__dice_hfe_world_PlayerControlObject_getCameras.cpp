// FUNCTION: BF2 0x53a220
// BF2_FLAGS: -fcrossjumping
namespace dice { namespace hfe { namespace world {
extern unsigned int IID_IPlayerControlObject;

class Cameras { public: char pad[0x28]; void* m_28; };

class Node {
public:
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void* queryInterface(unsigned int iid);
    virtual void s4();
    virtual void s5();
    virtual void s6();
    virtual void s7();
    virtual void s8();
    virtual void s9();
    virtual void s10();
    virtual void s11();
    virtual void s12();
    virtual void s13();
    virtual void* v70();
    char pad[0x48];
    Node* m_50;
};

struct Container { char pad[8]; Node* m_8; };

class PlayerControlObject {
public:
    Cameras* getCameras();
    char pad[0x270];
    Container* m_270;
    Cameras m_278;
};

Cameras* PlayerControlObject::getCameras()
{
    if (__builtin_expect(m_270 == 0, 0))
        return &m_278;
    if (__builtin_expect(m_270->m_8 == 0, 0))
        return &m_278;
    Cameras* c = &m_278;
    if (c->m_28 != 0)
        return c;
    Node* p = m_270->m_8;
    Node* found;
    do {
        found = (Node*)p->queryInterface(IID_IPlayerControlObject);
        if (found) break;
        p = p->m_50;
    } while (p);
    return (Cameras*)found->v70();
}
} } }
