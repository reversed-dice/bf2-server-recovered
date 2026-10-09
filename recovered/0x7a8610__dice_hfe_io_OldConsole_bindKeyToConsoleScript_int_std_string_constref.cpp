// FUNCTION: BF2 0x7a8610
#include <string>

namespace dice { namespace hfe { namespace io {

class OldConsole {
public:
    virtual ~OldConsole();
    virtual void v08();
    virtual void v10();
    virtual void v18();
    virtual void v20();
    virtual void v28();
    virtual void v30();
    virtual void v38();
    virtual void v40();
    virtual void v48();
    virtual void v50();
    virtual void v58();
    virtual void v60();
    virtual bool bindKeyToConsoleScript(int key, std::string const& script);

    char _pad[0x1a0 - 0x8];
    std::string m_boundScripts[12];
};

bool OldConsole::bindKeyToConsoleScript(int key, std::string const& script)
{
    int idx = key - 1;
    if ((unsigned int)idx > 11)
        return false;
    m_boundScripts[idx] = script;
    return true;
}

} } }
