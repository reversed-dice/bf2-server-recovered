// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4edc10
#include <string>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <new>
#include <list>

namespace dice { namespace hfe {

int compareIgnoreCase(char const*, char const*, int);

namespace {
struct ConfigValue {
    int type;
    int pad0;
    std::string name;
    float vec[3];
    union { int i; float f; } val;
    std::string str;
};
bool operator<(ConfigValue const& a, ConfigValue const& b);
bool operator==(ConfigValue const& a, ConfigValue const& b);
std::list<ConfigValue>* g_configValues;
unsigned char g_enableProfiling;
unsigned char g_isInitialized;

char* DumpConfigValues(std::string const& s) {
    if (!g_isInitialized) {
        g_configValues = new std::list<ConfigValue>();
        g_enableProfiling = 0;
        g_isInitialized = 1;
    }
    std::string out;
    g_configValues->sort();
    for (std::list<ConfigValue>::iterator it = g_configValues->begin(); it != g_configValues->end(); ++it) {
        if (compareIgnoreCase(s.c_str(), it->name.c_str(), (int)s.size()) != 0) continue;
        out += it->name + " ";
        ConfigValue* v = &*it;
        if (it->type == 2) {
            char buf[64];
            float const* f = it->vec;
            sprintf(buf, "%f/%f/%f", f[0], f[1], f[2]);
            it->str.assign(buf);
        } else if (it->type == 1) {
            char buf[64];
            sprintf(buf, "%f", v->val.f);
            it->str.assign(buf);
        } else if (it->type == 0) {
            char buf[64];
            sprintf(buf, "%d", v->val.i);
            it->str.assign(buf);
        }
        out += v->str + "\n";
    }
    return strdup(out.c_str());
}
}
}}
