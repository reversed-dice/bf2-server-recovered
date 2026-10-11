// FUNCTION: BF2 0xaffe60
#include <string>

namespace dice { namespace hfe {

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
    virtual void* getClass(const std::string& name); // slot 0x98 / 8 = 19
};

extern ClassManager* classManager;

namespace ai {

class AIInstanceServer {
public:
    static void* m_iAI;
    static void updateInstance();
};

class BFConsole {
public:
    static BFConsole* m_instance;
    char _pad[1];
    bool m_flag1;

    void reset();
};

class BFSingletonServer {
public:
    static void updateStaticMethods();
};

class AIConnection {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void reset(); // slot 0x38 / 8 = 7
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
    virtual bool reset();
};

bool AIInterfaceModule::reset() {
    if (AIInstanceServer::m_iAI != 0) {
        AIConnection* conn = (AIConnection*)classManager->getClass("AIConnection");
        BFConsole::m_instance->m_flag1 = true;
        conn->reset();
        BFConsole::m_instance->reset();
        AIInstanceServer::updateInstance();
        BFSingletonServer::updateStaticMethods();
    }
    return true;
}

} } }
