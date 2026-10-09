// FUNCTION: BF2 0xad5450
#include <list>
#include <string>
#include <ostream>

namespace dice {

namespace anim {

class Skeleton {
public:
    static void initMemory();
};

class ValueHolderManager {
public:
    ValueHolderManager();
    char m_data[0x40];
};

class AnimationManager {
public:
    AnimationManager();
    char m_data[0x48];
};

class AnimationSystemTemplateManager {
public:
    AnimationSystemTemplateManager();
    char m_data[0x58];
};

class RagDollTemplate {
public:
    static void init();
};

extern ValueHolderManager* valueHolderManager;
extern AnimationManager* animationManager;
extern AnimationSystemTemplateManager* animationSystemTemplateManager;

}

namespace hfe {

enum DebugType { DEBUG_ERROR = 6 };

class Debug {
public:
    Debug(DebugType type, const std::string& file, int line, const std::string& msg);
    ~Debug();
    std::ostream& stream() { return m_stream; }
    char m_pad0[0x20];
    std::ostream m_stream;
    char m_pad1[0x50];
};

class ConsoleObject;

class ConsoleObjects {
public:
    void registerConsoleObjects(std::list<ConsoleObject*>& objects);
};

extern ConsoleObjects* mainConsoleObjects;

class IModule {
public:
    virtual ~IModule();
};

class IEventListener {
public:
    virtual ~IEventListener();
};

class EventManager {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual void v09();
    virtual void v10();
    virtual bool addEventListener(int category, IEventListener* listener, int flags);
};

extern EventManager* eventManager;

namespace animationTools {

namespace {
std::list<ConsoleObject*> moduleConsolList;
}

class AnimModule : public IModule, public IEventListener {
public:
    bool init();
};

bool AnimModule::init()
{
    mainConsoleObjects->registerConsoleObjects(moduleConsolList);
    anim::Skeleton::initMemory();
    anim::valueHolderManager = new anim::ValueHolderManager;
    anim::animationManager = new anim::AnimationManager;
    anim::animationSystemTemplateManager = new anim::AnimationSystemTemplateManager;
    anim::RagDollTemplate::init();
    if (!eventManager->addEventListener(5, this, 0)) {
        Debug(DEBUG_ERROR, std::string("Animation/BoneAnimation/ModuleBoneAnimation.cpp"), 0xff, std::string("")).stream()
            << "Failed to register AnimModuleEventListener as event handler for ECCore.";
    }
    return true;
}

} } }
