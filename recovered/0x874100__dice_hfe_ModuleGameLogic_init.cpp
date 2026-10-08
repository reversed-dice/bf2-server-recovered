// FUNCTION: BF2 0x874100
#include <string>
#include <list>

namespace dice { namespace hfe {

class ConsoleObject;
class ConsoleObjects {
public:
    void registerConsoleObjects(std::list<ConsoleObject*>&);
};

extern ConsoleObjects* mainConsoleObjects;
namespace { extern std::list<ConsoleObject*> myList; }

namespace world {

extern int CID_Player;

class PlayerManager {
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
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26(int, std::string const&);
};

extern PlayerManager* playerManager;

}

class ModuleGameLogic {
public:
    bool init();
};

}}

bool dice::hfe::ModuleGameLogic::init() {
    dice::hfe::mainConsoleObjects->registerConsoleObjects(dice::hfe::myList);
    dice::hfe::world::playerManager->v26(dice::hfe::world::CID_Player, std::string("Player"));
    return true;
}
