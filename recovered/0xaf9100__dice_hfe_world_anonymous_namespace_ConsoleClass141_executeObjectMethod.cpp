// FUNCTION: BF2 0xaf9100
// BF2_FLAGS: -fno-strict-aliasing
namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

namespace world {

class ObjectTemplate {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
    virtual void setValue(Vec3 v);
    virtual Vec3 getValue() const;
};

extern ObjectTemplate* g_obj0xaf9100;

namespace {

class ConsoleClass141 {
public:
    virtual ~ConsoleClass141();
    void* executeObjectMethod();
    unsigned char _pad0[0x30 - 8];
    int m_argc;
    unsigned char _pad1[4];
    const Vec3* m_arg0;
    unsigned char _pad2[0x108 - 0x40];
    bool m_hasResult;
    unsigned char _pad3[0x10c - 0x109];
    Vec3 m_result;
};

void* ConsoleClass141::executeObjectMethod()
{
    if (m_argc == 0) {
        m_hasResult = true;
        m_result = g_obj0xaf9100->getValue();
        return &m_result;
    }
    if (m_argc == 1) {
        Vec3 a(*m_arg0);
        m_hasResult = false;
        g_obj0xaf9100->setValue(a);
    }
    return 0;
}

}
} } }
