// FUNCTION: BF2 0x5a0970
#include <string>

namespace dice { namespace hfe {
namespace world {

class ITemplate {
public:
    virtual void v0();
};

class ObjectTemplateManager {
public:
    virtual void v00();
    virtual void v01();
    virtual void v02();
    virtual void v03();
    virtual void v04();
    virtual void v05();
    virtual void v06();
    virtual void v07();
    virtual void v08();
    virtual ITemplate* find(std::string const& name);
};

extern ObjectTemplateManager* objectTemplateManager;

class ParticleTemplate {
public:
    ITemplate* getCollisionEffectTemplate() const;
private:
    char _pad0[0x858];
    mutable std::string m_858;
    mutable ITemplate* m_860;
};

ITemplate* ParticleTemplate::getCollisionEffectTemplate() const
{
    if (!m_860) {
        if (!m_858.empty())
            m_860 = objectTemplateManager->find(m_858);
    }
    return m_860;
}

} } }
