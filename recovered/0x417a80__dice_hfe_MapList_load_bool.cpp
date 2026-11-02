// FUNCTION: BF2 0x417a80
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
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual bool execute(const std::string& file, const std::string& a1, const std::string& a2,
                         const std::string& a3, const std::string& a4, const std::string& a5,
                         const std::string& a6, const std::string& a7, const std::string& a8,
                         const std::string& ignored);
    virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24(); virtual void v25();
    virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29();
    virtual void setOutputMode(int mode);
    virtual bool getOutputMode();
};

extern IConsole* mainConsole;

} } }

namespace dice { namespace hfe {

extern void fn_4173e0(void* self);
extern bool fn_417370(void* self);
extern void fn_4174d0(void* self, bool arg);

class MapList {
public:
    bool load(bool arg);

private:
    std::string m_name;                 // 0x00
    unsigned char _pad[0x70 - 0x08];
    char m_70;                          // 0x70
};

bool MapList::load(bool arg)
{
    if (m_name.empty())
        return false;
    fn_4173e0(this);
    char old = m_70;
    if (arg)
        m_70 = 1;
    if (fn_417370(this))
        fn_4174d0(this, 0);
    bool mode = io::mainConsole->getOutputMode();
    io::mainConsole->setOutputMode(0);
    bool r = io::mainConsole->execute(m_name, "", "", "", "", "", "", "", "",
                                      io::Console::ignoredString_);
    io::mainConsole->setOutputMode(mode);
    m_70 = old;
    return r;
}

} }
