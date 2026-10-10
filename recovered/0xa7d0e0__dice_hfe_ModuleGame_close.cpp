// FUNCTION: BF2 0xa7d0e0
#include <list>

class ConsoleObject;

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
    virtual void v11();
    virtual void postEvent(int category, void* data);
};

class ConsoleObjects {
public:
    void unregisterConsoleObjects(std::list<ConsoleObject*>& objects);
};

extern EventManager* eventManager;
extern ConsoleObjects* mainConsoleObjects;
extern std::list<ConsoleObject*> gameList;

class ModuleGame {
public:
    char _pad0[0x8];
    unsigned char m_8[0x18];
    bool close();
};

bool ModuleGame::close() {
    eventManager->postEvent(5, &m_8);
    eventManager->postEvent(0, &m_8);
    eventManager->postEvent(0xa, &m_8);
    mainConsoleObjects->unregisterConsoleObjects(gameList);
    return true;
}
