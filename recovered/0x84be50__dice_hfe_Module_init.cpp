// FUNCTION: BF2 0x84be50
#include <string>
#include <list>

namespace dice { namespace hfe {

class ConsoleObject;
class ConsoleObjects {
public:
    void registerConsoleObjects(std::list<ConsoleObject*>&);
};

class IEventListener {
public:
    virtual void l0();
};

class EventManager {
public:
    virtual void e0();
    virtual void e1();
    virtual void e2();
    virtual void e3();
    virtual void e4();
    virtual void e5();
    virtual void e6();
    virtual void e7();
    virtual void e8();
    virtual void e9();
    virtual void e10();
    virtual bool e11(int category, IEventListener* listener, int flags);
    virtual void e12(int, void*);
    virtual void e13(int, int, std::string const& name);
    virtual void e14(int, int);
};

extern ConsoleObjects* mainConsoleObjects;
namespace { extern std::list<ConsoleObject*> coreList; }

extern EventManager* eventManager;
extern void* profiler;
extern void* profilerClient;

class Module {
public:
    bool init();
};

}}

bool dice::hfe::Module::init()
{
    dice::hfe::mainConsoleObjects->registerConsoleObjects(dice::hfe::coreList);
    dice::hfe::profilerClient = dice::hfe::profiler;
    dice::hfe::eventManager->e13(5, 2, std::string("ECCoreCEPreLoad"));
    dice::hfe::eventManager->e13(5, 3, std::string("ECCoreCEPostLoad"));
    dice::hfe::eventManager->e13(5, 4, std::string("ECCoreCEUpdateLoadStats"));
    dice::hfe::eventManager->e13(5, 6, std::string("ECCoreCEShutdownGame"));
    dice::hfe::eventManager->e13(5, 7, std::string("ECCoreCEResourcesLoaded"));
    dice::hfe::eventManager->e13(5, 8, std::string("ECCoreCEDebugTextHook"));
    dice::hfe::eventManager->e13(5, 9, std::string("ECCoreCECollectSystemInfo"));
    dice::hfe::eventManager->e13(5, 0xd, std::string("ECCoreCEUnloadLevel"));
    dice::hfe::eventManager->e13(5, 0xe, std::string("ECCoreCEAbortLoadLevel"));
    dice::hfe::eventManager->e13(5, 0xf, std::string("ECCoreCEActivateApp"));
    dice::hfe::eventManager->e13(5, 0x10, std::string("ECCoreCEPeakWinMessages"));
    dice::hfe::eventManager->e13(5, 0xa, std::string("ECCoreCEStartPerformanceTest"));
    dice::hfe::eventManager->e13(5, 0xb, std::string("ECCoreCEStopPerformanceTest"));
    dice::hfe::eventManager->e13(5, 0xc, std::string("ECCoreCEReportPerformanceInfo"));
    return true;
}
