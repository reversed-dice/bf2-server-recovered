// FUNCTION: BF2 0xa7d060
#include <list>

namespace dice { namespace hfe {

class ConsoleObject;

class ConsoleObjects {
public:
    void registerConsoleObjects(std::list<ConsoleObject*>& list);
};

extern ConsoleObjects* mainConsoleObjects;

class IModule {
public:
    virtual ~IModule();
    virtual bool init();
};

class IEventListener {
public:
    virtual ~IEventListener();
};

class EventManager {
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
    virtual void addListener(int eventType, IEventListener* listener, int prio);
};

extern EventManager* eventManager;

namespace {
extern std::list<ConsoleObject*> gameList;
}

class ModuleGame : public IModule, public IEventListener {
public:
    virtual ~ModuleGame();
    virtual bool init();

    int _pad;
    bool m_initialized; // +0x14
};

bool ModuleGame::init() {
    mainConsoleObjects->registerConsoleObjects(gameList);
    IEventListener* listener = static_cast<IEventListener*>(this);
    eventManager->addListener(10, listener, 0);
    eventManager->addListener(0, listener, 0);
    eventManager->addListener(5, listener, 0);
    m_initialized = true;
    return true;
}

} }
