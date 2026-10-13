// FUNCTION: BF2 0x5c63b0
// BF2_FLAGS: -fno-tree-loop-optimize -fno-strict-aliasing
namespace dice { namespace hfe {

namespace io {
extern const unsigned int IID_INetworkableObject;
}

class ControlPointNetworkable {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int) const;
    virtual ~ControlPointNetworkable();

    struct State {
        State() : a(0), b(0) {}
        int a;                  // 0x0
        char b;                 // 0x4
        int f8;                 // 0x8
        unsigned char fC;       // 0xc
        int f10;                // 0x10
        int f14;                // 0x14
        unsigned char f18;      // 0x18
        unsigned char f19;      // 0x19
        int f1c;                // 0x1c
        int f20;                // 0x20
    };

    char _pad0[0x28 - 0x8];
    void* m_netObj;             // 0x28
    char _pad1[0x60 - 0x30];
    void* m_owner2;             // 0x60
    char _pad2[0x78 - 0x68];
    State* m_states;            // 0x78
    void* m_owner;              // 0x80

    bool init(void* param);
};

typedef int (*intSlot)(void*);

bool ControlPointNetworkable::init(void* param)
{
    m_owner2 = param;
    m_netObj = queryInterface(dice::hfe::io::IID_INetworkableObject);
    m_owner = param;
    m_states = new State[4];
    if (m_states == 0)
        return false;
    m_states->f8 = ((intSlot)(*(void***)m_owner)[0x340 / 8])(m_owner);
    m_states->fC = *(unsigned char*)((char*)m_owner + 0x260);
    m_states->f10 = *(int*)((char*)m_owner + 0x25c);
    m_states->f14 = *(int*)((char*)m_owner + 0x254);
    m_states->f18 = *(unsigned char*)((char*)m_owner + 0x288);
    m_states->f19 = *(unsigned char*)((char*)m_owner + 0x289);
    m_states->f1c = ((intSlot)(*(void***)m_owner)[0x380 / 8])(m_owner);
    m_states->f20 = ((intSlot)(*(void***)m_owner)[0x390 / 8])(m_owner);
    return true;
}

} }
