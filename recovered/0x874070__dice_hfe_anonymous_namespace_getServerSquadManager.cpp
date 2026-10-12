// FUNCTION: BF2 0x874070
#include <string>

namespace dice { namespace hfe {

struct SquadManager;

class Settings {
public:
    virtual void d00();
    virtual void d01();
    virtual void d02();
    virtual void d03();
    virtual void d04();
    virtual void d05();
    virtual void d06();
    virtual void d07();
    virtual void d08();
    virtual void d09();
    virtual void d10();
    virtual void d11();
    virtual void d12();
    virtual void d13();
    virtual void d14();
    virtual void d15();
    virtual void d16();
    virtual void d17();
    virtual void d18();
    virtual void d19();
    virtual const char* getFlag(std::string const& name, char const& def) const;
};

extern Settings* settings;
extern SquadManager* squadManager;

} }

namespace dice { namespace hfe { namespace anonymous_namespace {

void* getServerSquadManager() {
    char flag = *dice::hfe::settings->getFlag(std::string("GSIsServer"), (char)0);
    return flag ? (void*)dice::hfe::squadManager : 0;
}

} } }
