// FUNCTION: BF2 0x7a4150
#include <string>

namespace dice { namespace hfe { namespace io {

class Console {
public:
    static const std::string ignoredString_;
};

class IConsole {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual bool executeCommand(const std::string& cmd, std::string& result, int a, int b, int c, int d, int e);
    virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7(); virtual void c8(); virtual void c9();
    virtual bool execute(const std::string& file, const std::string& a1, const std::string& a2,
                         const std::string& a3, const std::string& a4, const std::string& a5,
                         const std::string& a6, const std::string& a7, const std::string& a8,
                         const std::string& ignored);
    virtual void c11(); virtual void c12(); virtual void c13(); virtual void c14(); virtual void c15();
    virtual void c16(); virtual void c17(); virtual void c18(); virtual void c19(); virtual void c20();
    virtual void c21(); virtual void c22(); virtual void c23(); virtual void c24(); virtual void c25();
    virtual void c26(); virtual void c27(); virtual void c28(); virtual void c29(); virtual void c30();
    virtual void c31(); virtual void c32(); virtual void c33(); virtual void c34(); virtual void c35();
    virtual void c36(); virtual void c37();
    virtual void setOutputMode(int mode);
    virtual int getOutputMode();
};

extern IConsole* mainConsole;

class SettingsManagerBase {
public:
    bool load(const std::string& name);
};

bool SettingsManagerBase::load(const std::string& name)
{
    int mode = mainConsole->getOutputMode();
    mainConsole->setOutputMode(1);
    bool ok = mainConsole->execute(name, "", "", "", "", "", "", "", "",
                                   Console::ignoredString_);
    mainConsole->setOutputMode(mode);
    return ok;
}

} } }
