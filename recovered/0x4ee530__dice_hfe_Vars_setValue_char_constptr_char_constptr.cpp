// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4ee530
#include <string>
#include <ostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <new>
extern "C" long __strtol_internal(const char*, char**, int, int);
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

struct Vec3 { float x, y, z; static const Vec3& getZero(); };

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
    static const Vec3& queryVec3(char const* name);
    static bool setValue(char const* name, char const* value);
    static char const* getString(char const* name, char const* def);
};

bool Vars::setValue(char const* name, char const* value) {
    if (!g_isInitialized) {
        Node* h = (Node*)operator new(0x10);
        h->next = h;
        h->prev = h;
        g_configValues = h;
        g_enableProfiling = 0;
        g_isInitialized = 1;
    }
    Node* n = FindConfigValue(name);
    if (n == g_configValues) { getString(name, value); return false; }
    ConfigValue* v = &n->value;
    if (value) v->str.assign(value, strlen(value));
    int t = v->type;
    if (t == 2) {
        sscanf(v->str.c_str(), "%f/%f/%f", n->value.vec, n->value.vec + 1, n->value.vec + 2);
        return true;
    }
    if (t == 1) { v->val.f = (float)__strtod_internal(v->str.c_str(), (char**)0, 0); return true; }
    if (t == 0) { v->val.i = (int)__strtol_internal(v->str.c_str(), (char**)0, 10, 0); return true; }
    return true;
}

} }
