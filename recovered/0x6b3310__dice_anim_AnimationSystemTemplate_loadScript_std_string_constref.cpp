// FUNCTION: BF2 0x6b3310
// BF2_FLAGS: -fno-strict-aliasing
#include <string>

namespace dice { namespace hfe { namespace io {

class Console {
public:
    static const std::string ignoredString_;
};

class IConsole {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual bool executeCommand(const std::string& cmd, std::string& result, int a, int b,
                                int c, int d, int e);
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual bool execute(const std::string& file, const std::string& a1, const std::string& a2,
                         const std::string& a3, const std::string& a4, const std::string& a5,
                         const std::string& a6, const std::string& a7, const std::string& a8,
                         const std::string& ignored);
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
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void setOutputEnabled(bool on);
    virtual bool isOutputEnabled();
};

extern IConsole* mainConsole;

} } }

namespace dice { namespace anim {

class AnimationSystemTemplate;
class IAnimationSystemTemplate;

class BundleManager {
public:
    BundleManager(AnimationSystemTemplate* tmpl);
    virtual ~BundleManager();
    char _pad[0x38];
};

class TriggerManager {
public:
    TriggerManager(AnimationSystemTemplate* tmpl);
    virtual ~TriggerManager();
    void setPriosForTriggers();
    char _pad[0x38];
};

class ValueHolderManager {
public:
    void loadValueHolders();
};

extern ValueHolderManager* valueHolderManager;

class IAnimationSystemTemplate {
public:
    virtual ~IAnimationSystemTemplate();
    virtual void addRef();
    virtual void release();
    virtual bool loadScript(const std::string& name);
    virtual void save(const std::string& name);
    virtual const std::string& getName();
};

class AnimationSystemTemplateManager {
public:
    virtual ~AnimationSystemTemplateManager();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void registerTemplate(IAnimationSystemTemplate* tmpl);
    virtual void m9();
    virtual void flush();
};

extern AnimationSystemTemplateManager* animationSystemTemplateManager;

class AnimationSystemTemplate : public IAnimationSystemTemplate {
public:
    virtual ~AnimationSystemTemplate();
    virtual void addRef();
    virtual void release();
    virtual bool loadScript(const std::string& name);
    void saveActive();
    TriggerManager* m_triggers;
    BundleManager* m_bundles;
};

bool AnimationSystemTemplate::loadScript(const std::string& name)
{
    if (m_bundles)
        return false;

    valueHolderManager->loadValueHolders();

    m_bundles = new BundleManager(this);
    m_triggers = new TriggerManager(this);

    bool wasEnabled = hfe::io::mainConsole->isOutputEnabled();
    hfe::io::mainConsole->setOutputEnabled(false);

    std::string::size_type len = getName().length();

    animationSystemTemplateManager->registerTemplate(this);

    bool ok = hfe::io::mainConsole->execute(name, "", "", "", "", "", "", "", "",
                                            hfe::io::Console::ignoredString_);

    if (len == 0)
        animationSystemTemplateManager->flush();

    if (ok)
        m_triggers->setPriosForTriggers();

    hfe::io::mainConsole->setOutputEnabled(wasEnabled);

    return ok;
}

} }
