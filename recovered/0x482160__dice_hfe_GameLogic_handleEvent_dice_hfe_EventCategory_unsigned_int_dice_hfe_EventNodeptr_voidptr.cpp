// FUNCTION: BF2 0x482160
#include <string>
#include <vector>

namespace dice { namespace hfe {

enum EventCategory { };

class EventNode;

namespace world { class IObject; }

namespace io {

class Console {
public:
    virtual void c0();
    virtual void c1();
    virtual void c2();
    virtual void c3();
    virtual void c4();
    virtual void c5();
    virtual void c6();
    virtual void c7();
    virtual void c8();
    virtual void c9();
    virtual bool execute(const std::string& f, const std::string& a1 = "", const std::string& a2 = "", const std::string& a3 = "", const std::string& a4 = "", const std::string& a5 = "", const std::string& a6 = "", const std::string& a7 = "", const std::string& a8 = "", std::string* out = &ignoredString); // slot 10, +0x50
    virtual bool executeFile(const std::string& f, const std::string& a1 = "", const std::string& a2 = "", const std::string& a3 = "", const std::string& a4 = "", const std::string& a5 = "", const std::string& a6 = "", const std::string& a7 = "", const std::string& a8 = "", std::string* out = &ignoredString); // slot 11, +0x58
    static std::string ignoredString;
};

class NetworkManager {
public:
    world::IObject* getObject(unsigned short id);
};

extern Console* mainConsole;
extern NetworkManager* networkManager;

}

class NextLoadPart;
class LoadStat {
public:
    void setNextLoadPart(NextLoadPart* p);
};

extern LoadStat* loadStat;

struct SingletonServer {
    static void* m_iNametagManager;
};

namespace world {

class IObjectTemplate {
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
    virtual const std::string& getName();
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
};

class IObject {
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
    unsigned char m_flags;
    char _pad[0x1f];
    IObjectTemplate* m_template;
};

class ObjectPredicator;

void getChilds(IObject* obj, std::vector<IObject*>& out, ObjectPredicator* acceptor, ObjectPredicator* rejector);

class DropVehicle {
public:
    void setVehicle(IObject* p);
};

class ObjectTemplateManager {
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
    virtual IObjectTemplate const* getTemplate(std::string const& name) const;
};

extern ObjectTemplateManager* objectTemplateManager;
extern void* playerManager;
extern void* objectManager;

}

class GameLogic {
public:
    virtual void gl0();

    char _pad[0x440];
    bool m_shuttingDown;

    void handleEvent(EventCategory, unsigned int, EventNode*, void*);
    void endLoadStats();
};

} }

namespace dice { namespace hfe {

typedef void* (*FnP1)(void*);
typedef void  (*FnV0)(void*);
typedef void  (*FnV1)(void*, void*);
typedef void* (*FnI1)(void*, int);
typedef void  (*FnV2)(void*, void*, void*);

static inline void* slot90(void* o, int n)
{
    return ((FnI1)(*(void***)o)[0x90 / 8])(o, n);
}

void GameLogic::handleEvent(EventCategory category, unsigned int type, EventNode* node, void* data)
{
    switch (category) {
    case 5:
        if (type == 4) {
            if (data)
                loadStat->setNextLoadPart((NextLoadPart*)data);
        } else if (type == 3) {
            void* nm = SingletonServer::m_iNametagManager;
            if (nm)
                ((FnV2)(*(void***)nm)[0x20 / 8])(nm, slot90(this, 1), slot90(this, 2));
            ((FnV0)(*(void***)this)[0x70 / 8])(this);
        } else if (type == 7) {
            endLoadStats();
        } else if (type == 2) {
            io::mainConsole->executeFile(std::string("GameLogicInit.con"));
        } else if (type == 0xe) {
            m_shuttingDown = true;
        }
        break;
    case 0:
        if (type == 0x13) {
            io::networkManager->getObject(*(unsigned short*)data);
        } else if (type == 0x14) {
            io::networkManager->getObject(*(unsigned short*)data);
            ((FnV0)(*(void***)world::playerManager)[0x60 / 8])(world::playerManager);
        } else if (type == 0x16) {
            world::IObject* obj = io::networkManager->getObject(*(unsigned short*)data);
            if (obj) {
                world::IObjectTemplate const* tpl = world::objectTemplateManager->getTemplate(std::string("dropVehicle"));
                world::DropVehicle* cont = (world::DropVehicle*)((FnP1)(*(void***)tpl)[0xa8 / 8])((void*)tpl);
                ((FnV0)(*(void***)cont)[0x40 / 8])(cont);
                cont->setVehicle(obj);
            }
        } else if (type == 0x17) {
            world::IObject* root = io::networkManager->getObject(*(unsigned short*)data);
            if (root) {
                std::vector<world::IObject*> found;
                world::getChilds(root, found, 0, 0);
                for (std::vector<world::IObject*>::iterator it = found.begin(); it != found.end(); ++it) {
                    world::IObject* obj = *it;
                    if (!obj)
                        continue;
                    if (obj->m_template->getName().compare("supply_parachute") == 0)
                        ((FnV1)(*(void***)world::objectManager)[0x28 / 8])(world::objectManager, obj);
                }
            }
        }
        break;
    }
}

} }
