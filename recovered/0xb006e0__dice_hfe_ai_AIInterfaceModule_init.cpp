// FUNCTION: BF2 0xb006e0
#include <list>

namespace dice { namespace hfe {

class ConsoleObject {};
class ConsoleObjects {
public:
    void registerConsoleObjects(std::list<ConsoleObject*>& list);
};

extern ConsoleObjects* mainConsoleObjects;

namespace ai {

namespace {
    extern std::list<ConsoleObject*> aiList;
}

class AIInterfaceModule {
public:
    char _pad[0x18];
    bool m_flag;

    static bool initAIConnection();
    bool init();
};

bool AIInterfaceModule::init() {
    bool ok = initAIConnection();
    if (ok) {
        if (m_flag) {
            mainConsoleObjects->registerConsoleObjects(aiList);
            m_flag = false;
        }
        return true;
    }
    return false;
}

} } }
