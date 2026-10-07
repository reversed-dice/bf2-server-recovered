// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x5c8b10
namespace dice { namespace hfe {
namespace io {
extern const unsigned int IID_INetworkableObject;
}

namespace world {
class DestroyableWindowsBundle {
public:
    char _pad[0x23c];
    unsigned int m_windowState;
};
}

struct DestroyableWindowsBundleState {
    DestroyableWindowsBundleState() : m_a(0), m_b(0) {}
    int m_a;
    char m_b;
    unsigned int windowState;
};

class DestroyableWindowsBundleNetworkable {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int) const;
    virtual ~DestroyableWindowsBundleNetworkable();
    virtual bool init(void* param);

    char _pad0[0x28 - 8];
    void* m_netObj; // 0x28
    char _pad1[0x4c - 0x30];
    int m_sent; // 0x4c
    char _pad2[0x60 - 0x50];
    void* m_owner2; // 0x60
    char _pad3[0x78 - 0x68];
    DestroyableWindowsBundleState* m_states; // 0x78
    world::DestroyableWindowsBundle* m_owner; // 0x80
};

bool DestroyableWindowsBundleNetworkable::init(void* param) {
    m_owner2 = param;
    m_owner = (world::DestroyableWindowsBundle*)param;
    m_netObj = queryInterface(io::IID_INetworkableObject);
    m_states = new DestroyableWindowsBundleState[4];
    m_sent = 0;
    m_states->windowState = m_owner->m_windowState;
    return m_states != 0;
}

} }
