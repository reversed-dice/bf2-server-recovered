// FUNCTION: BF2 0x5e0ae0
// BF2_FLAGS: -fno-tree-loop-optimize -fno-strict-aliasing
namespace dice { namespace hfe {

namespace io {
extern const unsigned int IID_INetworkableObject;
}

struct Vec3 {
    Vec3() : x(0.0f), y(0.0f), z(0.0f) {}
    float x, y, z;
};

class TargetObjectNetworkable {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int) const;
    virtual ~TargetObjectNetworkable();

    struct State {
        State() : a(0), b(0), v() {}
        int a;                  // 0x0
        char b;                 // 0x4
        char _p[3];             // 0x5
        Vec3 v;                 // 0x8
        unsigned char f14;      // 0x14
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

bool TargetObjectNetworkable::init(void* param)
{
    m_owner2 = param;
    m_netObj = queryInterface(dice::hfe::io::IID_INetworkableObject);
    m_owner = param;
    m_states = new State[4];
    bool ok = false;
    State* s = m_states;
    if (s != 0) {
        unsigned int* p = (unsigned int*)&s->v;
        p[0] = 0;
        p[1] = 0;
        p[2] = 0;
        m_states->f14 = 0;
        ok = true;
    }
    return ok;
}

} }
