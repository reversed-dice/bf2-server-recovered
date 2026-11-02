// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 -fcrossjumping -fno-strict-aliasing
// FUNCTION: BF2 0x7af2e0
#include <cctype>
#include <cstdio>
#include <list>
#include <map>
#include <sstream>
#include <string>

namespace std { void __throw_out_of_range(char const*); }

namespace dice { namespace hfe {

enum AccessType { ACCESS_NONE = 0 };

int compareIgnoreCase(char const* a, char const* b);
int compareIgnoreCase(char const* a, char const* b, int n);

struct NoCaseStringCompare {
    bool operator()(std::string const&, std::string const&) const;
};

class ConsoleObject {
public:
    virtual ~ConsoleObject();     // slots 0,1
    virtual void v08();           // 0x10
    virtual void v10();           // 0x18
    virtual void v18();           // 0x20
    virtual int getKind();        // 0x28
    virtual unsigned int getFlags();  // 0x30
    virtual void v38();           // 0x38
    virtual void v40();           // 0x40
    virtual void v48();           // 0x48
    virtual int getMinArgs();     // 0x50
    virtual int getMaxArgs();     // 0x58
    virtual bool isActive();      // 0x60
    virtual int getArgCount();    // 0x68
    virtual bool isVisible();     // 0x70
};

class ConsoleObjects {
public:
    ConsoleObject* findInMultiMap(std::string const&) const;
    ConsoleObject* getConsoleObject(std::string const&, std::string const&) const;
};
extern ConsoleObjects* mainConsoleObjects;
extern std::string const ignoredString;

namespace io {

class OldConsole {
public:
    struct Level {
        std::map<std::string, std::string, NoCaseStringCompare> m_vars;
        std::map<std::string, std::string, NoCaseStringCompare> m_consts;
        char _pad[0xb0 - 0x60];
    };

    virtual ~OldConsole();
    virtual void v08();
    virtual void v10();
    virtual void v18();
    virtual void v20();
    virtual void v28();
    virtual void v30();
    virtual void v38();
    virtual void v40();
    virtual bool run(std::string const&, std::string const&, std::string const&, std::string const&,
                     std::string const&, std::string const&, std::string const&, std::string const&,
                     std::string const&, std::string&);
    virtual bool runFullAccess();
    virtual bool include(std::string const&, std::string const&, std::string const&, std::string const&,
                         std::string const&, std::string const&, std::string const&, std::string const&,
                         std::string const&, std::string&);
    virtual void v68();
    virtual void v70();
    virtual void v78();
    virtual bool addVariable(std::string const&, std::string const&);
    virtual bool addConstant(std::string const&, std::string const&);
    virtual std::string listVariables(std::string const&);

    char _pad0[0x230]; // +0x8 = vptr, so m_levels lands at 0x238
    Level m_levels[10];
    Level* m_currentLevel;  // +0x918
    int m_depth;            // +0x920

    bool exchangeConstant(std::string const& name, std::string& val);
    bool exchangeVariable(std::string const& name, std::string& val);
    bool setVariable(std::string const& name, std::string const& val);
};

} } }

namespace dice { namespace hfe { namespace io {

extern "C" void padcall();

// TRICK: 407 pad: 2 peephole2 firings, phase -> CX
extern "C" void rdpad(int* p)
{
    if (p[0] == 0) padcall();
    if (p[1] == 0) padcall();
}

std::string OldConsole::listVariables(std::string const& name)
{
    std::string result("");

    for (int i = 0; i <= m_depth; ++i) {
        std::map<std::string, std::string, NoCaseStringCompare>::iterator it = m_levels[i].m_vars.begin();
        for (; it != m_levels[i].m_vars.end(); ++it) {
            if (compareIgnoreCase(name.c_str(), it->first.c_str(), name.length()) == 0) {
                std::stringstream os(std::ios_base::in | std::ios_base::out);
                os << it->first << " " << it->second;
                if (i != 0)
                    os << " (" << i << ")";
                os << std::endl;
                result += os.str();
            }
        }
    }

    return result;
}

} } }
