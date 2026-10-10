// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4ef380
#include <string>
#include <ostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <new>
extern "C" double __strtod_internal(const char*, char**, int);
namespace dice { namespace hfe {

enum DebugType { DEBUG_WARNING = 6, DEBUG_ASSERT = 7 };

class Debug {
public:
    Debug(DebugType type, const std::string& file, int line, const std::string& msg);
    ~Debug();
    std::ostream& stream() { return m_stream; }
    char m_pad0[0x20];
    std::ostream m_stream;
    char m_pad1[0x50];
};

struct Vec3 { float x, y, z; };

namespace {
struct ConfigValue {
    int type;
    int pad0;
    int pad1;
    int pad2;
    float vec[3];
    union { int i; float f; } val;
    std::string str;
};
struct Node {
    Node* next;
    Node* prev;
    ConfigValue value;
};
Node* g_configValues;
unsigned char g_enableProfiling;
unsigned char g_isInitialized;
Node* FindConfigValue(char const* name);
}

class Vars {
public:
    static char const* queryString(char const* name);
    static int queryInt(char const* name);
    static float queryFloat(char const* name);
    static Vec3 queryVec3(char const* name);
};

float Vars::queryFloat(char const* name) {
    if (!g_isInitialized) {
        Node* h = (Node*)operator new(0x10);
        h->next = h;
        h->prev = h;
        g_configValues = h;
        g_enableProfiling = 0;
        g_isInitialized = 1;
    }
    Node* n = FindConfigValue(name);
    if (n == g_configValues) return 0;
    ConfigValue* v = &n->value;
    if (v->type == 3) {
        v->type = 1;
        v->val.f = (float)__strtod_internal(v->str.c_str(), (char**)0, 0);
    } else if (v->type != 1) {
            Debug(DEBUG_WARNING, std::string("Game/Utility/Vars.cpp"), 0x165, std::string(""))
                .stream() << "Failed to cast config value " << name << " to Float";
    }
    return v->val.f;
}

} }
