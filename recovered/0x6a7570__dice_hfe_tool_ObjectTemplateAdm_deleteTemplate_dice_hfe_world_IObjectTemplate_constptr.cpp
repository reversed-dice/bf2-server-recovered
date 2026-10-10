// FUNCTION: BF2 0x6a7570
// BF2_FLAGS: -fno-strict-aliasing
#include <map>

namespace dice { namespace hfe {

namespace world {
class IObjectTemplate;
class IObject {
public:
    char _pad[0x28];
    const IObjectTemplate* m_template;
};
class ObjectManager {
public:
    virtual void d00(); virtual void d01(); virtual void d02(); virtual void d03();
    virtual void d04(); virtual void d05(); virtual void d06(); virtual void d07();
    virtual void d08(); virtual void d09(); virtual void d10(); virtual void d11();
    virtual void d12();
    virtual std::map<unsigned int, IObject*>& m68();
};
class ObjectTemplateManager {
public:
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3();
    virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7();
    virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11();
    virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15();
    virtual void p16();
    virtual void removeTemplate(const IObjectTemplate* t);
    virtual void p18(); virtual void p19();
    virtual const IObjectTemplate* getActiveTemplate();
    virtual void setActiveTemplate(const IObjectTemplate* t);
};
extern ObjectManager* objectManager;
extern ObjectTemplateManager* objectTemplateManager;
}

class IGame {
public:
    virtual void g00(); virtual void g01(); virtual void g02(); virtual void g03();
    virtual void g04(); virtual void g05(); virtual void g06(); virtual void g07();
    virtual void g08(); virtual void g09(); virtual void g10(); virtual void g11();
    virtual void g12(); virtual void g13(); virtual void g14(); virtual void g15();
    virtual void g16(); virtual void g17(); virtual void g18(); virtual void g19();
    virtual void g20(); virtual void g21(); virtual void g22(); virtual void g23();
    virtual void g24(); virtual void g25(); virtual void g26(); virtual void g27();
    virtual void g28(); virtual void g29(); virtual void g30(); virtual void g31();
    virtual void g32(); virtual void g33(); virtual void g34(); virtual void g35();
    virtual void g36(); virtual void g37(); virtual void g38(); virtual void g39();
    virtual void m140(world::IObject* p);
};
extern IGame* game;

namespace tool {
class ObjectTemplateAdm {
public:
    void deleteTemplate(const world::IObjectTemplate* t);
};
} } }

void dice::hfe::tool::ObjectTemplateAdm::deleteTemplate(const world::IObjectTemplate* t) {
    if (t) {
        std::map<unsigned int, world::IObject*>& m = world::objectManager->m68();
        std::map<unsigned int, world::IObject*>::iterator last = m.end();
        std::map<unsigned int, world::IObject*>::iterator it = m.begin();
        if (it != last) {
            do {
                if (it->second->m_template == t && game != 0) {
                    game->m140(it->second);
                }
                ++it;
            } while (it != last);
        }
        world::objectTemplateManager->removeTemplate(t);
        if (t == world::objectTemplateManager->getActiveTemplate()) {
            world::objectTemplateManager->setActiveTemplate(0);
        }
    }
}
