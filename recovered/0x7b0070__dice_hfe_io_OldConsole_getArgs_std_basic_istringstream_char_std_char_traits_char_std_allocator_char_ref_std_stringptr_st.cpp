
// TRICK: 50
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing --param inline-unit-growth=100000
// FUNCTION: BF2 0x7b0070
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
    int pad0(std::istringstream&, std::string*, std::string*, int, std::string&, int);
    int pad1(std::istringstream&, std::string*, std::string*, int, std::string&, int);
    int pad2(std::istringstream&, std::string*, std::string*, int, std::string&, int);
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

int OldConsole::pad0(std::istringstream& is, std::string* args, std::string* tmp, int max,
                        std::string& err, int flags)
{
    int n = 0;
    while (!is.eof() && n < max) {
        int status;
        {
        std::string one("_");
        bool quoted = false;
        std::string& tok = tmp[n];
        std::ws(is);
        while (!is.eof()) {
            int c = is.get();
            if (c == -1)
                break;
            if (!quoted && (c == ' ' || c == '\t'))
                break;
            if (c == '"') {
                if (quoted)
                    break;
                quoted = true;
                continue;
            }
            if (!quoted && (c == ' ' || c == '\t'))
                break;
            one[0] = (char)c;
            tok.append(one);
        }
        if (!quoted && tok.empty()) {
            status = 0;
        } else {
            if (is.eof() && quoted) {
                err.assign("no closing '\"'!", 0xf);
                status = 1;
            } else {
                args[n] = tok;
                bool ok;
                if (n >= flags) {
                    status = 1;
                    ok = exchangeVarsAndConsts(tok, args[n], err);
                } else if (quoted) {
                    std::stringstream os(std::ios_base::in | std::ios_base::out);
                    os << "'\"' not allowed in arg " << n << "!";
                    err = os.str();
                    status = 1;
                    ok = false;
                } else {
                    ok = true;
                }
                if (ok) {
                    n++;
                    status = 2;
                }
            }
        }
        end:;
        }
        if (status == 0)
            break;
        if (__builtin_expect(status != 2, 1)) {
            n = -1;
            break;
        }
    }
    return n;
}
int OldConsole::pad1(std::istringstream& is, std::string* args, std::string* tmp, int max,
                        std::string& err, int flags)
{
    int n = 0;
    while (!is.eof() && n < max) {
        int status;
        {
        std::string one("_");
        bool quoted = false;
        std::string& tok = tmp[n];
        std::ws(is);
        while (!is.eof()) {
            int c = is.get();
            if (c == -1)
                break;
            if (!quoted && (c == ' ' || c == '\t'))
                break;
            if (c == '"') {
                if (quoted)
                    break;
                quoted = true;
                continue;
            }
            if (!quoted && (c == ' ' || c == '\t'))
                break;
            one[0] = (char)c;
            tok.append(one);
        }
        if (!quoted && tok.empty()) {
            status = 0;
        } else {
            if (is.eof() && quoted) {
                err.assign("no closing '\"'!", 0xf);
                status = 1;
            } else {
                args[n] = tok;
                bool ok;
                if (n >= flags) {
                    status = 1;
                    ok = exchangeVarsAndConsts(tok, args[n], err);
                } else if (quoted) {
                    std::stringstream os(std::ios_base::in | std::ios_base::out);
                    os << "'\"' not allowed in arg " << n << "!";
                    err = os.str();
                    status = 1;
                    ok = false;
                } else {
                    ok = true;
                }
                if (ok) {
                    n++;
                    status = 2;
                }
            }
        }
        end:;
        }
        if (status == 0)
            break;
        if (__builtin_expect(status != 2, 1)) {
            n = -1;
            break;
        }
    }
    return n;
}
int OldConsole::pad2(std::istringstream& is, std::string* args, std::string* tmp, int max,
                        std::string& err, int flags)
{
    int n = 0;
    while (!is.eof() && n < max) {
        int status;
        {
        std::string one("_");
        bool quoted = false;
        std::string& tok = tmp[n];
        std::ws(is);
        while (!is.eof()) {
            int c = is.get();
            if (c == -1)
                break;
            if (!quoted && (c == ' ' || c == '\t'))
                break;
            if (c == '"') {
                if (quoted)
                    break;
                quoted = true;
                continue;
            }
            if (!quoted && (c == ' ' || c == '\t'))
                break;
            one[0] = (char)c;
            tok.append(one);
        }
        if (!quoted && tok.empty()) {
            status = 0;
        } else {
            if (is.eof() && quoted) {
                err.assign("no closing '\"'!", 0xf);
                status = 1;
            } else {
                args[n] = tok;
                bool ok;
                if (n >= flags) {
                    status = 1;
                    ok = exchangeVarsAndConsts(tok, args[n], err);
                } else if (quoted) {
                    std::stringstream os(std::ios_base::in | std::ios_base::out);
                    os << "'\"' not allowed in arg " << n << "!";
                    err = os.str();
                    status = 1;
                    ok = false;
                } else {
                    ok = true;
                }
                if (ok) {
                    n++;
                    status = 2;
                }
            }
        }
        end:;
        }
        if (status == 0)
            break;
        if (__builtin_expect(status != 2, 1)) {
            n = -1;
            break;
        }
    }
    return n;
}
int OldConsole::getArgs(std::istringstream& is, std::string* args, std::string* tmp, int max,
                        std::string& err, int flags)
{
    int n = 0;
    while (!is.eof() && n < max) {
        int status;
        {
        std::string one("_");
        bool quoted = false;
        std::string& tok = tmp[n];
        std::ws(is);
        while (!is.eof()) {
            int c = is.get();
            if (c == -1)
                break;
            if (!quoted && (c == ' ' || c == '\t'))
                break;
            if (c == '"') {
                if (quoted)
                    break;
                quoted = true;
                continue;
            }
            if (!quoted && (c == ' ' || c == '\t'))
                break;
            one[0] = (char)c;
            tok.append(one);
        }
        if (!quoted && tok.empty()) {
            status = 0;
        } else {
            if (is.eof() && quoted) {
                err.assign("no closing '\"'!", 0xf);
                status = 1;
            } else {
                args[n] = tok;
                bool ok;
                if (n >= flags) {
                    status = 1;
                    ok = exchangeVarsAndConsts(tok, args[n], err);
                } else if (quoted) {
                    std::stringstream os(std::ios_base::in | std::ios_base::out);
                    os << "'\"' not allowed in arg " << n << "!";
                    err = os.str();
                    status = 1;
                    ok = false;
                } else {
                    ok = true;
                }
                if (ok) {
                    n++;
                    status = 2;
                }
            }
        }
        end:;
        }
        if (status == 0)
            break;
        if (__builtin_expect(status != 2, 1)) {
            n = -1;
            break;
        }
    }
    return n;
}

} } }
