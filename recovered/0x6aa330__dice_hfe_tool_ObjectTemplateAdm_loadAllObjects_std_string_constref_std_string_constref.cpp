// FUNCTION: BF2 0x6aa330
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

namespace dice { namespace hfe { namespace world {

class IObjectTemplate;

class ObjectManager {
public:
    virtual void d00(); virtual void d01(); virtual void d02(); virtual void d03();
    virtual void d04(); virtual void d05(); virtual void d06(); virtual void d07();
    virtual void d08(); virtual void d09(); virtual void d10(); virtual void d11();
    virtual void d12(); virtual void d13(); virtual void d14(); virtual void d15();
    virtual void d16(); virtual void d17(); virtual void d18(); virtual void d19();
    virtual void d20(); virtual void d21(); virtual void d22(); virtual void d23();
    virtual void d24(); virtual void d25(); virtual void d26(); virtual void d27();
    virtual void d28(); virtual void d29(); virtual void d30(); virtual void d31();
    virtual void d32(); virtual void d33(); virtual void d34(); virtual void d35();
    virtual void d36();
    virtual void setActiveObjectTemplate(const IObjectTemplate* t);
};

extern ObjectManager* objectManager;

} } }

namespace dice { namespace hfe { namespace tool {

class ObjectTemplateAdm {
public:
    bool loadAllObjects(std::string const& a, std::string const& b);

private:
    void deleteAllObjects();
};

bool ObjectTemplateAdm::loadAllObjects(std::string const& a, std::string const& b)
{
    deleteAllObjects();
    dice::hfe::io::mainConsole->execute(b + a, "", "", "", "", "", "", "", "",
                                        dice::hfe::io::Console::ignoredString_);
    dice::hfe::world::objectManager->setActiveObjectTemplate(0);
    return true;
}

} } }
