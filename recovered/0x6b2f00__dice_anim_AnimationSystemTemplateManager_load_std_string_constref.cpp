// FUNCTION: BF2 0x6b2f00
#include <string>
#include <map>

namespace dice { namespace hfe {
struct NoCaseStringCompare {
    bool operator()(const std::string& a, const std::string& b) const;
};
} }

namespace dice { namespace anim {

class IAnimationSystemTemplate {
public:
    virtual ~IAnimationSystemTemplate();
};

class AnimationSystemTemplate : public IAnimationSystemTemplate {
public:
    AnimationSystemTemplate();
    virtual ~AnimationSystemTemplate();
    virtual void addRef();
    virtual void release();
    virtual bool loadScript(const std::string& name);
private:
    void* m_triggers;
    void* m_bundles;
    void* m_states;
    int m_flags20;
};

class AnimationSystemTemplateManager {
public:
    virtual ~AnimationSystemTemplateManager();
    virtual void create(const std::string& name);
    virtual IAnimationSystemTemplate* load(const std::string& name);
    virtual void release(IAnimationSystemTemplate* system);
private:
    char _pad0[0x8];
    char m_flag10;
    char _pad1[0x7];
    std::map<std::string, AnimationSystemTemplate*, dice::hfe::NoCaseStringCompare> m_templates;
};

IAnimationSystemTemplate* AnimationSystemTemplateManager::load(const std::string& name)
{
    std::map<std::string, AnimationSystemTemplate*, dice::hfe::NoCaseStringCompare>::iterator it = m_templates.find(name);
    AnimationSystemTemplate* tmpl;
    if (it == m_templates.end()) {
        tmpl = new AnimationSystemTemplate();
        if (m_flag10 == 0 && !tmpl->loadScript(name)) {
            delete tmpl;
            return 0;
        }
        m_templates.insert(std::make_pair(name, tmpl));
    } else {
        tmpl = it->second;
    }
    tmpl->addRef();
    return tmpl;
}

} }
