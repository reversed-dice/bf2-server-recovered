// FUNCTION: BF2 0xb00160
#include <string>
#include <iostream>
#include <cstdlib>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

enum DebugType { DebugType_6 = 6 };

class Debug {
    char _pad[0x20];
    char _stream[0x160];
public:
    Debug(DebugType type, std::string const& file, int line, std::string const& func = "");
    ~Debug();
    template <typename T>
    std::ostream& operator<<(T const& val) {
        return *(std::ostream*)(_stream) << val;
    }
};

inline void checkPointer(void* p) {
    if (p == 0)
        Debug(DebugType(6), std::string("./AI/AIDLL/AI/AIUtils/checkPointer.h"), 46,
              std::string("")) << "AI::Allocation failed";
}

class Settings {
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
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual std::string const& stringGet(std::string const& name, std::string const& def);
};

extern Settings* settings;

class ClassManager {
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
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void* getClass(std::string const& name);
};

extern ClassManager* classManager;

namespace ai {

class BFConsole {
public:
    static BFConsole* m_instance;
    char _pad[0xa0];
    BFConsole();
};

class BFModuleCourier {
public:
    char _pad[0x8];
    BFModuleCourier();
};

class BFSingletonServerUpdater {
public:
    char _pad[0x8];
    BFSingletonServerUpdater();
};

class BFSingletonServer {
public:
    static void updateStaticMethods();
};

class AIInstanceServer {
public:
    static void updateInstance();
};

class AIConnection {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual bool check(std::string const& name);
};

class AIInterfaceModule {
public:
    virtual ~AIInterfaceModule();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual bool initAIConnection();
};

bool AIInterfaceModule::initAIConnection()
{
    std::string mode = dice::hfe::settings->stringGet(std::string("AIDLL"), std::string(""));
    if (mode.compare("") != 0) {
        AIConnection* conn = (AIConnection*)dice::hfe::classManager->getClass(std::string("AIConnection"));
        if (conn == 0)
            abort();
        if (conn->check(mode)) {
            if (BFConsole::m_instance == 0) {
                BFConsole* console = new BFConsole();
                checkPointer(console);
                BFModuleCourier* courier = new BFModuleCourier();
                checkPointer(courier);
                BFSingletonServerUpdater* updater = new BFSingletonServerUpdater();
                checkPointer(updater);
            }
            AIInstanceServer::updateInstance();
            BFSingletonServer::updateStaticMethods();
            return true;
        }
    }
    return false;
}

} } }
