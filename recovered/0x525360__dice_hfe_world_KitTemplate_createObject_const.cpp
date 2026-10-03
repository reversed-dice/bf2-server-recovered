// FUNCTION: BF2 0x525360
#include <string>
namespace dice { namespace hfe { namespace world {

#define V(n) virtual void _v##n();
#define V10(a) V(a##0) V(a##1) V(a##2) V(a##3) V(a##4) V(a##5) V(a##6) V(a##7) V(a##8) V(a##9)
class IObject {
public:
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7)
    virtual void precache();
    V(9) V(10) V(11) V(12)
    virtual void setActive(bool a);
};
class ITemplate {
public:
    V10(0) V(10) V(11) V(12) V(13) V(14) V(15) V(16) V(17) V(18) V(19) V(20)
    virtual IObject* createObject();
};
class ITemplateManager {
public:
    V(0) V(1) V(2) V(3) V(4) V(5) V(6) V(7) V(8)
    virtual ITemplate* getTemplate(const std::string& name);
};
#undef V10
#undef V
extern ITemplateManager* g_templateManager;

class ObjectTemplate { public: static bool getIsPreCaching(); };
class KitTemplate;
class Kit { public: Kit(const KitTemplate* t); char _pad[0x2e0]; };

class KitTemplate {
public:
    Kit* createObject() const;
    char _pad0[0x238];
    std::string m_weaponTemplate;
};

Kit* KitTemplate::createObject() const
{
    Kit* k = new Kit(this);
    if (ObjectTemplate::getIsPreCaching() && !m_weaponTemplate.empty()) {
        ITemplate* t = g_templateManager->getTemplate(m_weaponTemplate);
        if (t) {
            IObject* o = t->createObject();
            if (o) {
                o->precache();
                o->setActive(true);
            }
        }
    }
    return k;
}

} } }
