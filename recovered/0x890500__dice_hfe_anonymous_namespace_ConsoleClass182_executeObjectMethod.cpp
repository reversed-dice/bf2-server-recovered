// FUNCTION: BF2 0x890500
#include <string>

namespace dice { namespace hfe {

struct Vec3 {
    float x, y, z;
    void set(float ax, float ay, float az) { x = ax; y = ay; z = az; }
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
    void moveLocalHumanPlayerToPoint(Vec3 const& pt);
};

extern Settings* settings;
extern ServerGameLogic* gameLogic;

namespace {

class ConsoleClass182 {
public:
    virtual ~ConsoleClass182();
    virtual void* executeObjectMethod();
    char pad[0x28];
    int m_argc;
    Vec3* m_argv;
    char pad2[0x108 - 0x40];
    char m_active;
};

void* ConsoleClass182::executeObjectMethod() {
    if (m_argc != 1) return 0;
    Vec3 pt = *m_argv;
    m_active = 0;
    char flag = *settings->getFlag(std::string("GSIsServer"), (char)0);
    ServerGameLogic* gl = flag ? gameLogic : 0;
    gl->moveLocalHumanPlayerToPoint(pt);
    return 0;
}

} // anon
} }
