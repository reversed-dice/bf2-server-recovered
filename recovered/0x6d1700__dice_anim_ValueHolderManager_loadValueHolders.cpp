// FUNCTION: BF2 0x6d1700
#include <map>
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
    virtual bool executeCommand(const std::string& cmd, std::string& result, int a, int b,
                                int c, int d, int e);
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void execute(const std::string& file, const std::string& a1, const std::string& a2,
                         const std::string& a3, const std::string& a4, const std::string& a5,
                         const std::string& a6, const std::string& a7, const std::string& a8,
                         const std::string& ignored);
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void setOutputEnabled(bool on);
    virtual bool isOutputEnabled();
};

extern IConsole* mainConsole;

} } }

namespace dice { namespace anim {

extern std::string valueHolderFilename[];

class ValueHolderManager {
public:
    char pad[0x38];
    bool m_loaded;

    void loadValueHolders();
};

void ValueHolderManager::loadValueHolders()
{
    if (m_loaded)
        return;

    m_loaded = true;

    bool wasEnabled = hfe::io::mainConsole->isOutputEnabled();
    hfe::io::mainConsole->setOutputEnabled(false);

    hfe::io::mainConsole->execute(valueHolderFilename[0], "", "", "", "", "", "", "", "",
                             hfe::io::Console::ignoredString_);

    hfe::io::mainConsole->setOutputEnabled(wasEnabled);
}

} }
