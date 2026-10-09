// FUNCTION: BF2 0x797e20
// BF2_FLAGS: -fno-strict-aliasing
#include <map>
#include <string>
namespace dice { namespace hfe { namespace ai {

class KitTemplate {
public:
    virtual void _v00(); virtual void _v08(); virtual void _v10(); virtual void _v18();
    virtual void _v20(); virtual void _v28(); virtual void _v30(); virtual void _v38();
    virtual void release();
};

class KitTemplateManager {
public:
    bool reset();
    void* m_owner;
    std::map<std::string, KitTemplate*> m_templates;
    std::map<std::string, KitTemplate*>::iterator m_it;
    std::map<KitTemplate*, std::string> m_names;
};

bool KitTemplateManager::reset()
{
    for (m_it = m_templates.begin(); m_it != m_templates.end(); ++m_it) {
        KitTemplate* t = m_it->second;
        if (t) t->release();
    }
    m_templates.clear();
    m_names.clear();
    return true;
}

} } }
