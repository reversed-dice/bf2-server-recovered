// FUNCTION: BF2 0x525b70
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe { namespace world {

class SimpleObject {
public:
    virtual void disableCachedObject();
};

class KitTemplate {
public:
    char _pad[0x218];
    int m_unk218; // +0x218
    char _pad2[0x260 - 0x21c];
    float m_unk260; // +0x260
};

class Kit : public SimpleObject {
public:
    char _pad[0x2c0 - sizeof(SimpleObject)];
    float m_val2c0; // +0x2c0
    int m_val2c4;   // +0x2c4
    int m_val2c8;   // +0x2c8
    char _pad2[0x2d8 - 0x2cc];
    KitTemplate* m_template; // +0x2d8

    void updateUnlockStatus();
    virtual void disableCachedObject();
};

void Kit::disableCachedObject() {
    m_val2c4 = -1;
    m_val2c0 = (m_template->m_unk260 != -1.0f) ? 1.0f : -1.0f;
    m_val2c8 = m_template->m_unk218;
    updateUnlockStatus();
    SimpleObject::disableCachedObject();
}

} } }
