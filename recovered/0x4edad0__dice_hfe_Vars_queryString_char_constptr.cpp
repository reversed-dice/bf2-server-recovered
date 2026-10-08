// FUNCTION: BF2 0x4edad0
#include <string>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <new>
namespace dice { namespace hfe {
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
class Vars { public: static char const* queryString(char const* name); };
char const* Vars::queryString(char const* name) {
    if (!g_isInitialized) {
        Node* h = (Node*)operator new(0x10);
        h->next = h;
        h->prev = h;
        g_configValues = h;
        g_enableProfiling = 0;
        g_isInitialized = 1;
    }
    Node* n = FindConfigValue(name);
    char const* ret = "";
    if (n != g_configValues) {
        ConfigValue* v = &n->value;
        if (v->type == 2) {
            char buf[64];
            float const* f = v->vec;
            sprintf(buf, "%f/%f/%f", f[0], f[1], f[2]);
            v->str.assign(buf);
        } else if (v->type == 1) {
            char buf[64];
            sprintf(buf, "%f", v->val.f);
            v->str.assign(buf);
        } else if (v->type == 0) {
            char buf[64];
            sprintf(buf, "%d", v->val.i);
            v->str.assign(buf);
        }
        ret = v->str.c_str();
    }
    return ret;
}
}}
