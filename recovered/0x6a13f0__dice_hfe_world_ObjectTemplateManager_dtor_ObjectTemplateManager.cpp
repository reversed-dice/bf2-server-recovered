// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6a13f0
#include <string>
#include <map>
#include <list>

namespace dice { namespace hfe {

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
    virtual void e11();
    virtual void e12(int, void*);
};

extern EventManager* eventManager;

namespace world {

class IObjectTemplate;

class IObjectTemplateManager {
public:
    virtual void v0();
};

class IEventListener {
public:
    virtual void l0();
};

struct Entry {
    Entry* next;
    std::string key;
};

class Table {
public:
    Entry** slots;
    unsigned int count;
    ~Table() {
        for (unsigned int i = 0; i < count; ++i) {
            Entry* e = slots[i];
            while (e != 0) {
                Entry* nx = e->next;
                delete e;
                e = nx;
            }
            slots[i] = 0;
        }
        if (slots != 0) {
            operator delete[](slots);
        }
    }
};

class ObjectTemplateManager : public IObjectTemplateManager, public IEventListener {
public:
    virtual ~ObjectTemplateManager();

    char _pad0[8];
    std::map<unsigned int, IObjectTemplate const*> m_templates;
    std::map<unsigned int, std::string> m_classNames;
    char _pad1[0x10];
    std::list<IObjectTemplate*> m_objects;
    Table m_table;
    char _pad2[8];
    std::map<unsigned int, std::string> m_folderNames;
};

} } }

dice::hfe::world::ObjectTemplateManager::~ObjectTemplateManager() {
    dice::hfe::eventManager->e12(5, (IEventListener*)((char*)this + 8));
}
