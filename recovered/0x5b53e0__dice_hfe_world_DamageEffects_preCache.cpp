// FUNCTION: BF2 0x5b53e0
#include <list>

namespace dice { namespace hfe { namespace world {

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
    virtual void preCache() const;
};

struct DamageEffects {
    std::list<IObjectTemplate*> m_effects1;
    char _pad[0x20];
    std::list<IObjectTemplate*> m_effects2;

    void preCache();
};

void DamageEffects::preCache() {
    for (std::list<IObjectTemplate*>::iterator it = m_effects1.begin(); it != m_effects1.end(); ++it) {
        (*it)->preCache();
    }
    for (std::list<IObjectTemplate*>::iterator it = m_effects2.begin(); it != m_effects2.end(); ++it) {
        (*it)->preCache();
    }
}

} } }
