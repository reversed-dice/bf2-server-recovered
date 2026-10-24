// BF2_FLAGS: --param inline-unit-growth=100000 --param large-function-growth=100000 -fcrossjumping -fno-strict-aliasing
// FUNCTION: BF2 0x7afae0
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

class ConsoleObject {
public:
    virtual ~ConsoleObject();     // slots 0,1
    virtual void v08();           // 0x10
    virtual void v10();           // 0x18
    virtual void v18();           // 0x20
    virtual int getKind();        // 0x28  1 method, 2 read-only, 3 write-only
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
        std::map<std::string, std::string> m_vars;
        std::map<std::string, std::string> m_consts;
        bool m_running;
        std::list<std::string> m_lines;
        int m_whileDepth;
        char _pad0[0x98 - 0x7c];
        int m_remDepth;
        int m_noExecDepth;
        int m_ifDepth;
        bool m_cond;
        bool m_condSaved;
        bool m_ifSeen;
        bool m_elseSeen;
        bool m_returned;
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

    char _pad0[0x200];
    void (*m_exitFn)(void*);
    void* m_exitArg;
    char _pad1[0x238 - 0x210];
    Level m_levels[10];
    Level* m_currentLevel;
    int m_depth;
    bool m_fullAccess;
    char _pad2[0x9a8 - 0x925];
    std::string m_text;
    bool m_redirect;
    bool (*m_handleCommandHook)(char const*, int);

    int getArgs(std::istringstream&, std::string*, std::string*, int, std::string&, int);
    void incDepth();
    void decDepth();
    bool calcBooleanExpr(std::string const&, std::string const&, std::string const&, bool&, std::string&);
    bool exchangeVarsAndConsts(std::string const&, std::string&, std::string&);
    bool exchangeConstant(std::string const&, std::string&);
    bool exchangeVariable(std::string const&, std::string&);
    bool setVariable(std::string const&, std::string const&);

    int handleCommand(std::string const& line, std::string& result, AccessType access);
};

} } }

namespace dice { namespace hfe { namespace io {

bool OldConsole::exchangeVarsAndConsts(std::string const& name, std::string& value, std::string& err)
{
    if (compareIgnoreCase(name.c_str(), "v_", 2) == 0) {
        if (exchangeVariable(name, value))
            return true;
        std::stringstream os(std::ios_base::in | std::ios_base::out);
        os << "Unknown variable " << name << "!";
        err.assign(os.str());
        return false;
    } else if (compareIgnoreCase(name.c_str(), "c_", 2) == 0) {
        if (exchangeConstant(name, value))
            return true;
        std::stringstream os(std::ios_base::in | std::ios_base::out);
        os << "Unknown constant " << name << "!";
        err.assign(os.str());
        return false;
    } else {
        value.assign(name);
        return true;
    }
}

} } }
