// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x4ed820
#include <list>

namespace {

struct ConfigValue {
    int m_type;
    char const* m_name;
};

std::list<ConfigValue>* g_configValues;
bool g_enableProfiling;
bool isInitialized;
int compareIgnoreCase(char const*, char const*);

std::list<ConfigValue>::iterator FindConfigValue(char const* name)
{
    if (!isInitialized) {
        g_configValues = new std::list<ConfigValue>();
        g_enableProfiling = false;
        isInitialized = true;
    }
    std::list<ConfigValue>::iterator it;
    for (it = g_configValues->begin(); it != g_configValues->end(); ++it) {
        if (compareIgnoreCase(name, it->m_name) == 0)
            return it;
    }
    return g_configValues->end();
}

}
