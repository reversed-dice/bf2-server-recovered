// FUNCTION: BF2 0x47bf20
// BF2_FLAGS: -fcrossjumping -fno-strict-aliasing
#include <map>
#include <set>
#include <string>

namespace dice { namespace hfe {

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
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual unsigned int getId() const;
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void preCache() const;
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
    virtual world::IObjectTemplate const* getTemplate(std::string const& name) const;
};

extern ObjectTemplateManager* objectTemplateManager;

}

class GameLogic {
public:
    virtual void addRef();
    virtual void getRef();
    virtual void release();
    virtual void queryInterface(unsigned int) const;
    virtual void init();
    virtual void load(std::string const&);
    virtual void unload();
    virtual void close();
    virtual void update(float);
    virtual void reset();
    virtual void restartDemoPlayback();
    virtual void v11();
    virtual void v12();
    virtual void addPreStoredTemplate(unsigned int, unsigned int, unsigned int);

    char _pad0[0x10];
    std::map<unsigned int, std::string> m_mapA;   // 0x18
    std::map<unsigned int, std::string> m_mapB;   // 0x48
    char _pad1[0x3d0];
    char m_shuttingDown;                          // 0x448

    bool preCacheSpawnedTemplates();
};

bool GameLogic::preCacheSpawnedTemplates() {
    std::set<world::IObjectTemplate const*> templates;
    world::IObjectTemplate const* tmpl;
    for (std::map<unsigned int, std::string>::const_iterator it = m_mapB.begin(); it != m_mapB.end(); ++it) {
        if (m_shuttingDown) return false;
        tmpl = world::objectTemplateManager->getTemplate(it->second);
        if (tmpl) {
            templates.insert(tmpl);
            addPreStoredTemplate(tmpl->getId(), 0x40, 0x40);
        }
    }
    for (std::map<unsigned int, std::string>::const_iterator it = m_mapA.begin(); it != m_mapA.end(); ++it) {
        if (m_shuttingDown) return false;
        tmpl = world::objectTemplateManager->getTemplate(it->second);
        if (tmpl) {
            templates.insert(tmpl);
            addPreStoredTemplate(tmpl->getId(), 0x40, 0x40);
        }
    }
    tmpl = world::objectTemplateManager->getTemplate(std::string("ordermarker_move"));
    world::IObjectTemplate const* defendMarker = world::objectTemplateManager->getTemplate(std::string("ordermarker_defend"));
    world::IObjectTemplate const* attackMarker = world::objectTemplateManager->getTemplate(std::string("ordermarker_attack"));
    if (tmpl) templates.insert(tmpl);
    if (defendMarker) templates.insert(defendMarker);
    if (attackMarker) templates.insert(attackMarker);
    for (std::set<world::IObjectTemplate const*>::const_iterator it = templates.begin(); it != templates.end(); ++it) {
        if (m_shuttingDown) return false;
        (*it)->preCache();
    }
    return true;
}

} }
