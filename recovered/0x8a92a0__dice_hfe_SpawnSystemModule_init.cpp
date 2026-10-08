// FUNCTION: BF2 0x8a92a0
#include <string>
#include <list>

namespace dice { namespace hfe {

class ConsoleObject;
class ConsoleObjects {
public:
    void registerConsoleObjects(std::list<ConsoleObject*>&);
};

extern ConsoleObjects* mainConsoleObjects;
namespace { extern std::list<ConsoleObject*> SpawnSystemList; }

extern int CID_SpawnPointTemplate;

namespace world {

class ObjectTemplateManager {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v5(int, std::string const&);
};

extern ObjectTemplateManager* objectTemplateManager;

}

class SpawnSystemModule {
public:
    bool init();
};

}}

bool dice::hfe::SpawnSystemModule::init() {
    dice::hfe::mainConsoleObjects->registerConsoleObjects(dice::hfe::SpawnSystemList);
    dice::hfe::world::objectTemplateManager->v5(dice::hfe::CID_SpawnPointTemplate, std::string("SpawnPoint"));
    return true;
}
