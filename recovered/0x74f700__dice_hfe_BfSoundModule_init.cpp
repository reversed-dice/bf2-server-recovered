// FUNCTION: BF2 0x74f700
#include <string>
#include <list>

namespace dice { namespace hfe {

class ConsoleObject;
class ConsoleObjects {
public:
    bool registerConsoleObjects(std::list<ConsoleObject*>& objs);
};
extern ConsoleObjects* mainConsoleObjects;
namespace { extern std::list<ConsoleObject*> soundList; }

namespace world {

class IObjectTemplateManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void registerTemplateCreator(unsigned int classId, const std::string& name);
};
extern IObjectTemplateManager* objectTemplateManager;
}

class ISoundEngine;
extern ISoundEngine* g_soundEngine;
extern ISoundEngine* g_nullSoundEngine;

class IBfSound {
public:
    virtual void addRef();
};
class BfSound : public IBfSound {
public:
    BfSound() : m_ref(1) {}
    virtual void addRef();
    int m_ref;
};
extern BfSound* g_bfSound;

class BfSoundModule {
public:
    virtual bool init();
};

bool BfSoundModule::init()
{
    if (g_bfSound)
        return false;
    mainConsoleObjects->registerConsoleObjects(soundList);
    world::objectTemplateManager->registerTemplateCreator(0x985fd1, "Sound");
    g_soundEngine = g_nullSoundEngine;
    g_bfSound = new BfSound;
    return true;
}

} }
