// FUNCTION: BF2 0x992560
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
    unsigned char _pad[0x224];
    Vec3 m_value;
    const Vec3& getValue() const { return m_value; }
    void setValue(const Vec3& v) { m_value = v; }
};

ObjectTemplate* getActiveTemplate(unsigned int classId);
extern unsigned int classId0x992560;

namespace {

class ConsoleClass232 {
public:
    virtual ~ConsoleClass232();
    void* executeObjectMethod();
    unsigned char _pad0[0x30 - 8];
    int m_argc;
    unsigned char _pad1[0x38 - 0x30 - 4];
    const Vec3* m_arg0;
    unsigned char _pad2[0x108 - 0x38 - 8];
    bool m_hasResult;
    unsigned char _pad3[0x10c - 0x108 - 1];
    Vec3 m_result;
};

void* ConsoleClass232::executeObjectMethod()
{
    if (m_argc == 0) {
        m_hasResult = true;
        m_result = getActiveTemplate(classId0x992560)->getValue();
        return &m_result;
    }
    if (m_argc == 1) {
        Vec3 a(*m_arg0);
        m_hasResult = false;
        getActiveTemplate(classId0x992560)->setValue(a);
    }
    return 0;
}

}
} } }
