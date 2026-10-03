// FUNCTION: BF2 0x797ed0
// BF2_FLAGS: -fno-strict-aliasing
// dice_hfe_ai_KitTemplateManager_dtor_KitTemplateManager (0x797ed0)
#include <map>
#include <string>

struct IKitTemplateManager { virtual ~IKitTemplateManager(); };
struct Pod { ~Pod() {} int _p; };
struct KitTemplate {
    virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3();
    virtual void f4(); virtual void f5(); virtual void f6();
    virtual ~KitTemplate();
};

class KitTemplateManager : public IKitTemplateManager {
public:
    static KitTemplateManager* m_instance;
    std::map<std::string, KitTemplate*> m_kits;
    std::map<std::string, KitTemplate*>::iterator m_it;
    std::map<KitTemplate*, std::string> m_names;
    Pod* m_70;
    virtual ~KitTemplateManager();
};

KitTemplateManager::~KitTemplateManager()
{
    m_instance = 0;
    for (m_it = m_kits.begin(); m_it != m_kits.end(); ++m_it)
        delete m_it->second;
    delete m_70;
}

// REVERSED_FUNCTION: dice_hfe_ai_KitTemplateManager_dtor_KitTemplateManager (0x797ed0)
