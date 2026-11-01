// FUNCTION: BF2 0x4db170
#include <string>
#include <ostream>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

class IEventListener { public: virtual void notify(); };
class IInputFilter { public: virtual ~IInputFilter(); };

class Thread {
public:
    virtual ~Thread();
    virtual void f1();
    virtual void f2();
    void stop();
};

class Mutex {
public:
    void lock();
    void unlock();
    char _pad[8];
};

struct Debug {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug(int type, const std::string& file, int line, const std::string& tag);
    ~Debug();
};

struct DebugDraw {};

class EventManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual bool addListener(int ev, IEventListener* l);   // +0x60
};

namespace io {

class Console {
public:
    virtual void c00(); virtual void c01(); virtual void c02(); virtual void c03();
    virtual void c04(); virtual void c05(); virtual void c06(); virtual void c07();
    virtual void c08(); virtual void c09(); virtual void c10(); virtual void c11();
    virtual void c12(); virtual void c13(); virtual void c14(); virtual void c15();
    virtual void c16(); virtual void c17(); virtual void c18(); virtual void c19();
    virtual void c20(); virtual void c21(); virtual void c22(); virtual void c23();
    virtual void c24(); virtual void c25(); virtual void c26(); virtual void c27();
    virtual void c28(); virtual void c29(); virtual void c30(); virtual void c31();
    virtual void c32(); virtual void c33(); virtual void c34(); virtual void c35();
    virtual void c36(); virtual void c37(); virtual void c38(); virtual void c39();
    virtual void c40(); virtual void c41(); virtual void c42(); virtual void c43();
    virtual void execute(const std::string& cmd);   // +0x160
};

class SettingsManagerBase {
public:
    void save(const std::string& file, int set);
};

extern Console* mainConsole;
extern SettingsManagerBase* settingsManager;

} // namespace io

namespace world {

class ObjectManager {
public:
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8();
    virtual void* findObject(const std::string& name);   // +0x48
};

class ObjectTemplateManager {
public:
    virtual void t0(); virtual void t1(); virtual void t2(); virtual void t3();
    virtual void t4(); virtual void t5(); virtual void t6(); virtual void t7();
    virtual void t8(); virtual void t9(); virtual void t10(); virtual void t11();
    virtual void t12(); virtual void t13();
    virtual void releaseAll(int mode);   // +0x70
};

class IObject {
public:
    virtual void o0(); virtual void o1();
    virtual void destroy();   // +0x10
};

class SupplyDropManager {
public:
    static SupplyDropManager* Instance();
    static void Release();
};

extern ObjectManager* objectManager;
extern ObjectTemplateManager* objectTemplateManager;

} // namespace world

extern EventManager* eventManager;
extern EventManager* frameEventManager;
extern DebugDraw* debugDraw;

void shutdownSettingsRepostitory();

struct AutoDelete { char* p; ~AutoDelete() { if (p) delete p; } };

class BF2Engine : public IInputFilter, public IEventListener {
public:
    char _pad10[0x40];
    AutoDelete m_0x50;
    char _pad58[0x30];
    std::string m_0x88;
    std::string m_0x90;
    char _pad98[0x70];
    void* m_0x108;
    char _pad110[0x18];
    Mutex m_0x128;
    Mutex m_0x130;
    Thread* m_0x138;
    bool m_0x140;
    char _pad141[7];
    char* m_0x148;
    char* m_0x150;

    bool shutdown();
    void shutdownGame(bool b);
    void shutdownEngine();
};

bool BF2Engine::shutdown()
{
    if (m_0x138 != 0) {
        m_0x128.lock();
        m_0x140 = true;
        m_0x128.unlock();
        m_0x138->stop();
        delete m_0x138;
        m_0x138 = 0;
        m_0x140 = false;
    }
    delete dice::hfe::debugDraw;
    if (m_0x108 == 0 || dice::hfe::eventManager == 0
        || !dice::hfe::eventManager->addListener(2, (IEventListener*)m_0x108)) {
        Debug(6, std::string("Game/Main/BF2Engine.cpp"), 0x372,
              std::string(&DAT_00bb25f1)).os
            << "Failed to unregister Demo as event handler for ECHud.";
    }
    dice::hfe::io::mainConsole->execute(std::string("Logs/BfCommandHistory.con"));
    dice::hfe::io::settingsManager->save(std::string("Settings/Usersettings.con"), 0);
    dice::hfe::eventManager->addListener(5, this);
    dice::hfe::eventManager->addListener(10, this);
    dice::hfe::frameEventManager->addListener(10, this);
    dice::hfe::eventManager->addListener(11, this);
    shutdownGame(true);
    world::IObject* obj = (world::IObject*)dice::hfe::world::objectManager->findObject(
        std::string("mainTerrain"));
    if (obj != 0) {
        obj->destroy();
    }
    dice::hfe::world::objectTemplateManager->releaseAll(0);
    dice::hfe::world::SupplyDropManager::Instance();
    dice::hfe::world::SupplyDropManager::Release();
    dice::hfe::shutdownSettingsRepostitory();
    shutdownEngine();
    return true;
}

} }
