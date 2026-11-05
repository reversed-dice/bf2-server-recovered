// FUNCTION: BF2 0x4d2bf0
#include <string>

namespace dice { namespace hfe {

namespace io {

class Console {
public:
    static const std::string ignoredString_;
};

class IConsole {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
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
    virtual void v26(); virtual void v27(); virtual void v28(); virtual void v29(); virtual void v30();
    virtual void v31(); virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37();
    virtual void setOutputMode(int mode);
    virtual int getOutputMode();
};

extern IConsole* mainConsole;

}

class BF2Console {
public:
    void runConsoleFile(const std::string& file);
};

void BF2Console::runConsoleFile(const std::string& file)
{
    int mode = io::mainConsole->getOutputMode();
    io::mainConsole->setOutputMode(1);
    if (file.find(".con", 0, 4) == std::string::npos)
        io::mainConsole->execute(file + ".con", "", "", "", "", "", "", "", "",
                                 io::Console::ignoredString_);
    else
        io::mainConsole->execute(file, "", "", "", "", "", "", "", "",
                                 io::Console::ignoredString_);
    io::mainConsole->setOutputMode(mode);
}

} }
