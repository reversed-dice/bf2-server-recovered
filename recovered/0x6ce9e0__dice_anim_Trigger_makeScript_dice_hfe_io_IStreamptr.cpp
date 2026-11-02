// BF2_FLAGS: -fno-strict-aliasing
// FUNCTION: BF2 0x6ce9e0
#include <sstream>
#include <string>
#include <vector>

namespace dice { namespace hfe { namespace io {

class IStream {
public:
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual unsigned int write(const char* data, unsigned int size);
};

} } }

namespace dice { namespace anim {

class Bundle;
class Trigger;

class TriggerManager {
public:
    std::string const& getName(Trigger const* t) const;
};

class BundleManager {
public:
    std::string const& getBundleName(Bundle const* b) const;
};

class TemplateHolder {
public:
    char _pad0[0x8];
    TriggerManager* m_triggerManager;   // +0x8
    BundleManager* m_bundleManager;     // +0x10
};

class SystemTemplateManager {
public:
    virtual void v0(); virtual void v1(); virtual void v2();
    virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8();
    virtual TemplateHolder* getHolder();
};

extern SystemTemplateManager* animationSystemTemplateManager;

class Trigger {
public:
    virtual ~Trigger();
    virtual void makeScript(dice::hfe::io::IStream* stream);
    virtual bool getAlreadySaved() const;
    virtual void setAlreadySaved(bool);
    virtual int getType() const;
    virtual std::string getTypeName() const;
    std::vector<Bundle*> m_bundles;      // +0x8
    std::vector<Trigger*> m_children;    // +0x20
    char _pad0[0x4];                     // +0x38
    float m_fadeInTime;                  // +0x3c
    char _pad1[0x2];                     // +0x40
    bool m_saved;                        // +0x42
};

void Trigger::makeScript(dice::hfe::io::IStream* stream)
{
    m_saved = true;
    std::ostringstream ss(std::ios_base::out);
    TriggerManager* tm = animationSystemTemplateManager->getHolder()->m_triggerManager;
    BundleManager* bm = animationSystemTemplateManager->getHolder()->m_bundleManager;
    std::string const& name = tm->getName(this);

    ss << "animationSystem.createTrigger " << getTypeName() << " " << name << std::endl;

    if (m_fadeInTime > 0.0f)
        ss << "animationTrigger.fadeInTime " << (double)m_fadeInTime << std::endl;

    for (std::vector<Trigger*>::const_iterator it = m_children.begin(); it != m_children.end(); ++it)
        ss << "animationTrigger.addChild " << tm->getName(*it) << std::endl;

    for (std::vector<Bundle*>::const_iterator it = m_bundles.begin(); it != m_bundles.end(); ++it)
        ss << "animationTrigger.addBundle " << bm->getBundleName(*it) << std::endl;

    std::string str = ss.str();
    typedef unsigned int (*Wfn)(void*, const char*, unsigned int);
    Wfn f = *(Wfn*)(*(char**)stream + 0x28);
    f(stream, str.data(), (unsigned int)str.size());
}

} }
