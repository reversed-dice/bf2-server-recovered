// FUNCTION: BF2 0x5529b0
// BF2_FLAGS: -fno-strict-aliasing
#include <string>
namespace dice { namespace hfe { namespace world {

class ITemplate;

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
    virtual ITemplate* findTemplate(std::string const& name);
};

extern ObjectTemplateManager* objectTemplateManager;

class SoldierTemplate {
public:
    char _pad0[0x2a8];
    void* m_2a8;
    void* m_2b0;
    void* m_2b8;
    void* m_2c0;
    void* m_2c8;
    char _pad1[0x320 - 0x2d0];
    void* m_320;
    void initAnimation();
};

void SoldierTemplate::initAnimation() {
    m_2a8 = 0;
    m_2b0 = 0;
    m_2c8 = 0;
    m_2c0 = 0;
    m_320 = objectTemplateManager->findTemplate(std::string("fallingWeapon"));
    if (m_320 != 0)
        ((void (*)(void*, int, int))(*(void***)m_320)[0x98 / 8])(m_320, 0x40, 0);
}

} } }
