// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x561340
#include <string>
#include <ostream>
#include <vector>

extern char DAT_00bb25f1;

namespace dice { namespace hfe {

struct Debug_561340 {
    char _pad[0x20];
    std::ostream os;
    char _tail[0x50];
    Debug_561340(int type, const std::string& file, int line, const std::string& tag);
    ~Debug_561340();
};

namespace world {

class IObjectTemplate {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void* queryInterface(unsigned int);
    virtual unsigned int getClassID();      // slot 4 (+0x20)
};

class TriggerTemplate {
public:
    char _pad[0x200];
    int m_triggerId;                        // +0x200
};

class IObject {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void* queryInterface(unsigned int);
    char _pad[0x20];
    IObjectTemplate* m_template;            // +0x28
};

class AmbientEffectArea {
public:
    bool isNetworked() const;
};

extern const unsigned int CID_AmbientEffectAreaTemplate;

class TriggerableManager {
public:
    static TriggerableManager* m_instance;
    void getTriggerablesWithTriggerId(int id, std::vector<IObject*>& out);
};

class AmbientEffectAreaManager {
public:
    static AmbientEffectAreaManager* m_instance;
    void getAreasWithTriggerId(int id, std::vector<IObject*>& out);
};

class Trigger {
public:
    char _pad0[0x240];
    TriggerTemplate* m_template;            // +0x240
    char _pad1[0x8];
    std::vector<IObject*> m_effectors;      // +0x250
    unsigned char m_268;                    // +0x268
    void findEffectors();
};

void Trigger::findEffectors()
{
    m_268 = 0;

    if (TriggerableManager::m_instance == 0) {
        dice::hfe::Debug_561340(6, std::string("Game/Objects/Game/Trigger.cpp"), 0x3d,
                                std::string(&DAT_00bb25f1)).os
            << "Could not get triggerableManager" << std::endl;
    }

    if (AmbientEffectAreaManager::m_instance == 0) {
        dice::hfe::Debug_561340(6, std::string("Game/Objects/Game/Trigger.cpp"), 0x40,
                                std::string(&DAT_00bb25f1)).os
            << "Could not get ambientEffectAreaManager" << std::endl;
    }

    if (TriggerableManager::m_instance != 0) {
        TriggerableManager::m_instance->getTriggerablesWithTriggerId(m_template->m_triggerId,
                                                                     m_effectors);
        if (AmbientEffectAreaManager::m_instance != 0) {
            AmbientEffectAreaManager::m_instance->getAreasWithTriggerId(m_template->m_triggerId,
                                                                        m_effectors);
        }

        for (std::vector<IObject*>::iterator it = m_effectors.begin();
             it != m_effectors.end(); ++it) {
            IObject* o = *it;
            if (o->m_template->getClassID() == CID_AmbientEffectAreaTemplate &&
                !reinterpret_cast<AmbientEffectArea*>(o)->isNetworked()) {
                m_268 = 0;
                return;
            }
        }
    }
}

} } }
