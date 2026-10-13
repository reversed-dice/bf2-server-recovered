// FUNCTION: BF2 0x5c7a50
// BF2_FLAGS: -fno-strict-aliasing
#include <math.h>

namespace dice { namespace hfe {

namespace io {
extern const unsigned int IID_INetworkableObject;
}

struct Vec3 { Vec3() : x(0.0f), y(0.0f), z(0.0f) {} float x, y, z; };

class DestroyableObjectNetworkable {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int) const;
    virtual ~DestroyableObjectNetworkable();

    struct State {
        State() : a(0), b(0) {}
        int a;              // 0x0
        char b;             // 0x4
        int windowState;    // 0x8
        Vec3 m_pos;         // 0xc
    };

    char _pad0[0x28 - 0x8];
    void* m_netObj;         // 0x28
    char _pad1[0x4c - 0x30];
    int m_sent;             // 0x4c
    char _pad2[0x60 - 0x50];
    void* m_owner2;         // 0x60
    char _pad3[0x78 - 0x68];
    State* m_states;        // 0x78

    bool init(void* param);
};

typedef float (*getWindowFn)(void*);

bool DestroyableObjectNetworkable::init(void* param)
{
    m_owner2 = param;
    m_netObj = queryInterface(dice::hfe::io::IID_INetworkableObject);
    m_states = new State[4];
    m_sent = 0;
    void* sup = *(void**)((char*)m_owner2 + 0x78);
    if (sup != 0)
        m_states->windowState = (int)ceilf(((getWindowFn)(*(void***)sup)[0x78 / 8])(sup));
    return m_states != 0;
}

} }
