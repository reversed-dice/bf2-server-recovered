// FUNCTION: BF2 0xac2fd0

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

namespace tool {

class ObjectTemplateAdm {
public:
    Vec3 getGroundPos(Vec3 const&) const;
};

extern ObjectTemplateAdm objectTemplateAdm;

namespace {

class ConsoleClass145 {
public:
    char _pad[0x30];
    int m_argc;
    Vec3* m_arg0;
    char _pad2[0x108 - 0x40];
    char m_hasResult;
    char _pad3[3];
    Vec3 m_result;

    void* executeObjectMethod();
};

void* ConsoleClass145::executeObjectMethod() {
    if (m_argc != 1) return 0;
    Vec3 in = *m_arg0;
    m_hasResult = 1;
    m_result = objectTemplateAdm.getGroundPos(in);
    return &m_result;
}

} } } }
