// FUNCTION: BF2 0x88f620
#include <string>

#define V(n) virtual void _v##n();
#define V10(a) V(a##0) V(a##1) V(a##2) V(a##3) V(a##4) V(a##5) V(a##6) V(a##7) V(a##8) V(a##9)

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
    Vec3& operator=(const Vec3& o) { set(o.x, o.y, o.z); return *this; }
    Vec3() {}
    Vec3(const Vec3& o) { set(o.x, o.y, o.z); }
};

struct Settings {
    virtual void slot0(); virtual void slot1(); virtual void slot2(); virtual void slot3();
    virtual void slot4(); virtual void slot5(); virtual void slot6(); virtual void slot7();
    virtual void slot8(); virtual void slot9(); virtual void slot10(); virtual void slot11();
    virtual void slot12(); virtual void slot13(); virtual void slot14(); virtual void slot15();
    virtual void slot16(); virtual void slot17(); virtual void slot18(); virtual void slot19();
    virtual const char* getFlag(const std::string& name, const char& def) const;
};

class ServerGameLogic {
public:
    V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V10(6) V10(7) V10(8) V10(9)
    V10(10) V10(11) V10(12) V(130) V(131)
    virtual Vec3 getVec3(); // slot 132 = 0x420
};

extern Settings* settings;
extern ServerGameLogic* gameLogic;

namespace {

class ConsoleClass202 {
public:
    virtual ~ConsoleClass202();
    virtual void* executeObjectMethod();
    void* px0();    void* px1();    void* px2();    void* px3();    void* px4();    void* px5();    void* px6();    void* px7();    void* px8();    void* px9();    void* px10();    void* px11();    void* px12();
    char pad[0x28];
    int m_argc;
    char pad2[0x108 - 0x34];
    char m_active;
    char pad3[3];
    Vec3 m_val;
};

void* ConsoleClass202::px0() {
    if (m_argc != 0) return 0;
    m_active = 1;
    char flag = *settings->getFlag(std::string("GSIsServer"), (char)0);
    ServerGameLogic* gl = flag ? gameLogic : 0;
    m_val = gl->getVec3();
    return &m_val;
}
void* ConsoleClass202::px1() {
    if (m_argc != 0) return 0;
    m_active = 1;
    char flag = *settings->getFlag(std::string("GSIsServer"), (char)0);
    ServerGameLogic* gl = flag ? gameLogic : 0;
    m_val = gl->getVec3();
    return &m_val;
}
void* ConsoleClass202::px2() {
    if (m_argc != 0) return 0;
    m_active = 1;
    char flag = *settings->getFlag(std::string("GSIsServer"), (char)0);
    ServerGameLogic* gl = flag ? gameLogic : 0;
    m_val = gl->getVec3();
    return &m_val;
}
void* ConsoleClass202::px3() {
    if (m_argc != 0) return 0;
    m_active = 1;
    char flag = *settings->getFlag(std::string("GSIsServer"), (char)0);
    ServerGameLogic* gl = flag ? gameLogic : 0;
    m_val = gl->getVec3();
    return &m_val;
}
void* ConsoleClass202::px4() {
    if (m_argc != 0) return 0;
    m_active = 1;
    char flag = *settings->getFlag(std::string("GSIsServer"), (char)0);
    ServerGameLogic* gl = flag ? gameLogic : 0;
    m_val = gl->getVec3();
    return &m_val;
}
void* ConsoleClass202::px5() {
    if (m_argc != 0) return 0;
    m_active = 1;
    char flag = *settings->getFlag(std::string("GSIsServer"), (char)0);
    ServerGameLogic* gl = flag ? gameLogic : 0;
    m_val = gl->getVec3();
    return &m_val;
}
void* ConsoleClass202::px6() {
    if (m_argc != 0) return 0;
    m_active = 1;
    char flag = *settings->getFlag(std::string("GSIsServer"), (char)0);
    ServerGameLogic* gl = flag ? gameLogic : 0;
    m_val = gl->getVec3();
    return &m_val;
}
void* ConsoleClass202::px7() {
    if (m_argc != 0) return 0;
    m_active = 1;
    char flag = *settings->getFlag(std::string("GSIsServer"), (char)0);
    ServerGameLogic* gl = flag ? gameLogic : 0;
    m_val = gl->getVec3();
    return &m_val;
}
void* ConsoleClass202::executeObjectMethod() {
    if (m_argc != 0) return 0;
    m_active = 1;
    char flag = *settings->getFlag(std::string("GSIsServer"), (char)0);
    ServerGameLogic* gl = flag ? gameLogic : 0;
    m_val = gl->getVec3();
    return &m_val;
}

} // anon
} }
