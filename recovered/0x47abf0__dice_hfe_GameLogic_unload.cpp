// FUNCTION: BF2 0x47abf0
// BF2_FLAGS: -fno-strict-aliasing
#include <map>
#include <set>
#include <string>

namespace dice { namespace hfe {

namespace world {
class IObject;
class IObjectTemplate;
class StrategicObjectHolder;

class AmbientEffectAreaManager {
public:
    static AmbientEffectAreaManager* m_instance;
    void removeAll();
};

class TriggerManager {
public:
    static TriggerManager* m_instance;
    void removeAll();
};

class ArtilleryManager {
public:
    static ArtilleryManager* m_instance;
    void removeAll();
};

class UAVVehicleManager {
public:
    static UAVVehicleManager* m_instance;
    void removeAll();
};

extern void* objectManager;
extern void* objectTemplateManager;
extern void* materialManager;
extern void* heightmapCluster;

}

class CombatAreaManager {
public:
    static CombatAreaManager* m_instance;
    void reset();
};

namespace io {

class FileManager {
public:
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual void f23();
    virtual void f24();
    virtual void f25();
    virtual void f26();
    virtual void f27();
    virtual void f28();
    virtual void f29();
    virtual void setMounting(bool b);                                              // +0xf0
    virtual void mountArchive(const std::string& a, const std::string& p, bool b);  // +0xf8
    virtual void addArchive(const std::string& archive);                           // +0x100
};

class NetworkManager {
public:
    struct ObjectDescriptor { void* p; };
    char _pad0[0x128];
    std::map<int, ObjectDescriptor> m_descriptors;   // +0x128
};

extern NetworkManager* networkManager;
extern FileManager* fileManager;
extern void* networkableInfoManager;

}

class BF2Engine {
public:
    void shutdownAI();
};

namespace ai { class AIInstanceServer { public: static AIInstanceServer* m_iAI; }; }

extern void* eventManager;
extern void* spawnManager;
extern BF2Engine* bf2Engine;

class GameLogic {
public:
    char _pad0[0x48];
    std::map<int, std::string> m_kitTemplateStrings;                    // +0x48
    std::map<int, world::IObjectTemplate const*> m_kitTemplates;        // +0x78
    char _pad2[0x68];
    std::map<unsigned int, world::IObject*> m_objects110;               // +0x110
    std::map<int, std::set<int> > m_controlPoints;                      // +0x140
    std::map<unsigned int, world::IObject*> m_objects170;               // +0x170
    std::map<unsigned int, world::IObject*> m_objects1a0;               // +0x1a0
    std::map<unsigned int, world::IObject*> m_objects1d0;               // +0x1d0
    char _pad3[0x30];
    std::map<unsigned int, world::IObject*> m_objects230;               // +0x230
    std::map<unsigned int, world::IObject*> m_objects260;               // +0x260
    std::map<unsigned int, world::IObject*> m_objects290;               // +0x290
    std::map<std::string, world::StrategicObjectHolder*> m_holders;     // +0x2c0

    void destroyAllControlPoints();
    bool unload();
};
bool GameLogic::unload()
{
    *(unsigned char*)((char*)this + 0xad) = 0;
    destroyAllControlPoints();
    ((void (*)(void*))(*(void***)this)[0x48 / 8])(this);
    void* om = world::objectManager;
    ((void (*)(void*))(*(void***)om)[0x1c8 / 8])(om);
    void* otm = world::objectTemplateManager;
    ((void (*)(void*, int))(*(void***)otm)[0x70 / 8])(otm, 1);
    m_controlPoints.clear();
    m_objects110.clear();
    m_objects170.clear();
    m_objects1a0.clear();
    m_objects1d0.clear();
    m_objects230.clear();
    m_objects260.clear();
    m_objects290.clear();
    m_holders.clear();
    void* mm = world::materialManager;
    ((void (*)(void*))(*(void***)mm)[0xf0 / 8])(mm);
    void* hc = world::heightmapCluster;
    ((void (*)(void*))(*(void***)hc)[0x40 / 8])(hc);
    void* em = eventManager;
    ((void (*)(void*, int, int, int, float))(*(void***)em)[0x28 / 8])(em, 5, 0xd, 0, 0.0f);
    void* nim = io::networkableInfoManager;
    ((void (*)(void*))(*(void***)nim)[0x48 / 8])(nim);
    io::fileManager->addArchive(std::string("*levels"));
    if (ai::AIInstanceServer::m_iAI != 0) {
        bf2Engine->shutdownAI();
    }
    void* sm = spawnManager;
    ((void (*)(void*))(*(void***)sm)[0x40 / 8])(sm);
    if (CombatAreaManager::m_instance != 0) {
        CombatAreaManager::m_instance->reset();
    }
    if (world::AmbientEffectAreaManager::m_instance != 0) {
        world::AmbientEffectAreaManager::m_instance->removeAll();
    }
    if (world::TriggerManager::m_instance != 0) {
        world::TriggerManager::m_instance->removeAll();
    }
    if (world::ArtilleryManager::m_instance != 0) {
        world::ArtilleryManager::m_instance->removeAll();
    }
    if (world::UAVVehicleManager::m_instance != 0) {
        world::UAVVehicleManager::m_instance->removeAll();
    }
    *(int*)((char*)this + 0x14) = 0;
    m_kitTemplates.clear();
    m_kitTemplateStrings.clear();
    *(unsigned char*)((char*)this + 0xac) = 0;
    io::NetworkManager* nm = io::networkManager;
    nm->m_descriptors.clear();
    return true;
}

} }
