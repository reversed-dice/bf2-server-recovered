// FUNCTION: BF2 0x47a500
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
#include <map>

namespace dice { namespace hfe {

struct Settings {
    virtual void _v0();
    virtual void _v1();
    virtual void _v2();
    virtual void _v3();
    virtual void _v4();
    virtual void _v5();
    virtual void _v6();
    virtual void _v7();
    virtual void _v8();
    virtual void _v9();
    virtual void _v10();
    virtual void _v11();
    virtual void _v12();
    virtual void _v13();
    virtual void _v14();
    virtual void _v15();
    virtual void _v16();
    virtual void _v17();
    virtual void _v18();
    virtual void _v19();
    virtual const char* getFlag(const std::string& name, const char& def) const;
};

extern Settings* settings;

namespace world {
class IObjectTemplate;
extern void* objectTemplateManager;
extern void* objectManager;
}

namespace io {
class NetworkManager {
public:
    unsigned int regressNetworkableIds();
};
extern NetworkManager* networkManager;
}

extern void* game;

class GameLogic {
public:
    char _pad0[0x2f8];
    unsigned int m_0x2f8;
    unsigned int m_0x2fc;
    char _pad1[0x3c8 - 0x300];
    std::map<unsigned int, unsigned int> m_preStored;

    void createPreStoredObjects();
};

void GameLogic::createPreStoredObjects()
{
    char flag = *dice::hfe::settings->getFlag(std::string("GSUseObjectCache"), (char)1);
    if (flag) {
        m_0x2f8 = dice::hfe::io::networkManager->regressNetworkableIds();
        for (std::map<unsigned int, unsigned int>::iterator it = m_preStored.begin(); it != m_preStored.end(); ++it) {
            typedef void* (*GetTemplateFn)(void*, unsigned int);
            void* t = ((GetTemplateFn)(*(void***)world::objectTemplateManager)[0xc0 / 8])(world::objectTemplateManager, it->first);
            unsigned int n = it->second;
            for (unsigned int i = 0; i < n; ++i) {
                typedef void (*CreateFn)(void*, void*);
                ((CreateFn)(*(void***)game)[0x100 / 8])(game, t);
            }
        }
        typedef void (*RefreshFn)(void*);
        ((RefreshFn)(*(void***)world::objectManager)[0x130 / 8])(world::objectManager);
        m_0x2fc = dice::hfe::io::networkManager->regressNetworkableIds();
    }
    m_preStored.clear();
}

} }
